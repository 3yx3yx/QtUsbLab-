/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEditHeight;
    QSlider *horizontalSliderDPI;
    QLabel *label_3;
    QLineEdit *lineEditWidth;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLabel *label;
    QSlider *horizontalSliderSize;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(203, 165);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEditHeight = new QLineEdit(Dialog);
        lineEditHeight->setObjectName(QString::fromUtf8("lineEditHeight"));
        lineEditHeight->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(lineEditHeight, 2, 1, 1, 1);

        horizontalSliderDPI = new QSlider(Dialog);
        horizontalSliderDPI->setObjectName(QString::fromUtf8("horizontalSliderDPI"));
        horizontalSliderDPI->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderDPI, 3, 1, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEditWidth = new QLineEdit(Dialog);
        lineEditWidth->setObjectName(QString::fromUtf8("lineEditWidth"));
        lineEditWidth->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(lineEditWidth, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalSliderSize = new QSlider(Dialog);
        horizontalSliderSize->setObjectName(QString::fromUtf8("horizontalSliderSize"));
        horizontalSliderSize->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSize, 0, 1, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\320\222\321\213\321\201\320\276\321\202\320\260", nullptr));
        lineEditHeight->setText(QCoreApplication::translate("Dialog", "3000", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\320\274\320\260\321\201\321\210\321\202\320\260\320\261 ", nullptr));
        lineEditWidth->setText(QCoreApplication::translate("Dialog", "9000", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\320\232\320\260\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\320\250\320\270\321\200\320\270\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
