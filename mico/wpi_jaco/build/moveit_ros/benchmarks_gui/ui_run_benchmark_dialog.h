/********************************************************************************
** Form generated from reading UI file 'run_benchmark_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUN_BENCHMARK_DIALOG_H
#define UI_RUN_BENCHMARK_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
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

class Ui_BenchmarkDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *benchmark_output_folder_text;
    QPushButton *benchmark_select_folder_button;
    QLabel *label;
    QLineEdit *benchmark_start_state_text;
    QLabel *label_5;
    QLineEdit *benchmark_goal_text;
    QLabel *label_6;
    QSpinBox *number_of_runs_spin;
    QLabel *label_7;
    QSpinBox *timeout_spin;
    QLabel *label_2;
    QCheckBox *benchmark_check_reachability_checkbox;
    QLabel *label_3;
    QCheckBox *benchmark_include_planners_checkbox;
    QLabel *planning_interfaces_label;
    QLabel *planning_algorithms_label;
    QLineEdit *planning_interfaces_text;
    QLineEdit *planning_algorithms_text;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *save_config_button;
    QPushButton *run_benchmark_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *BenchmarkDialog)
    {
        if (BenchmarkDialog->objectName().isEmpty())
            BenchmarkDialog->setObjectName(QString::fromUtf8("BenchmarkDialog"));
        BenchmarkDialog->resize(431, 400);
        verticalLayout = new QVBoxLayout(BenchmarkDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_4 = new QLabel(BenchmarkDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        benchmark_output_folder_text = new QLineEdit(BenchmarkDialog);
        benchmark_output_folder_text->setObjectName(QString::fromUtf8("benchmark_output_folder_text"));

        horizontalLayout->addWidget(benchmark_output_folder_text);

        benchmark_select_folder_button = new QPushButton(BenchmarkDialog);
        benchmark_select_folder_button->setObjectName(QString::fromUtf8("benchmark_select_folder_button"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(benchmark_select_folder_button->sizePolicy().hasHeightForWidth());
        benchmark_select_folder_button->setSizePolicy(sizePolicy);
        benchmark_select_folder_button->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(benchmark_select_folder_button);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label = new QLabel(BenchmarkDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        benchmark_start_state_text = new QLineEdit(BenchmarkDialog);
        benchmark_start_state_text->setObjectName(QString::fromUtf8("benchmark_start_state_text"));

        formLayout->setWidget(1, QFormLayout::FieldRole, benchmark_start_state_text);

        label_5 = new QLabel(BenchmarkDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        benchmark_goal_text = new QLineEdit(BenchmarkDialog);
        benchmark_goal_text->setObjectName(QString::fromUtf8("benchmark_goal_text"));

        formLayout->setWidget(2, QFormLayout::FieldRole, benchmark_goal_text);

        label_6 = new QLabel(BenchmarkDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        number_of_runs_spin = new QSpinBox(BenchmarkDialog);
        number_of_runs_spin->setObjectName(QString::fromUtf8("number_of_runs_spin"));
        number_of_runs_spin->setMinimum(1);

        formLayout->setWidget(3, QFormLayout::FieldRole, number_of_runs_spin);

        label_7 = new QLabel(BenchmarkDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        timeout_spin = new QSpinBox(BenchmarkDialog);
        timeout_spin->setObjectName(QString::fromUtf8("timeout_spin"));
        timeout_spin->setMinimum(1);
        timeout_spin->setMaximum(100000);

        formLayout->setWidget(4, QFormLayout::FieldRole, timeout_spin);

        label_2 = new QLabel(BenchmarkDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        benchmark_check_reachability_checkbox = new QCheckBox(BenchmarkDialog);
        benchmark_check_reachability_checkbox->setObjectName(QString::fromUtf8("benchmark_check_reachability_checkbox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, benchmark_check_reachability_checkbox);

        label_3 = new QLabel(BenchmarkDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        benchmark_include_planners_checkbox = new QCheckBox(BenchmarkDialog);
        benchmark_include_planners_checkbox->setObjectName(QString::fromUtf8("benchmark_include_planners_checkbox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, benchmark_include_planners_checkbox);

        planning_interfaces_label = new QLabel(BenchmarkDialog);
        planning_interfaces_label->setObjectName(QString::fromUtf8("planning_interfaces_label"));
        planning_interfaces_label->setEnabled(false);

        formLayout->setWidget(7, QFormLayout::LabelRole, planning_interfaces_label);

        planning_algorithms_label = new QLabel(BenchmarkDialog);
        planning_algorithms_label->setObjectName(QString::fromUtf8("planning_algorithms_label"));
        planning_algorithms_label->setEnabled(false);

        formLayout->setWidget(8, QFormLayout::LabelRole, planning_algorithms_label);

        planning_interfaces_text = new QLineEdit(BenchmarkDialog);
        planning_interfaces_text->setObjectName(QString::fromUtf8("planning_interfaces_text"));
        planning_interfaces_text->setEnabled(false);

        formLayout->setWidget(7, QFormLayout::FieldRole, planning_interfaces_text);

        planning_algorithms_text = new QLineEdit(BenchmarkDialog);
        planning_algorithms_text->setObjectName(QString::fromUtf8("planning_algorithms_text"));
        planning_algorithms_text->setEnabled(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, planning_algorithms_text);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        save_config_button = new QPushButton(BenchmarkDialog);
        save_config_button->setObjectName(QString::fromUtf8("save_config_button"));

        horizontalLayout_2->addWidget(save_config_button);

        run_benchmark_button = new QPushButton(BenchmarkDialog);
        run_benchmark_button->setObjectName(QString::fromUtf8("run_benchmark_button"));

        horizontalLayout_2->addWidget(run_benchmark_button);

        cancel_button = new QPushButton(BenchmarkDialog);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        horizontalLayout_2->addWidget(cancel_button);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(BenchmarkDialog);

        QMetaObject::connectSlotsByName(BenchmarkDialog);
    } // setupUi

    void retranslateUi(QDialog *BenchmarkDialog)
    {
        BenchmarkDialog->setWindowTitle(QApplication::translate("BenchmarkDialog", "Run benchmark", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BenchmarkDialog", "Output folder", 0, QApplication::UnicodeUTF8));
        benchmark_select_folder_button->setText(QString());
        label->setText(QApplication::translate("BenchmarkDialog", "Start state regex", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BenchmarkDialog", "Goal regex", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("BenchmarkDialog", "Number of runs", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("BenchmarkDialog", "Timeout per run\n"
"(seconds) ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BenchmarkDialog", "Check reachability", 0, QApplication::UnicodeUTF8));
        benchmark_check_reachability_checkbox->setText(QString());
        label_3->setText(QApplication::translate("BenchmarkDialog", "Include planners", 0, QApplication::UnicodeUTF8));
        benchmark_include_planners_checkbox->setText(QString());
        planning_interfaces_label->setText(QApplication::translate("BenchmarkDialog", "Planning interfaces", 0, QApplication::UnicodeUTF8));
        planning_algorithms_label->setText(QApplication::translate("BenchmarkDialog", "Planning algorithms", 0, QApplication::UnicodeUTF8));
        save_config_button->setText(QApplication::translate("BenchmarkDialog", "Just save config file", 0, QApplication::UnicodeUTF8));
        run_benchmark_button->setText(QApplication::translate("BenchmarkDialog", "Run benchmark", 0, QApplication::UnicodeUTF8));
        cancel_button->setText(QApplication::translate("BenchmarkDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BenchmarkDialog: public Ui_BenchmarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_BENCHMARK_DIALOG_H
