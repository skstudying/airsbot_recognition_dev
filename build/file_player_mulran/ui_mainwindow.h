/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *quitButton;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(670, 189);
        MainWindow->setToolTipDuration(2);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"background-color:  rgb(50, 50, 50)\n"
"}\n"
"\n"
"QMenuBar{\n"
"background-color:   rgb(50, 50, 50)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(90, 90, 90);\n"
"	color: rgb(210,210,210);\n"
"}\n"
"QPushButton {\n"
"     background-color: rgb(76, 76, 76);\n"
"	 color: rgb(210,210,210);\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: rgb(76, 76, 76);\n"
"	color: rgb(150,150,150);\n"
"}\n"
"\n"
"QLabel{\n"
"    color: rgb(210,210,210);\n"
"}\n"
"\n"
"QComboBox {\n"
"	background-color:  rgb(150,150,150)\n"
"}\n"
"\n"
"QCheckBox {\n"
"   border: none;\n"
"   color: rgb(210,210,210);\n"
"}\n"
"\n"
"QFrame#line,#line_2,#line_3,#line_4,#line_5,#line_6,#line_7,#line_8,#line_9,#line_10{\n"
"    background-color: rgb(70,70,70);\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(300, 15));

        verticalLayout_4->addWidget(label_3);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(205, 25));

        gridLayout->addWidget(pushButton, 0, 1, 1, 2);


        verticalLayout_4->addLayout(gridLayout);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout->addWidget(checkBox_3);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        horizontalLayout->addWidget(doubleSpinBox);


        verticalLayout_4->addLayout(horizontalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setMinimumSize(QSize(521, 0));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        horizontalSpacer_2 = new QSpacerItem(1000, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        sizePolicy.setHeightForWidth(quitButton->sizePolicy().hasHeightForWidth());
        quitButton->setSizePolicy(sizePolicy);
        quitButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(quitButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "File Player", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "MulRan File Player", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Loop", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "Skip stop section", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "Auto start", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Speed", Q_NULLPTR));
        quitButton->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
