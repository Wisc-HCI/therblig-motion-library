/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *planning_group_combo;
    QLabel *label_2;
    QComboBox *db_combo;
    QPushButton *db_connect_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *robot_interaction_button;
    QFrame *line;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *stored_plans;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *load_scene_button;
    QListWidget *planning_scene_list;
    QWidget *goal_poses_and_states;
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *load_poses_filter_text;
    QPushButton *goal_poses_open_button;
    QPushButton *goal_poses_add_button;
    QPushButton *goal_poses_remove_button;
    QPushButton *goal_poses_save_button;
    QPushButton *goal_switch_visibility_button;
    QListWidget *goal_poses_list;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *show_x_checkbox;
    QCheckBox *show_y_checkbox;
    QCheckBox *show_z_checkbox;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *goal_offset_roll;
    QLabel *label_4;
    QSpinBox *goal_offset_pitch;
    QLabel *label_5;
    QSpinBox *goal_offset_yaw;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *check_goal_collisions_button;
    QPushButton *check_goal_reachability_button;
    QPushButton *run_benchmark_button;
    QPushButton *load_results_button;
    QFrame *line_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *trajectories_filter_text;
    QPushButton *trajectory_open_button;
    QPushButton *trajectory_add_button;
    QPushButton *trajectory_remove_button;
    QPushButton *trajectory_save_button;
    QListWidget *trajectory_list;
    QHBoxLayout *horizontalLayout_4;
    QLabel *trajectory_nwaypoints_label;
    QSpinBox *trajectory_nwaypoints_spin;
    QPushButton *trajectory_execute_button;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_start_states;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *load_states_filter_text;
    QPushButton *start_states_open_button;
    QPushButton *start_states_add_button;
    QPushButton *start_states_remove_button;
    QPushButton *start_states_save_button;
    QListWidget *start_states_list;
    QSpacerItem *verticalSpacer_2;
    QLabel *status_label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *render_widget;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1559, 1200);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        planning_group_combo = new QComboBox(centralwidget);
        planning_group_combo->setObjectName(QString::fromUtf8("planning_group_combo"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(planning_group_combo->sizePolicy().hasHeightForWidth());
        planning_group_combo->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(planning_group_combo);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);

        db_combo = new QComboBox(centralwidget);
        db_combo->setObjectName(QString::fromUtf8("db_combo"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(db_combo->sizePolicy().hasHeightForWidth());
        db_combo->setSizePolicy(sizePolicy3);
        db_combo->setMinimumSize(QSize(150, 0));
        db_combo->setEditable(true);

        horizontalLayout->addWidget(db_combo);

        db_connect_button = new QPushButton(centralwidget);
        db_connect_button->setObjectName(QString::fromUtf8("db_connect_button"));
        db_connect_button->setCheckable(true);

        horizontalLayout->addWidget(db_connect_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        robot_interaction_button = new QPushButton(centralwidget);
        robot_interaction_button->setObjectName(QString::fromUtf8("robot_interaction_button"));
        robot_interaction_button->setCheckable(true);

        horizontalLayout->addWidget(robot_interaction_button);


        verticalLayout_2->addLayout(horizontalLayout);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy4);
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(verticalLayoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy5);
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        stored_plans = new QWidget();
        stored_plans->setObjectName(QString::fromUtf8("stored_plans"));
        gridLayout_3 = new QGridLayout(stored_plans);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 0, 1, 1);

        load_scene_button = new QPushButton(stored_plans);
        load_scene_button->setObjectName(QString::fromUtf8("load_scene_button"));
        load_scene_button->setEnabled(true);

        gridLayout_3->addWidget(load_scene_button, 2, 0, 1, 1);

        planning_scene_list = new QListWidget(stored_plans);
        planning_scene_list->setObjectName(QString::fromUtf8("planning_scene_list"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(planning_scene_list->sizePolicy().hasHeightForWidth());
        planning_scene_list->setSizePolicy(sizePolicy6);

        gridLayout_3->addWidget(planning_scene_list, 1, 0, 1, 1);

        tabWidget->addTab(stored_plans, QString());
        goal_poses_and_states = new QWidget();
        goal_poses_and_states->setObjectName(QString::fromUtf8("goal_poses_and_states"));
        formLayout = new QFormLayout(goal_poses_and_states);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        groupBox = new QGroupBox(goal_poses_and_states);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy7);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        load_poses_filter_text = new QLineEdit(groupBox);
        load_poses_filter_text->setObjectName(QString::fromUtf8("load_poses_filter_text"));
        sizePolicy6.setHeightForWidth(load_poses_filter_text->sizePolicy().hasHeightForWidth());
        load_poses_filter_text->setSizePolicy(sizePolicy6);

        horizontalLayout_13->addWidget(load_poses_filter_text);

        goal_poses_open_button = new QPushButton(groupBox);
        goal_poses_open_button->setObjectName(QString::fromUtf8("goal_poses_open_button"));
        goal_poses_open_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_13->addWidget(goal_poses_open_button);

        goal_poses_add_button = new QPushButton(groupBox);
        goal_poses_add_button->setObjectName(QString::fromUtf8("goal_poses_add_button"));
        goal_poses_add_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_13->addWidget(goal_poses_add_button);

        goal_poses_remove_button = new QPushButton(groupBox);
        goal_poses_remove_button->setObjectName(QString::fromUtf8("goal_poses_remove_button"));
        goal_poses_remove_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_13->addWidget(goal_poses_remove_button);

        goal_poses_save_button = new QPushButton(groupBox);
        goal_poses_save_button->setObjectName(QString::fromUtf8("goal_poses_save_button"));
        goal_poses_save_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_13->addWidget(goal_poses_save_button);

        goal_switch_visibility_button = new QPushButton(groupBox);
        goal_switch_visibility_button->setObjectName(QString::fromUtf8("goal_switch_visibility_button"));
        goal_switch_visibility_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_13->addWidget(goal_switch_visibility_button);


        verticalLayout_4->addLayout(horizontalLayout_13);

        goal_poses_list = new QListWidget(groupBox);
        goal_poses_list->setObjectName(QString::fromUtf8("goal_poses_list"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(goal_poses_list->sizePolicy().hasHeightForWidth());
        goal_poses_list->setSizePolicy(sizePolicy8);
        goal_poses_list->setMaximumSize(QSize(16777215, 16777215));
        goal_poses_list->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        goal_poses_list->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_4->addWidget(goal_poses_list);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        show_x_checkbox = new QCheckBox(groupBox);
        show_x_checkbox->setObjectName(QString::fromUtf8("show_x_checkbox"));
        show_x_checkbox->setEnabled(true);
        show_x_checkbox->setChecked(false);

        horizontalLayout_2->addWidget(show_x_checkbox);

        show_y_checkbox = new QCheckBox(groupBox);
        show_y_checkbox->setObjectName(QString::fromUtf8("show_y_checkbox"));
        show_y_checkbox->setChecked(false);

        horizontalLayout_2->addWidget(show_y_checkbox);

        show_z_checkbox = new QCheckBox(groupBox);
        show_z_checkbox->setObjectName(QString::fromUtf8("show_z_checkbox"));
        show_z_checkbox->setChecked(true);

        horizontalLayout_2->addWidget(show_z_checkbox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        goal_offset_roll = new QSpinBox(groupBox_3);
        goal_offset_roll->setObjectName(QString::fromUtf8("goal_offset_roll"));
        goal_offset_roll->setMaximumSize(QSize(50, 16777215));
        goal_offset_roll->setMaximum(359);

        horizontalLayout_5->addWidget(goal_offset_roll);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        goal_offset_pitch = new QSpinBox(groupBox_3);
        goal_offset_pitch->setObjectName(QString::fromUtf8("goal_offset_pitch"));
        goal_offset_pitch->setMaximumSize(QSize(50, 16777215));
        goal_offset_pitch->setMaximum(359);

        horizontalLayout_5->addWidget(goal_offset_pitch);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        goal_offset_yaw = new QSpinBox(groupBox_3);
        goal_offset_yaw->setObjectName(QString::fromUtf8("goal_offset_yaw"));
        goal_offset_yaw->setMaximumSize(QSize(50, 16777215));
        goal_offset_yaw->setMaximum(359);

        horizontalLayout_5->addWidget(goal_offset_yaw);


        verticalLayout_4->addWidget(groupBox_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        check_goal_collisions_button = new QPushButton(groupBox);
        check_goal_collisions_button->setObjectName(QString::fromUtf8("check_goal_collisions_button"));

        horizontalLayout_10->addWidget(check_goal_collisions_button);

        check_goal_reachability_button = new QPushButton(groupBox);
        check_goal_reachability_button->setObjectName(QString::fromUtf8("check_goal_reachability_button"));

        horizontalLayout_10->addWidget(check_goal_reachability_button);


        verticalLayout_4->addLayout(horizontalLayout_10);

        run_benchmark_button = new QPushButton(groupBox);
        run_benchmark_button->setObjectName(QString::fromUtf8("run_benchmark_button"));

        verticalLayout_4->addWidget(run_benchmark_button);

        load_results_button = new QPushButton(groupBox);
        load_results_button->setObjectName(QString::fromUtf8("load_results_button"));

        verticalLayout_4->addWidget(load_results_button);


        formLayout->setWidget(0, QFormLayout::FieldRole, groupBox);

        line_2 = new QFrame(goal_poses_and_states);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(5, QFormLayout::FieldRole, line_2);

        groupBox_2 = new QGroupBox(goal_poses_and_states);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        trajectories_filter_text = new QLineEdit(groupBox_2);
        trajectories_filter_text->setObjectName(QString::fromUtf8("trajectories_filter_text"));

        horizontalLayout_3->addWidget(trajectories_filter_text);

        trajectory_open_button = new QPushButton(groupBox_2);
        trajectory_open_button->setObjectName(QString::fromUtf8("trajectory_open_button"));
        trajectory_open_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(trajectory_open_button);

        trajectory_add_button = new QPushButton(groupBox_2);
        trajectory_add_button->setObjectName(QString::fromUtf8("trajectory_add_button"));
        trajectory_add_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(trajectory_add_button);

        trajectory_remove_button = new QPushButton(groupBox_2);
        trajectory_remove_button->setObjectName(QString::fromUtf8("trajectory_remove_button"));
        trajectory_remove_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(trajectory_remove_button);

        trajectory_save_button = new QPushButton(groupBox_2);
        trajectory_save_button->setObjectName(QString::fromUtf8("trajectory_save_button"));
        trajectory_save_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(trajectory_save_button);


        verticalLayout_5->addLayout(horizontalLayout_3);

        trajectory_list = new QListWidget(groupBox_2);
        trajectory_list->setObjectName(QString::fromUtf8("trajectory_list"));

        verticalLayout_5->addWidget(trajectory_list);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        trajectory_nwaypoints_label = new QLabel(groupBox_2);
        trajectory_nwaypoints_label->setObjectName(QString::fromUtf8("trajectory_nwaypoints_label"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(trajectory_nwaypoints_label->sizePolicy().hasHeightForWidth());
        trajectory_nwaypoints_label->setSizePolicy(sizePolicy9);

        horizontalLayout_4->addWidget(trajectory_nwaypoints_label);

        trajectory_nwaypoints_spin = new QSpinBox(groupBox_2);
        trajectory_nwaypoints_spin->setObjectName(QString::fromUtf8("trajectory_nwaypoints_spin"));
        sizePolicy2.setHeightForWidth(trajectory_nwaypoints_spin->sizePolicy().hasHeightForWidth());
        trajectory_nwaypoints_spin->setSizePolicy(sizePolicy2);
        trajectory_nwaypoints_spin->setMinimum(0);
        trajectory_nwaypoints_spin->setMaximum(10);
        trajectory_nwaypoints_spin->setValue(2);

        horizontalLayout_4->addWidget(trajectory_nwaypoints_spin);


        verticalLayout_5->addLayout(horizontalLayout_4);

        trajectory_execute_button = new QPushButton(groupBox_2);
        trajectory_execute_button->setObjectName(QString::fromUtf8("trajectory_execute_button"));

        verticalLayout_5->addWidget(trajectory_execute_button);


        formLayout->setWidget(6, QFormLayout::FieldRole, groupBox_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer_3);

        tabWidget->addTab(goal_poses_and_states, QString());
        tab_start_states = new QWidget();
        tab_start_states->setObjectName(QString::fromUtf8("tab_start_states"));
        verticalLayout_3 = new QVBoxLayout(tab_start_states);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        load_states_filter_text = new QLineEdit(tab_start_states);
        load_states_filter_text->setObjectName(QString::fromUtf8("load_states_filter_text"));
        sizePolicy2.setHeightForWidth(load_states_filter_text->sizePolicy().hasHeightForWidth());
        load_states_filter_text->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(load_states_filter_text);

        start_states_open_button = new QPushButton(tab_start_states);
        start_states_open_button->setObjectName(QString::fromUtf8("start_states_open_button"));
        start_states_open_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_12->addWidget(start_states_open_button);

        start_states_add_button = new QPushButton(tab_start_states);
        start_states_add_button->setObjectName(QString::fromUtf8("start_states_add_button"));
        sizePolicy2.setHeightForWidth(start_states_add_button->sizePolicy().hasHeightForWidth());
        start_states_add_button->setSizePolicy(sizePolicy2);
        start_states_add_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_12->addWidget(start_states_add_button);

        start_states_remove_button = new QPushButton(tab_start_states);
        start_states_remove_button->setObjectName(QString::fromUtf8("start_states_remove_button"));
        start_states_remove_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_12->addWidget(start_states_remove_button);

        start_states_save_button = new QPushButton(tab_start_states);
        start_states_save_button->setObjectName(QString::fromUtf8("start_states_save_button"));
        start_states_save_button->setMaximumSize(QSize(30, 30));

        horizontalLayout_12->addWidget(start_states_save_button);


        verticalLayout_3->addLayout(horizontalLayout_12);

        start_states_list = new QListWidget(tab_start_states);
        start_states_list->setObjectName(QString::fromUtf8("start_states_list"));
        sizePolicy6.setHeightForWidth(start_states_list->sizePolicy().hasHeightForWidth());
        start_states_list->setSizePolicy(sizePolicy6);
        start_states_list->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        start_states_list->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_3->addWidget(start_states_list);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_start_states, QString());

        verticalLayout->addWidget(tabWidget);

        status_label = new QLabel(verticalLayoutWidget);
        status_label->setObjectName(QString::fromUtf8("status_label"));
        sizePolicy2.setHeightForWidth(status_label->sizePolicy().hasHeightForWidth());
        status_label->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(8);
        font.setItalic(true);
        status_label->setFont(font);

        verticalLayout->addWidget(status_label);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);
        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        render_widget = new QVBoxLayout(verticalLayoutWidget_2);
        render_widget->setObjectName(QString::fromUtf8("render_widget"));
        render_widget->setSizeConstraint(QLayout::SetDefaultConstraint);
        render_widget->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        render_widget->addItem(horizontalSpacer_2);

        splitter->addWidget(verticalLayoutWidget_2);

        verticalLayout_2->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1559, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Benchmark tool", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Load robot...", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Planning group:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        planning_group_combo->setToolTip(QApplication::translate("MainWindow", "Planning group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("MainWindow", "Warehouse:", 0, QApplication::UnicodeUTF8));
        db_connect_button->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        robot_interaction_button->setText(QApplication::translate("MainWindow", "Robot interaction", 0, QApplication::UnicodeUTF8));
        load_scene_button->setText(QApplication::translate("MainWindow", "Load Scene", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(stored_plans), QApplication::translate("MainWindow", " Scenes", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Goals", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        load_poses_filter_text->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        load_poses_filter_text->setText(QApplication::translate("MainWindow", ".*", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        goal_poses_open_button->setToolTip(QApplication::translate("MainWindow", "Load from database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        goal_poses_open_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        goal_poses_add_button->setToolTip(QApplication::translate("MainWindow", "New goal in the current end-effector pose", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        goal_poses_add_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        goal_poses_remove_button->setToolTip(QApplication::translate("MainWindow", "Remove selected goals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        goal_poses_remove_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        goal_poses_save_button->setToolTip(QApplication::translate("MainWindow", "Apply changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        goal_poses_save_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        goal_switch_visibility_button->setToolTip(QApplication::translate("MainWindow", "Switch vibility of selected goals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        goal_switch_visibility_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        goal_poses_list->setToolTip(QApplication::translate("MainWindow", "Press Ctrl+D to duplicate the selected goals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        show_x_checkbox->setText(QApplication::translate("MainWindow", "Show X", 0, QApplication::UnicodeUTF8));
        show_y_checkbox->setText(QApplication::translate("MainWindow", "Show Y", 0, QApplication::UnicodeUTF8));
        show_z_checkbox->setText(QApplication::translate("MainWindow", "Show Z", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Goal offset", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Roll:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Pitch:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Yaw:", 0, QApplication::UnicodeUTF8));
        check_goal_collisions_button->setText(QApplication::translate("MainWindow", "Check\n"
"collisions", 0, QApplication::UnicodeUTF8));
        check_goal_reachability_button->setText(QApplication::translate("MainWindow", "Check\n"
"reachability", 0, QApplication::UnicodeUTF8));
        run_benchmark_button->setText(QApplication::translate("MainWindow", "Run benchmark or generate config file", 0, QApplication::UnicodeUTF8));
        load_results_button->setText(QApplication::translate("MainWindow", "Load benchmark results", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Cartesian trajectories", 0, QApplication::UnicodeUTF8));
        trajectories_filter_text->setInputMask(QString());
        trajectories_filter_text->setText(QApplication::translate("MainWindow", ".*", 0, QApplication::UnicodeUTF8));
        trajectory_open_button->setText(QString());
        trajectory_add_button->setText(QString());
        trajectory_remove_button->setText(QString());
        trajectory_save_button->setText(QString());
        trajectory_nwaypoints_label->setText(QApplication::translate("MainWindow", "Number of waypoints", 0, QApplication::UnicodeUTF8));
        trajectory_execute_button->setText(QApplication::translate("MainWindow", "Execute Interpolated IK", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(goal_poses_and_states), QApplication::translate("MainWindow", "Queries", 0, QApplication::UnicodeUTF8));
        load_states_filter_text->setText(QApplication::translate("MainWindow", ".*", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        start_states_open_button->setToolTip(QApplication::translate("MainWindow", "Load from database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        start_states_open_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        start_states_add_button->setToolTip(QApplication::translate("MainWindow", "Store current start state", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        start_states_add_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        start_states_remove_button->setToolTip(QApplication::translate("MainWindow", "Remove selected start states", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        start_states_remove_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        start_states_save_button->setToolTip(QApplication::translate("MainWindow", "Apply changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        start_states_save_button->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_start_states), QApplication::translate("MainWindow", "Start states", 0, QApplication::UnicodeUTF8));
        status_label->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
