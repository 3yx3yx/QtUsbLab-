/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QPushButton *addNoteButton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *startButton;
    QPushButton *stopButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *newFileButton;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_4;
    QPushButton *refreshCom;
    QLabel *portStatusLabel;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_2;
    QLabel *timerStatus;
    QFrame *line;
    QSpacerItem *horizontalSpacer_6;
    QCustomPlot *widget;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QCheckBox *checkGraph2;
    QLabel *Value2;
    QComboBox *combo4;
    QLabel *Value1;
    QComboBox *combo3;
    QLabel *Value4;
    QLabel *Value3;
    QComboBox *combo2;
    QComboBox *combo1;
    QSpacerItem *horizontalSpacer;
    QFrame *line_6;
    QCheckBox *checkGraph3;
    QCheckBox *checkGraph1;
    QCheckBox *checkGraph4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1378, 1015);
        QPalette palette;
        MainWindow->setPalette(palette);
        MainWindow->setMouseTracking(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMouseTracking(true);
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setBaseSize(QSize(0, 900));

        verticalLayout_3->addWidget(tableWidget);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QPalette palette1;
        QBrush brush(QColor(190, 244, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit->setPalette(palette1);

        verticalLayout_3->addWidget(lineEdit);

        addNoteButton = new QPushButton(centralwidget);
        addNoteButton->setObjectName(QString::fromUtf8("addNoteButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Light"));
        font.setPointSize(12);
        addNoteButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons1/img/free-icon-font-edit-3917361.png"), QSize(), QIcon::Normal, QIcon::Off);
        addNoteButton->setIcon(icon);
        addNoteButton->setIconSize(QSize(21, 21));

        verticalLayout_3->addWidget(addNoteButton);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setMinimumSize(QSize(80, 80));
        startButton->setMouseTracking(true);
#if QT_CONFIG(tooltip)
        startButton->setToolTip(QString::fromUtf8("\320\235\320\260\321\207\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214 \320\277\320\276\320\272\320\260\320\267\320\260\320\275\320\270\320\271"));
#endif // QT_CONFIG(tooltip)
        startButton->setToolTipDuration(-1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons1/img/free-icon-font-play-alt-3914307.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon1);
        startButton->setIconSize(QSize(45, 45));

        horizontalLayout_7->addWidget(startButton);

        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setMinimumSize(QSize(80, 80));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons1/img/free-icon-font-stop-3917685.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon2);
        stopButton->setIconSize(QSize(45, 45));

        horizontalLayout_7->addWidget(stopButton);


        verticalLayout_3->addLayout(horizontalLayout_7);


        gridLayout_3->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newFileButton = new QPushButton(centralwidget);
        newFileButton->setObjectName(QString::fromUtf8("newFileButton"));
        newFileButton->setMinimumSize(QSize(0, 35));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons1/img/free-icon-font-add-document-3914213.png"), QSize(), QIcon::Normal, QIcon::Off);
        newFileButton->setIcon(icon3);
        newFileButton->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(newFileButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 35));
        QPalette palette2;
        QBrush brush2(QColor(9, 190, 93, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton->setPalette(palette2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icons1/img/free-icon-font-jpg-3914265.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        refreshCom = new QPushButton(centralwidget);
        refreshCom->setObjectName(QString::fromUtf8("refreshCom"));
        refreshCom->setMinimumSize(QSize(10, 35));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icons1/img/free-icon-font-refresh-3917293.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshCom->setIcon(icon5);
        refreshCom->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(refreshCom);

        portStatusLabel = new QLabel(centralwidget);
        portStatusLabel->setObjectName(QString::fromUtf8("portStatusLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        portStatusLabel->setFont(font1);

        horizontalLayout->addWidget(portStatusLabel);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        timerStatus = new QLabel(centralwidget);
        timerStatus->setObjectName(QString::fromUtf8("timerStatus"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Light"));
        font2.setPointSize(11);
        timerStatus->setFont(font2);
        timerStatus->setAutoFillBackground(false);

        horizontalLayout->addWidget(timerStatus);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout->addWidget(widget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkGraph2 = new QCheckBox(centralwidget);
        checkGraph2->setObjectName(QString::fromUtf8("checkGraph2"));
        checkGraph2->setFont(font);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/icons1/img/free-icon-font-stats-3916729.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkGraph2->setIcon(icon6);

        gridLayout->addWidget(checkGraph2, 3, 3, 1, 1);

        Value2 = new QLabel(centralwidget);
        Value2->setObjectName(QString::fromUtf8("Value2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Swis721 WGL4 BT"));
        font3.setPointSize(33);
        font3.setBold(true);
        Value2->setFont(font3);

        gridLayout->addWidget(Value2, 1, 3, 1, 1);

        combo4 = new QComboBox(centralwidget);
        combo4->setObjectName(QString::fromUtf8("combo4"));

        gridLayout->addWidget(combo4, 2, 7, 1, 1);

        Value1 = new QLabel(centralwidget);
        Value1->setObjectName(QString::fromUtf8("Value1"));
        Value1->setFont(font3);

        gridLayout->addWidget(Value1, 1, 1, 1, 1);

        combo3 = new QComboBox(centralwidget);
        combo3->setObjectName(QString::fromUtf8("combo3"));

        gridLayout->addWidget(combo3, 2, 5, 1, 1);

        Value4 = new QLabel(centralwidget);
        Value4->setObjectName(QString::fromUtf8("Value4"));
        Value4->setFont(font3);

        gridLayout->addWidget(Value4, 1, 7, 1, 1);

        Value3 = new QLabel(centralwidget);
        Value3->setObjectName(QString::fromUtf8("Value3"));
        Value3->setFont(font3);

        gridLayout->addWidget(Value3, 1, 5, 1, 1);

        combo2 = new QComboBox(centralwidget);
        combo2->setObjectName(QString::fromUtf8("combo2"));

        gridLayout->addWidget(combo2, 2, 3, 1, 1);

        combo1 = new QComboBox(centralwidget);
        combo1->setObjectName(QString::fromUtf8("combo1"));

        gridLayout->addWidget(combo1, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 0, 0, 1, 9);

        checkGraph3 = new QCheckBox(centralwidget);
        checkGraph3->setObjectName(QString::fromUtf8("checkGraph3"));
        checkGraph3->setFont(font);
        checkGraph3->setIcon(icon6);

        gridLayout->addWidget(checkGraph3, 3, 5, 1, 1);

        checkGraph1 = new QCheckBox(centralwidget);
        checkGraph1->setObjectName(QString::fromUtf8("checkGraph1"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Light"));
        font4.setPointSize(13);
        checkGraph1->setFont(font4);
        checkGraph1->setIcon(icon6);

        gridLayout->addWidget(checkGraph1, 3, 1, 1, 1);

        checkGraph4 = new QCheckBox(centralwidget);
        checkGraph4->setObjectName(QString::fromUtf8("checkGraph4"));
        checkGraph4->setFont(font);
        checkGraph4->setIcon(icon6);

        gridLayout->addWidget(checkGraph4, 3, 7, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 6, 1, 1);

        gridLayout->setColumnStretch(1, 3);
        gridLayout->setColumnStretch(3, 3);
        gridLayout->setColumnStretch(5, 3);
        gridLayout->setColumnStretch(7, 3);

        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(1, 4);

        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        line_13 = new QFrame(centralwidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_13, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 7);
        gridLayout_3->setColumnStretch(2, 2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1378, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addNoteButton->setText(QCoreApplication::translate("MainWindow", "      \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203", nullptr));
#if QT_CONFIG(statustip)
        startButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        startButton->setWhatsThis(QCoreApplication::translate("MainWindow", "\320\275\320\260\321\207\320\260\321\202\321\214 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        startButton->setAccessibleName(QCoreApplication::translate("MainWindow", "\320\265\320\272\320\265\320\272\320\265", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        startButton->setAccessibleDescription(QCoreApplication::translate("MainWindow", "\320\275\320\275\320\275\320\265\320\275", nullptr));
#endif // QT_CONFIG(accessibility)
        startButton->setText(QString());
#if QT_CONFIG(tooltip)
        stopButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\270 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\270 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273"));
#endif // QT_CONFIG(tooltip)
        stopButton->setText(QString());
#if QT_CONFIG(tooltip)
        newFileButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\271", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\271"));
#endif // QT_CONFIG(tooltip)
        newFileButton->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 \320\262 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 ", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 \320\262 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 "));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        refreshCom->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\321\200\321\202\320\276\320\262", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\321\200\321\202\320\276\320\262"));
#endif // QT_CONFIG(tooltip)
        refreshCom->setText(QString());
        portStatusLabel->setText(QCoreApplication::translate("MainWindow", "status", nullptr));
        timerStatus->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\271\321\202\320\265 \321\204\320\260\320\271\320\273 \321\202\320\260\320\261\320\273\320\270\321\206\321\213. \320\237\320\276\321\201\320\273\320\265 \320\275\320\260\320\266\320\260\321\202\320\270\321\217 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 \n"
"\"\321\201\321\202\320\260\321\200\321\202\" \320\262 \320\275\320\265\320\274 \320\261\321\203\320\264\321\203\321\202 \320\267\320\260\320\277\320\270\321\201\320\260\320\275\321\213 \320\277\320\276\320\272\320\260\320\267\320\260\320\275\320\270\321\217 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262", nullptr));
#if QT_CONFIG(tooltip)
        checkGraph2->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265"));
#endif // QT_CONFIG(tooltip)
        checkGraph2->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        Value2->setText(QString());
#if QT_CONFIG(tooltip)
        combo4->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262"));
#endif // QT_CONFIG(tooltip)
        Value1->setText(QString());
#if QT_CONFIG(tooltip)
        combo3->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262"));
#endif // QT_CONFIG(tooltip)
        Value4->setText(QString());
        Value3->setText(QString());
#if QT_CONFIG(tooltip)
        combo2->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        combo1->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkGraph3->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265"));
#endif // QT_CONFIG(tooltip)
        checkGraph3->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
#if QT_CONFIG(tooltip)
        checkGraph1->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265"));
#endif // QT_CONFIG(tooltip)
        checkGraph1->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
#if QT_CONFIG(tooltip)
        checkGraph4->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265"));
#endif // QT_CONFIG(tooltip)
        checkGraph4->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
