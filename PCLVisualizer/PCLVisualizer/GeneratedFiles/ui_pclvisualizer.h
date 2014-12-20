/********************************************************************************
** Form generated from reading UI file 'pclvisualizer.ui'
**
** Created: Sat Nov 29 14:11:31 2014
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCLVISUALIZER_H
#define UI_PCLVISUALIZER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PCLVisualizerClass
{
public:
    QAction *OpenFile;
    QAction *Exit;
    QAction *SetColor;
    QAction *OpenProjectManage;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVTKWidget *qvtkWidget;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_S;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_ProjectManageWindows;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *PCLVisualizerClass)
    {
        if (PCLVisualizerClass->objectName().isEmpty())
            PCLVisualizerClass->setObjectName(QString::fromUtf8("PCLVisualizerClass"));
        PCLVisualizerClass->resize(1308, 937);
        PCLVisualizerClass->setAutoFillBackground(true);
        OpenFile = new QAction(PCLVisualizerClass);
        OpenFile->setObjectName(QString::fromUtf8("OpenFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        OpenFile->setIcon(icon);
        Exit = new QAction(PCLVisualizerClass);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        SetColor = new QAction(PCLVisualizerClass);
        SetColor->setObjectName(QString::fromUtf8("SetColor"));
        OpenProjectManage = new QAction(PCLVisualizerClass);
        OpenProjectManage->setObjectName(QString::fromUtf8("OpenProjectManage"));
        centralWidget = new QWidget(PCLVisualizerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAutoFillBackground(false);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qvtkWidget = new QVTKWidget(centralWidget);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));

        gridLayout->addWidget(qvtkWidget, 0, 0, 1, 1);

        PCLVisualizerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PCLVisualizerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1308, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_S = new QMenu(menuBar);
        menu_S->setObjectName(QString::fromUtf8("menu_S"));
        PCLVisualizerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PCLVisualizerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PCLVisualizerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PCLVisualizerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PCLVisualizerClass->setStatusBar(statusBar);
        dockWidget_ProjectManageWindows = new QDockWidget(PCLVisualizerClass);
        dockWidget_ProjectManageWindows->setObjectName(QString::fromUtf8("dockWidget_ProjectManageWindows"));
        dockWidget_ProjectManageWindows->setMinimumSize(QSize(89, 111));
        dockWidget_ProjectManageWindows->setFloating(false);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        dockWidget_ProjectManageWindows->setWidget(dockWidgetContents);
        PCLVisualizerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_ProjectManageWindows);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_S->menuAction());
        menu_F->addAction(OpenFile);
        menu_F->addAction(Exit);
        menu_S->addAction(SetColor);
        menu_S->addAction(OpenProjectManage);

        retranslateUi(PCLVisualizerClass);

        QMetaObject::connectSlotsByName(PCLVisualizerClass);
    } // setupUi

    void retranslateUi(QMainWindow *PCLVisualizerClass)
    {
        PCLVisualizerClass->setWindowTitle(QApplication::translate("PCLVisualizerClass", "PCLVisualizer", 0, QApplication::UnicodeUTF8));
        OpenFile->setText(QApplication::translate("PCLVisualizerClass", "\346\211\223\345\274\200(O)", 0, QApplication::UnicodeUTF8));
        Exit->setText(QApplication::translate("PCLVisualizerClass", "\351\200\200\345\207\272(E)", 0, QApplication::UnicodeUTF8));
        SetColor->setText(QApplication::translate("PCLVisualizerClass", "\351\242\234\350\211\262(C)", 0, QApplication::UnicodeUTF8));
        OpenProjectManage->setText(QApplication::translate("PCLVisualizerClass", "\351\241\271\347\233\256\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        menu_F->setTitle(QApplication::translate("PCLVisualizerClass", "\346\226\207\344\273\266(F)", 0, QApplication::UnicodeUTF8));
        menu_S->setTitle(QApplication::translate("PCLVisualizerClass", "\350\256\276\347\275\256(S)", 0, QApplication::UnicodeUTF8));
        dockWidget_ProjectManageWindows->setWindowTitle(QApplication::translate("PCLVisualizerClass", "\351\241\271\347\233\256\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PCLVisualizerClass", "\345\267\245\347\250\213\347\233\256\345\275\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PCLVisualizerClass: public Ui_PCLVisualizerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLVISUALIZER_H
