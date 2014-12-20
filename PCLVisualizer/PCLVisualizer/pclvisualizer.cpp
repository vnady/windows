#include "pclvisualizer.h"

PCLVisualizer::PCLVisualizer(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	//信号槽连接
	connect(ui.OpenFile,SIGNAL(triggered()),this,SLOT(fileOpenSlot()));
	connect(ui.Exit,SIGNAL(triggered()),this,SLOT(ExitSlot()));
	connect(ui.OpenProjectManage, SIGNAL(triggered()), this, SLOT(OpenProjectManageSlot()));
	
	mPclViewer.reset(new pcl::visualization::PCLVisualizer ("viewer", false));	
	ui.qvtkWidget->update();
}

PCLVisualizer::~PCLVisualizer()
{

}

//打开文件
void PCLVisualizer::fileOpenSlot()
{
	//系统风格对话框
	QString mCaption("Open");
	QString mDir(".");
	QStringList mFilters;
	mFilters<<"All types (*)"
		<<"3D Point cloud (*.txt)"
		<<"3DC point cloud format (*.3dc *.asc)"
		<<"3D Studio model format (*.3ds)"
		<<"AC3D Database format (*.ac)"
		<<"BSP files (*.bsp)"
		<<"Biovision motion hierarchical file (*.bvh)"
		<<"COLLADA 1.4.x DAE format (*.dae)"
		<<"COLLADA 1.4.x ZAE format (*.zae)"
		<<"dicom image format (*.mag *.ph *.ima *.dic *.dcm *.dicom)"
		<<"Designer Workbench model format (*.dw)"
		<<"Autodesk DXF format (*.dxf)"
		<<"FBX format (*.fbx)";
	QString mFilter(mFilters.join(";;"));
	QString mSelectedFilter("All types (*)");
	QString mQFilePath = QFileDialog::getOpenFileName(0,mCaption,mDir,mFilter,&mSelectedFilter,0);
	if(!mQFilePath.isNull())
	{
		//显示窗口初始化
		//QHBoxLayout *mHLayoutOne = new QHBoxLayout;
		//ui.displayWindow->setLayout(mHLayoutOne);
		//mHLayoutOne->addWidget(ui.displayWindow);
		PointCloudWithNormals::Ptr mObjectAllCloud(new PointCloudWithNormals);
		cloudReader(mQFilePath, mObjectAllCloud);
		mPclViewer->addPointCloud(mObjectAllCloud, ColorHandlerT(mObjectAllCloud, 255.0, 0.0, 0.0), "object");
		vtkSmartPointer<vtkRenderWindow> mRenderWindows;

		mRenderWindows = mPclViewer->getRenderWindow();
		ui.qvtkWidget->SetRenderWindow(mRenderWindows);
		ui.qvtkWidget->update();
		//visu.setPosition(ui.displayWindow->x(), ui.displayWindow->y());
		//visu.setSize(ui.displayWindow->width(), ui.displayWindow->height());
		//visu.addPointCloud (mObjectAllCloud, ColorHandlerT(mObjectAllCloud, 255.0, 0.0, 0.0), "object");//红色
		////visu.addPointCloud (mSceneAllCloudN,  ColorHandlerT(mSceneAllCloudN, 0.0, 255.0, 0.0), "scene");//绿色
		//visu.spin();
	}
}

//退出
void PCLVisualizer::ExitSlot()
{
	close();
	exit(0);
}

void PCLVisualizer::OpenProjectManageSlot()
{
	if (ui.dockWidget_ProjectManageWindows->isHidden())
	{
		ui.dockWidget_ProjectManageWindows->show();
	}
	else if (ui.dockWidget_ProjectManageWindows->isVisible())
	{
		ui.dockWidget_ProjectManageWindows->hide();
	}
}

void PCLVisualizer::cloudReader(QString filePath, PointCloudWithNormals::Ptr cloud)
{
	pcl::PLYReader mReader;
	mReader.template read<pcl::PointNormal>(filePath.toStdString(), *cloud, 0);
}

void PCLVisualizer::initPclViewer(QWidget *parent)
{
	mPclViewer->setPosition(parent->x(), parent->y());
	mPclViewer->setSize(parent->width(), parent->height());
}
