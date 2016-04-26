/********************************************************************************
** Form generated from reading UI file 'bounding_box_goals.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUNDING_BOX_GOALS_H
#define UI_BOUNDING_BOX_GOALS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BoundingBoxGoalsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *center_label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QDoubleSpinBox *center_x_text;
    QLabel *label_9;
    QDoubleSpinBox *center_y_text;
    QLabel *label_10;
    QDoubleSpinBox *center_z_text;
    QLabel *size_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QDoubleSpinBox *size_x_text;
    QLabel *label_12;
    QDoubleSpinBox *size_y_text;
    QLabel *label_11;
    QDoubleSpinBox *size_z_text;
    QLabel *ngoals_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QSpinBox *ngoals_x_text;
    QLabel *label_15;
    QSpinBox *ngoals_y_text;
    QLabel *label_16;
    QSpinBox *ngoals_z_text;
    QLabel *label;
    QLineEdit *base_name_text;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancel_button;
    QPushButton *ok_button;

    void setupUi(QDialog *BoundingBoxGoalsDialog)
    {
        if (BoundingBoxGoalsDialog->objectName().isEmpty())
            BoundingBoxGoalsDialog->setObjectName(QString::fromUtf8("BoundingBoxGoalsDialog"));
        BoundingBoxGoalsDialog->resize(383, 193);
        verticalLayout = new QVBoxLayout(BoundingBoxGoalsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        center_label = new QLabel(BoundingBoxGoalsDialog);
        center_label->setObjectName(QString::fromUtf8("center_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, center_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(BoundingBoxGoalsDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        center_x_text = new QDoubleSpinBox(BoundingBoxGoalsDialog);
        center_x_text->setObjectName(QString::fromUtf8("center_x_text"));

        horizontalLayout->addWidget(center_x_text);

        label_9 = new QLabel(BoundingBoxGoalsDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        center_y_text = new QDoubleSpinBox(BoundingBoxGoalsDialog);
        center_y_text->setObjectName(QString::fromUtf8("center_y_text"));

        horizontalLayout->addWidget(center_y_text);

        label_10 = new QLabel(BoundingBoxGoalsDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        center_z_text = new QDoubleSpinBox(BoundingBoxGoalsDialog);
        center_z_text->setObjectName(QString::fromUtf8("center_z_text"));

        horizontalLayout->addWidget(center_z_text);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        size_label = new QLabel(BoundingBoxGoalsDialog);
        size_label->setObjectName(QString::fromUtf8("size_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, size_label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(BoundingBoxGoalsDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        size_x_text = new QDoubleSpinBox(BoundingBoxGoalsDialog);
        size_x_text->setObjectName(QString::fromUtf8("size_x_text"));
        size_x_text->setValue(1);

        horizontalLayout_3->addWidget(size_x_text);

        label_12 = new QLabel(BoundingBoxGoalsDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);

        size_y_text = new QDoubleSpinBox(BoundingBoxGoalsDialog);
        size_y_text->setObjectName(QString::fromUtf8("size_y_text"));
        size_y_text->setValue(1);

        horizontalLayout_3->addWidget(size_y_text);

        label_11 = new QLabel(BoundingBoxGoalsDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);

        size_z_text = new QDoubleSpinBox(BoundingBoxGoalsDialog);
        size_z_text->setObjectName(QString::fromUtf8("size_z_text"));
        size_z_text->setValue(1);

        horizontalLayout_3->addWidget(size_z_text);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        ngoals_label = new QLabel(BoundingBoxGoalsDialog);
        ngoals_label->setObjectName(QString::fromUtf8("ngoals_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, ngoals_label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(BoundingBoxGoalsDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);

        ngoals_x_text = new QSpinBox(BoundingBoxGoalsDialog);
        ngoals_x_text->setObjectName(QString::fromUtf8("ngoals_x_text"));
        ngoals_x_text->setMinimum(1);
        ngoals_x_text->setValue(2);

        horizontalLayout_4->addWidget(ngoals_x_text);

        label_15 = new QLabel(BoundingBoxGoalsDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_4->addWidget(label_15);

        ngoals_y_text = new QSpinBox(BoundingBoxGoalsDialog);
        ngoals_y_text->setObjectName(QString::fromUtf8("ngoals_y_text"));
        ngoals_y_text->setMinimum(1);
        ngoals_y_text->setValue(2);

        horizontalLayout_4->addWidget(ngoals_y_text);

        label_16 = new QLabel(BoundingBoxGoalsDialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_4->addWidget(label_16);

        ngoals_z_text = new QSpinBox(BoundingBoxGoalsDialog);
        ngoals_z_text->setObjectName(QString::fromUtf8("ngoals_z_text"));
        ngoals_z_text->setMinimum(1);
        ngoals_z_text->setValue(2);

        horizontalLayout_4->addWidget(ngoals_z_text);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_4);

        label = new QLabel(BoundingBoxGoalsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        base_name_text = new QLineEdit(BoundingBoxGoalsDialog);
        base_name_text->setObjectName(QString::fromUtf8("base_name_text"));

        formLayout->setWidget(0, QFormLayout::FieldRole, base_name_text);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cancel_button = new QPushButton(BoundingBoxGoalsDialog);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        horizontalLayout_2->addWidget(cancel_button);

        ok_button = new QPushButton(BoundingBoxGoalsDialog);
        ok_button->setObjectName(QString::fromUtf8("ok_button"));

        horizontalLayout_2->addWidget(ok_button);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(BoundingBoxGoalsDialog);

        QMetaObject::connectSlotsByName(BoundingBoxGoalsDialog);
    } // setupUi

    void retranslateUi(QDialog *BoundingBoxGoalsDialog)
    {
        BoundingBoxGoalsDialog->setWindowTitle(QApplication::translate("BoundingBoxGoalsDialog", "Run benchmark", 0, QApplication::UnicodeUTF8));
        center_label->setText(QApplication::translate("BoundingBoxGoalsDialog", "Center", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("BoundingBoxGoalsDialog", "x:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("BoundingBoxGoalsDialog", "y:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("BoundingBoxGoalsDialog", "z:", 0, QApplication::UnicodeUTF8));
        size_label->setText(QApplication::translate("BoundingBoxGoalsDialog", "Size", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("BoundingBoxGoalsDialog", "x:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("BoundingBoxGoalsDialog", "y:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("BoundingBoxGoalsDialog", "z:", 0, QApplication::UnicodeUTF8));
        ngoals_label->setText(QApplication::translate("BoundingBoxGoalsDialog", "Number of goals", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("BoundingBoxGoalsDialog", "x:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("BoundingBoxGoalsDialog", "y:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("BoundingBoxGoalsDialog", "z:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BoundingBoxGoalsDialog", "Base name", 0, QApplication::UnicodeUTF8));
        cancel_button->setText(QApplication::translate("BoundingBoxGoalsDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        ok_button->setText(QApplication::translate("BoundingBoxGoalsDialog", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BoundingBoxGoalsDialog: public Ui_BoundingBoxGoalsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUNDING_BOX_GOALS_H
