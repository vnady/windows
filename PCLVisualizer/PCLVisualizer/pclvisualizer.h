#ifndef PCLVISUALIZER_H
#define PCLVISUALIZER_H

#include <QVTKWidget.h>
#include <QtGui/QMainWindow>
#include <QFileDialog>
#include "ui_pclvisualizer.h"
#include <pcl/io/ply_io.h>
#include <pcl/visualization/pcl_visualizer.h>


typedef pcl::PointNormal PointNT;
typedef pcl::PointCloud<pcl::PointNormal> PointCloudWithNormals;
typedef pcl::visualization::PointCloudColorHandlerCustom<PointNT> ColorHandlerT;

//色彩点云
typedef pcl::PointXYZRGBA PointT;
typedef pcl::PointCloud<PointT> PointCloudT;

class PCLVisualizer : public QMainWindow
{
	Q_OBJECT

public:
	PCLVisualizer(QWidget *parent = 0, Qt::WFlags flags = 0);
	~PCLVisualizer();
	void cloudReader(QString filePath,PointCloudWithNormals::Ptr cloud);
	void initPclViewer(QWidget *parent);
private:
	Ui::PCLVisualizerClass ui;
	boost::shared_ptr<pcl::visualization::PCLVisualizer> mPclViewer;

private slots:

	//工具栏响应槽函数
	void fileOpenSlot();
	void ExitSlot();
	void OpenProjectManageSlot();
};
#endif // PCLVISUALIZER_H
