/********************************************************************************
** Form generated from reading UI file 'motion_planning_rviz_plugin_frame.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H
#define UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBox>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MotionPlanningUI
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *context;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *library_label;
    QSpacerItem *horizontalSpacer;
    QComboBox *planning_algorithm_combo_box;
    QPushButton *publish_current_scene_button;
    QGroupBox *groupBox2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *database_host;
    QLabel *label_3;
    QSpinBox *database_port;
    QPushButton *reset_db_button;
    QPushButton *database_connect_button;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_10;
    QCheckBox *collision_aware_ik;
    QCheckBox *approximate_ik;
    QSpacerItem *verticalSpacer_5;
    QWidget *planning;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_9;
    QPushButton *plan_button;
    QPushButton *execute_button;
    QPushButton *plan_and_execute_button;
    QLabel *result_label;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_6;
    QToolBox *query_stackedwidget;
    QWidget *query_stackedwidgetPage2;
    QGridLayout *gridLayout_7;
    QComboBox *start_state_selection;
    QPushButton *use_start_state_button;
    QSpacerItem *horizontalSpacer_3;
    QWidget *query_stackedwidgetPage1;
    QGridLayout *gridLayout_9;
    QComboBox *goal_state_selection;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *use_goal_state_button;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout;
    QDoubleSpinBox *wcenter_x;
    QDoubleSpinBox *wsize_y;
    QDoubleSpinBox *wcenter_y;
    QDoubleSpinBox *wcenter_z;
    QDoubleSpinBox *wsize_z;
    QDoubleSpinBox *wsize_x;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QDoubleSpinBox *planning_time;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QDoubleSpinBox *planning_attempts;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QDoubleSpinBox *exec_time_factor;
    QCheckBox *allow_replanning;
    QCheckBox *allow_looking;
    QCheckBox *allow_external_program;
    QLabel *label_5;
    QComboBox *path_constraints_combo_box;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QDoubleSpinBox *goal_tolerance;
    QPushButton *clear_octomap_button;
    QSpacerItem *verticalSpacer_2;
    QWidget *manipulation;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_8;
    QListWidget *detected_objects_list;
    QPushButton *detect_objects_button;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_12;
    QPushButton *place_button;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pick_button;
    QListWidget *support_surfaces_list;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_14;
    QDoubleSpinBox *roi_size_y;
    QLabel *label_14;
    QDoubleSpinBox *roi_center_y;
    QDoubleSpinBox *roi_size_z;
    QLabel *label_12;
    QDoubleSpinBox *roi_size_x;
    QDoubleSpinBox *roi_center_z;
    QDoubleSpinBox *roi_center_x;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QWidget *scene_collision_objects;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *object_status;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDoubleSpinBox *object_x;
    QDoubleSpinBox *object_y;
    QDoubleSpinBox *object_z;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QDoubleSpinBox *object_rx;
    QDoubleSpinBox *object_ry;
    QDoubleSpinBox *object_rz;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *label_17;
    QSlider *scene_scale;
    QLabel *label_18;
    QGroupBox *groupBox3;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *export_scene_text_button;
    QPushButton *import_scene_text_button;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QPushButton *import_url_button;
    QPushButton *clear_scene_button;
    QPushButton *remove_object_button;
    QListWidget *collision_objects_list;
    QPushButton *import_file_button;
    QWidget *stored_plans;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *planning_scene_tree;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QPushButton *load_scene_button;
    QPushButton *load_query_button;
    QPushButton *delete_scene_button;
    QPushButton *delete_query_button;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *save_scene_button;
    QPushButton *save_query_button;
    QSpacerItem *verticalSpacer_7;
    QWidget *stored_states;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *list_states;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_17;
    QPushButton *load_state_button;
    QPushButton *clear_states_button;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_15;
    QPushButton *set_as_start_state_button;
    QPushButton *set_as_goal_state_button;
    QPushButton *remove_state_button;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_16;
    QPushButton *save_start_state_button;
    QPushButton *save_goal_state_button;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab;
    QGridLayout *gridLayout_11;
    QTextEdit *status_text;
    QProgressBar *background_job_progress;

    void setupUi(QWidget *MotionPlanningUI)
    {
        if (MotionPlanningUI->objectName().isEmpty())
            MotionPlanningUI->setObjectName(QString::fromUtf8("MotionPlanningUI"));
        MotionPlanningUI->resize(702, 395);
        verticalLayout_5 = new QVBoxLayout(MotionPlanningUI);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tabWidget = new QTabWidget(MotionPlanningUI);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setAutoFillBackground(false);
        context = new QWidget();
        context->setObjectName(QString::fromUtf8("context"));
        verticalLayout_3 = new QVBoxLayout(context);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox1 = new QGroupBox(context);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        horizontalLayout_8 = new QHBoxLayout(groupBox1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        library_label = new QLabel(groupBox1);
        library_label->setObjectName(QString::fromUtf8("library_label"));

        horizontalLayout_8->addWidget(library_label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        planning_algorithm_combo_box = new QComboBox(groupBox1);
        planning_algorithm_combo_box->setObjectName(QString::fromUtf8("planning_algorithm_combo_box"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(planning_algorithm_combo_box->sizePolicy().hasHeightForWidth());
        planning_algorithm_combo_box->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(planning_algorithm_combo_box);

        publish_current_scene_button = new QPushButton(groupBox1);
        publish_current_scene_button->setObjectName(QString::fromUtf8("publish_current_scene_button"));

        horizontalLayout_8->addWidget(publish_current_scene_button);


        verticalLayout_3->addWidget(groupBox1);

        groupBox2 = new QGroupBox(context);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        horizontalLayout = new QHBoxLayout(groupBox2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        database_host = new QLineEdit(groupBox2);
        database_host->setObjectName(QString::fromUtf8("database_host"));

        horizontalLayout->addWidget(database_host);

        label_3 = new QLabel(groupBox2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        database_port = new QSpinBox(groupBox2);
        database_port->setObjectName(QString::fromUtf8("database_port"));
        database_port->setMaximum(65535);
        database_port->setValue(33829);

        horizontalLayout->addWidget(database_port);

        reset_db_button = new QPushButton(groupBox2);
        reset_db_button->setObjectName(QString::fromUtf8("reset_db_button"));
        reset_db_button->setStyleSheet(QString::fromUtf8("color:red"));
        reset_db_button->setDefault(false);
        reset_db_button->setFlat(false);

        horizontalLayout->addWidget(reset_db_button);

        database_connect_button = new QPushButton(groupBox2);
        database_connect_button->setObjectName(QString::fromUtf8("database_connect_button"));
        database_connect_button->setStyleSheet(QString::fromUtf8("color:green"));
        database_connect_button->setCheckable(false);
        database_connect_button->setChecked(false);
        database_connect_button->setDefault(false);
        database_connect_button->setFlat(false);

        horizontalLayout->addWidget(database_connect_button);


        verticalLayout_3->addWidget(groupBox2);

        groupBox_6 = new QGroupBox(context);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_10 = new QGridLayout(groupBox_6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        collision_aware_ik = new QCheckBox(groupBox_6);
        collision_aware_ik->setObjectName(QString::fromUtf8("collision_aware_ik"));
        collision_aware_ik->setChecked(true);

        gridLayout_10->addWidget(collision_aware_ik, 0, 0, 1, 1);

        approximate_ik = new QCheckBox(groupBox_6);
        approximate_ik->setObjectName(QString::fromUtf8("approximate_ik"));

        gridLayout_10->addWidget(approximate_ik, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        tabWidget->addTab(context, QString());
        planning = new QWidget();
        planning->setObjectName(QString::fromUtf8("planning"));
        horizontalLayout_9 = new QHBoxLayout(planning);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_9 = new QGroupBox(planning);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_9 = new QVBoxLayout(groupBox_9);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        plan_button = new QPushButton(groupBox_9);
        plan_button->setObjectName(QString::fromUtf8("plan_button"));

        verticalLayout_9->addWidget(plan_button);

        execute_button = new QPushButton(groupBox_9);
        execute_button->setObjectName(QString::fromUtf8("execute_button"));
        execute_button->setEnabled(false);

        verticalLayout_9->addWidget(execute_button);

        plan_and_execute_button = new QPushButton(groupBox_9);
        plan_and_execute_button->setObjectName(QString::fromUtf8("plan_and_execute_button"));

        verticalLayout_9->addWidget(plan_and_execute_button);

        result_label = new QLabel(groupBox_9);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        result_label->setLayoutDirection(Qt::LeftToRight);
        result_label->setAlignment(Qt::AlignCenter);
        result_label->setWordWrap(false);

        verticalLayout_9->addWidget(result_label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);


        horizontalLayout_7->addWidget(groupBox_9);

        groupBox_11 = new QGroupBox(planning);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_6 = new QGridLayout(groupBox_11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 2, 0, 1, 1);

        query_stackedwidget = new QToolBox(groupBox_11);
        query_stackedwidget->setObjectName(QString::fromUtf8("query_stackedwidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(query_stackedwidget->sizePolicy().hasHeightForWidth());
        query_stackedwidget->setSizePolicy(sizePolicy2);
        query_stackedwidget->setFrameShape(QFrame::StyledPanel);
        query_stackedwidget->setFrameShadow(QFrame::Raised);
        query_stackedwidgetPage2 = new QWidget();
        query_stackedwidgetPage2->setObjectName(QString::fromUtf8("query_stackedwidgetPage2"));
        query_stackedwidgetPage2->setGeometry(QRect(0, 0, 109, 78));
        gridLayout_7 = new QGridLayout(query_stackedwidgetPage2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        start_state_selection = new QComboBox(query_stackedwidgetPage2);
        start_state_selection->setObjectName(QString::fromUtf8("start_state_selection"));

        gridLayout_7->addWidget(start_state_selection, 0, 0, 1, 2);

        use_start_state_button = new QPushButton(query_stackedwidgetPage2);
        use_start_state_button->setObjectName(QString::fromUtf8("use_start_state_button"));
        sizePolicy2.setHeightForWidth(use_start_state_button->sizePolicy().hasHeightForWidth());
        use_start_state_button->setSizePolicy(sizePolicy2);
        use_start_state_button->setAutoDefault(false);
        use_start_state_button->setDefault(false);

        gridLayout_7->addWidget(use_start_state_button, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        query_stackedwidget->addItem(query_stackedwidgetPage2, QString::fromUtf8("Select Start State:"));
        query_stackedwidgetPage1 = new QWidget();
        query_stackedwidgetPage1->setObjectName(QString::fromUtf8("query_stackedwidgetPage1"));
        query_stackedwidgetPage1->setGeometry(QRect(0, 0, 205, 78));
        gridLayout_9 = new QGridLayout(query_stackedwidgetPage1);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        goal_state_selection = new QComboBox(query_stackedwidgetPage1);
        goal_state_selection->setObjectName(QString::fromUtf8("goal_state_selection"));

        gridLayout_9->addWidget(goal_state_selection, 0, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        use_goal_state_button = new QPushButton(query_stackedwidgetPage1);
        use_goal_state_button->setObjectName(QString::fromUtf8("use_goal_state_button"));
        sizePolicy2.setHeightForWidth(use_goal_state_button->sizePolicy().hasHeightForWidth());
        use_goal_state_button->setSizePolicy(sizePolicy2);
        use_goal_state_button->setAutoDefault(false);
        use_goal_state_button->setDefault(false);

        gridLayout_9->addWidget(use_goal_state_button, 1, 1, 1, 1);

        query_stackedwidget->addItem(query_stackedwidgetPage1, QString::fromUtf8("Select Goal State:"));

        gridLayout_6->addWidget(query_stackedwidget, 1, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_11);


        verticalLayout_11->addLayout(horizontalLayout_7);

        groupBox_12 = new QGroupBox(planning);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout = new QGridLayout(groupBox_12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        wcenter_x = new QDoubleSpinBox(groupBox_12);
        wcenter_x->setObjectName(QString::fromUtf8("wcenter_x"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wcenter_x->sizePolicy().hasHeightForWidth());
        wcenter_x->setSizePolicy(sizePolicy3);
        wcenter_x->setMinimum(-10000);
        wcenter_x->setMaximum(10000);

        gridLayout->addWidget(wcenter_x, 1, 1, 1, 1);

        wsize_y = new QDoubleSpinBox(groupBox_12);
        wsize_y->setObjectName(QString::fromUtf8("wsize_y"));
        sizePolicy3.setHeightForWidth(wsize_y->sizePolicy().hasHeightForWidth());
        wsize_y->setSizePolicy(sizePolicy3);
        wsize_y->setMinimum(-10000);
        wsize_y->setMaximum(10000);
        wsize_y->setValue(2);

        gridLayout->addWidget(wsize_y, 2, 2, 1, 1);

        wcenter_y = new QDoubleSpinBox(groupBox_12);
        wcenter_y->setObjectName(QString::fromUtf8("wcenter_y"));
        sizePolicy3.setHeightForWidth(wcenter_y->sizePolicy().hasHeightForWidth());
        wcenter_y->setSizePolicy(sizePolicy3);
        wcenter_y->setMinimum(-10000);
        wcenter_y->setMaximum(10000);

        gridLayout->addWidget(wcenter_y, 1, 2, 1, 1);

        wcenter_z = new QDoubleSpinBox(groupBox_12);
        wcenter_z->setObjectName(QString::fromUtf8("wcenter_z"));
        sizePolicy3.setHeightForWidth(wcenter_z->sizePolicy().hasHeightForWidth());
        wcenter_z->setSizePolicy(sizePolicy3);
        wcenter_z->setMinimum(-10000);
        wcenter_z->setMaximum(10000);

        gridLayout->addWidget(wcenter_z, 1, 3, 1, 1);

        wsize_z = new QDoubleSpinBox(groupBox_12);
        wsize_z->setObjectName(QString::fromUtf8("wsize_z"));
        sizePolicy3.setHeightForWidth(wsize_z->sizePolicy().hasHeightForWidth());
        wsize_z->setSizePolicy(sizePolicy3);
        wsize_z->setMinimum(-10000);
        wsize_z->setMaximum(10000);
        wsize_z->setValue(2);

        gridLayout->addWidget(wsize_z, 2, 3, 1, 1);

        wsize_x = new QDoubleSpinBox(groupBox_12);
        wsize_x->setObjectName(QString::fromUtf8("wsize_x"));
        sizePolicy3.setHeightForWidth(wsize_x->sizePolicy().hasHeightForWidth());
        wsize_x->setSizePolicy(sizePolicy3);
        wsize_x->setWrapping(false);
        wsize_x->setMinimum(-10000);
        wsize_x->setMaximum(10000);
        wsize_x->setValue(2);

        gridLayout->addWidget(wsize_x, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox_12);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox_12);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);


        verticalLayout_11->addWidget(groupBox_12);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);


        horizontalLayout_9->addLayout(verticalLayout_11);

        groupBox_10 = new QGroupBox(planning);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        verticalLayout_10 = new QVBoxLayout(groupBox_10);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(groupBox_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        planning_time = new QDoubleSpinBox(groupBox_10);
        planning_time->setObjectName(QString::fromUtf8("planning_time"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(planning_time->sizePolicy().hasHeightForWidth());
        planning_time->setSizePolicy(sizePolicy4);
        planning_time->setMaximum(300);
        planning_time->setValue(5);

        horizontalLayout_3->addWidget(planning_time);


        verticalLayout_10->addLayout(horizontalLayout_3);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_10 = new QLabel(groupBox_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_15->addWidget(label_10);

        planning_attempts = new QDoubleSpinBox(groupBox_10);
        planning_attempts->setObjectName(QString::fromUtf8("planning_attempts"));
        sizePolicy4.setHeightForWidth(planning_attempts->sizePolicy().hasHeightForWidth());
        planning_attempts->setSizePolicy(sizePolicy4);
        planning_attempts->setMaximum(1000);
        planning_attempts->setValue(10);

        horizontalLayout_15->addWidget(planning_attempts);


        verticalLayout_10->addLayout(horizontalLayout_15);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        exec_time_factor = new QDoubleSpinBox(groupBox_10);
        exec_time_factor->setObjectName(QString::fromUtf8("exec_time_factor"));
        exec_time_factor->setMaximum(1);
        exec_time_factor->setSingleStep(0.01);
        exec_time_factor->setValue(1);

        horizontalLayout_10->addWidget(exec_time_factor);


        verticalLayout_10->addLayout(horizontalLayout_10);

        allow_replanning = new QCheckBox(groupBox_10);
        allow_replanning->setObjectName(QString::fromUtf8("allow_replanning"));
        allow_replanning->setChecked(false);

        verticalLayout_10->addWidget(allow_replanning);

        allow_looking = new QCheckBox(groupBox_10);
        allow_looking->setObjectName(QString::fromUtf8("allow_looking"));
        allow_looking->setChecked(false);

        verticalLayout_10->addWidget(allow_looking);

        allow_external_program = new QCheckBox(groupBox_10);
        allow_external_program->setObjectName(QString::fromUtf8("allow_external_program"));
        allow_external_program->setChecked(false);

        verticalLayout_10->addWidget(allow_external_program);

        label_5 = new QLabel(groupBox_10);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_10->addWidget(label_5);

        path_constraints_combo_box = new QComboBox(groupBox_10);
        path_constraints_combo_box->setObjectName(QString::fromUtf8("path_constraints_combo_box"));

        verticalLayout_10->addWidget(path_constraints_combo_box);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(groupBox_10);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_11->addWidget(label_6);

        goal_tolerance = new QDoubleSpinBox(groupBox_10);
        goal_tolerance->setObjectName(QString::fromUtf8("goal_tolerance"));

        horizontalLayout_11->addWidget(goal_tolerance);


        verticalLayout_10->addLayout(horizontalLayout_11);

        clear_octomap_button = new QPushButton(groupBox_10);
        clear_octomap_button->setObjectName(QString::fromUtf8("clear_octomap_button"));

        verticalLayout_10->addWidget(clear_octomap_button);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);


        horizontalLayout_9->addWidget(groupBox_10);

        tabWidget->addTab(planning, QString());
        manipulation = new QWidget();
        manipulation->setObjectName(QString::fromUtf8("manipulation"));
        gridLayout_13 = new QGridLayout(manipulation);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_13 = new QGroupBox(manipulation);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        verticalLayout_8 = new QVBoxLayout(groupBox_13);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        detected_objects_list = new QListWidget(groupBox_13);
        detected_objects_list->setObjectName(QString::fromUtf8("detected_objects_list"));

        verticalLayout_8->addWidget(detected_objects_list);

        detect_objects_button = new QPushButton(groupBox_13);
        detect_objects_button->setObjectName(QString::fromUtf8("detect_objects_button"));

        verticalLayout_8->addWidget(detect_objects_button);


        gridLayout_13->addWidget(groupBox_13, 0, 0, 2, 1);

        groupBox_14 = new QGroupBox(manipulation);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        gridLayout_12 = new QGridLayout(groupBox_14);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        place_button = new QPushButton(groupBox_14);
        place_button->setObjectName(QString::fromUtf8("place_button"));
        place_button->setEnabled(false);

        gridLayout_12->addWidget(place_button, 1, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_9, 2, 1, 1, 1);

        pick_button = new QPushButton(groupBox_14);
        pick_button->setObjectName(QString::fromUtf8("pick_button"));
        pick_button->setEnabled(false);

        gridLayout_12->addWidget(pick_button, 0, 1, 1, 1);

        support_surfaces_list = new QListWidget(groupBox_14);
        support_surfaces_list->setObjectName(QString::fromUtf8("support_surfaces_list"));

        gridLayout_12->addWidget(support_surfaces_list, 0, 0, 3, 1);


        gridLayout_13->addWidget(groupBox_14, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(manipulation);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_14 = new QGridLayout(groupBox_7);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        roi_size_y = new QDoubleSpinBox(groupBox_7);
        roi_size_y->setObjectName(QString::fromUtf8("roi_size_y"));
        roi_size_y->setSingleStep(0.01);
        roi_size_y->setValue(1.5);

        gridLayout_14->addWidget(roi_size_y, 1, 2, 1, 1);

        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_14->addWidget(label_14, 1, 0, 1, 1);

        roi_center_y = new QDoubleSpinBox(groupBox_7);
        roi_center_y->setObjectName(QString::fromUtf8("roi_center_y"));
        roi_center_y->setMinimum(-99);
        roi_center_y->setSingleStep(0.01);

        gridLayout_14->addWidget(roi_center_y, 0, 2, 1, 1);

        roi_size_z = new QDoubleSpinBox(groupBox_7);
        roi_size_z->setObjectName(QString::fromUtf8("roi_size_z"));
        roi_size_z->setSingleStep(0.01);
        roi_size_z->setValue(1.2);

        gridLayout_14->addWidget(roi_size_z, 1, 3, 1, 1);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_14->addWidget(label_12, 0, 0, 1, 1);

        roi_size_x = new QDoubleSpinBox(groupBox_7);
        roi_size_x->setObjectName(QString::fromUtf8("roi_size_x"));
        roi_size_x->setSingleStep(0.01);
        roi_size_x->setValue(4);

        gridLayout_14->addWidget(roi_size_x, 1, 1, 1, 1);

        roi_center_z = new QDoubleSpinBox(groupBox_7);
        roi_center_z->setObjectName(QString::fromUtf8("roi_center_z"));
        roi_center_z->setMinimum(-99);
        roi_center_z->setSingleStep(0.01);
        roi_center_z->setValue(0.6);

        gridLayout_14->addWidget(roi_center_z, 0, 3, 1, 1);

        roi_center_x = new QDoubleSpinBox(groupBox_7);
        roi_center_x->setObjectName(QString::fromUtf8("roi_center_x"));
        roi_center_x->setMinimum(-99);
        roi_center_x->setSingleStep(0.01);

        gridLayout_14->addWidget(roi_center_x, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_6, 1, 4, 1, 1);


        gridLayout_13->addWidget(groupBox_7, 1, 1, 1, 1);

        tabWidget->addTab(manipulation, QString());
        scene_collision_objects = new QWidget();
        scene_collision_objects->setObjectName(QString::fromUtf8("scene_collision_objects"));
        gridLayout_4 = new QGridLayout(scene_collision_objects);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_5 = new QGroupBox(scene_collision_objects);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_12 = new QVBoxLayout(groupBox_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        object_status = new QLabel(groupBox_5);
        object_status->setObjectName(QString::fromUtf8("object_status"));
        object_status->setEnabled(false);
        object_status->setFrameShape(QFrame::StyledPanel);
        object_status->setFrameShadow(QFrame::Raised);
        object_status->setTextFormat(Qt::AutoText);

        verticalLayout_12->addWidget(object_status);


        gridLayout_4->addWidget(groupBox_5, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(scene_collision_objects);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        object_x = new QDoubleSpinBox(groupBox_4);
        object_x->setObjectName(QString::fromUtf8("object_x"));
        object_x->setMinimum(-1000);
        object_x->setMaximum(1000);

        horizontalLayout_6->addWidget(object_x);

        object_y = new QDoubleSpinBox(groupBox_4);
        object_y->setObjectName(QString::fromUtf8("object_y"));
        object_y->setMinimum(-1000);
        object_y->setMaximum(1000);

        horizontalLayout_6->addWidget(object_y);

        object_z = new QDoubleSpinBox(groupBox_4);
        object_z->setObjectName(QString::fromUtf8("object_z"));
        object_z->setMinimum(-1000);
        object_z->setMaximum(1000);

        horizontalLayout_6->addWidget(object_z);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_4->addWidget(label_13);

        object_rx = new QDoubleSpinBox(groupBox_4);
        object_rx->setObjectName(QString::fromUtf8("object_rx"));
        object_rx->setMinimum(-3.14);
        object_rx->setMaximum(3.14);
        object_rx->setSingleStep(0.2);

        horizontalLayout_4->addWidget(object_rx);

        object_ry = new QDoubleSpinBox(groupBox_4);
        object_ry->setObjectName(QString::fromUtf8("object_ry"));
        object_ry->setMinimum(-3.14);
        object_ry->setMaximum(3.14);
        object_ry->setSingleStep(0.2);

        horizontalLayout_4->addWidget(object_ry);

        object_rz = new QDoubleSpinBox(groupBox_4);
        object_rz->setObjectName(QString::fromUtf8("object_rz"));
        object_rz->setMinimum(-3.14);
        object_rz->setMaximum(3.14);
        object_rz->setSingleStep(0.2);

        horizontalLayout_4->addWidget(object_rz);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_5->addWidget(label_17);

        scene_scale = new QSlider(groupBox_4);
        scene_scale->setObjectName(QString::fromUtf8("scene_scale"));
        scene_scale->setMinimumSize(QSize(160, 0));
        scene_scale->setMaximum(200);
        scene_scale->setValue(100);
        scene_scale->setSliderPosition(100);
        scene_scale->setOrientation(Qt::Horizontal);
        scene_scale->setInvertedAppearance(false);
        scene_scale->setTickPosition(QSlider::NoTicks);
        scene_scale->setTickInterval(0);

        horizontalLayout_5->addWidget(scene_scale);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_5->addWidget(label_18);


        verticalLayout_6->addLayout(horizontalLayout_5);


        gridLayout_4->addWidget(groupBox_4, 1, 1, 1, 1);

        groupBox3 = new QGroupBox(scene_collision_objects);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        horizontalLayout_14 = new QHBoxLayout(groupBox3);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_2);

        export_scene_text_button = new QPushButton(groupBox3);
        export_scene_text_button->setObjectName(QString::fromUtf8("export_scene_text_button"));

        horizontalLayout_14->addWidget(export_scene_text_button);

        import_scene_text_button = new QPushButton(groupBox3);
        import_scene_text_button->setObjectName(QString::fromUtf8("import_scene_text_button"));

        horizontalLayout_14->addWidget(import_scene_text_button);


        gridLayout_4->addWidget(groupBox3, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 3, 1, 1, 1);

        groupBox_8 = new QGroupBox(scene_collision_objects);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        import_url_button = new QPushButton(groupBox_8);
        import_url_button->setObjectName(QString::fromUtf8("import_url_button"));

        gridLayout_8->addWidget(import_url_button, 1, 1, 1, 1);

        clear_scene_button = new QPushButton(groupBox_8);
        clear_scene_button->setObjectName(QString::fromUtf8("clear_scene_button"));

        gridLayout_8->addWidget(clear_scene_button, 3, 1, 1, 1);

        remove_object_button = new QPushButton(groupBox_8);
        remove_object_button->setObjectName(QString::fromUtf8("remove_object_button"));

        gridLayout_8->addWidget(remove_object_button, 3, 0, 1, 1);

        collision_objects_list = new QListWidget(groupBox_8);
        collision_objects_list->setObjectName(QString::fromUtf8("collision_objects_list"));
        collision_objects_list->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

        gridLayout_8->addWidget(collision_objects_list, 0, 0, 1, 2);

        import_file_button = new QPushButton(groupBox_8);
        import_file_button->setObjectName(QString::fromUtf8("import_file_button"));

        gridLayout_8->addWidget(import_file_button, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_8, 0, 0, 4, 1);

        tabWidget->addTab(scene_collision_objects, QString());
        stored_plans = new QWidget();
        stored_plans->setObjectName(QString::fromUtf8("stored_plans"));
        gridLayout_3 = new QGridLayout(stored_plans);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_3 = new QGroupBox(stored_plans);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        planning_scene_tree = new QTreeWidget(groupBox_3);
        planning_scene_tree->setObjectName(QString::fromUtf8("planning_scene_tree"));
        planning_scene_tree->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        planning_scene_tree->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        planning_scene_tree->setSelectionMode(QAbstractItemView::SingleSelection);
        planning_scene_tree->setHeaderHidden(true);
        planning_scene_tree->setExpandsOnDoubleClick(true);
        planning_scene_tree->setColumnCount(1);

        verticalLayout_7->addWidget(planning_scene_tree);


        verticalLayout->addWidget(groupBox_3);


        gridLayout_3->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(stored_plans);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        load_scene_button = new QPushButton(groupBox);
        load_scene_button->setObjectName(QString::fromUtf8("load_scene_button"));
        load_scene_button->setEnabled(false);

        gridLayout_5->addWidget(load_scene_button, 0, 0, 1, 1);

        load_query_button = new QPushButton(groupBox);
        load_query_button->setObjectName(QString::fromUtf8("load_query_button"));
        load_query_button->setEnabled(false);

        gridLayout_5->addWidget(load_query_button, 0, 1, 1, 1);

        delete_scene_button = new QPushButton(groupBox);
        delete_scene_button->setObjectName(QString::fromUtf8("delete_scene_button"));
        delete_scene_button->setEnabled(false);

        gridLayout_5->addWidget(delete_scene_button, 1, 0, 1, 1);

        delete_query_button = new QPushButton(groupBox);
        delete_query_button->setObjectName(QString::fromUtf8("delete_query_button"));
        delete_query_button->setEnabled(false);

        gridLayout_5->addWidget(delete_query_button, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(stored_plans);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        save_scene_button = new QPushButton(groupBox_2);
        save_scene_button->setObjectName(QString::fromUtf8("save_scene_button"));
        save_scene_button->setEnabled(false);

        gridLayout_2->addWidget(save_scene_button, 0, 1, 1, 1);

        save_query_button = new QPushButton(groupBox_2);
        save_query_button->setObjectName(QString::fromUtf8("save_query_button"));
        save_query_button->setEnabled(false);

        gridLayout_2->addWidget(save_query_button, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 1, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout_3->addLayout(verticalLayout_2, 1, 1, 1, 1);

        tabWidget->addTab(stored_plans, QString());
        stored_states = new QWidget();
        stored_states->setObjectName(QString::fromUtf8("stored_states"));
        horizontalLayout_2 = new QHBoxLayout(stored_states);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        list_states = new QListWidget(stored_states);
        list_states->setObjectName(QString::fromUtf8("list_states"));

        horizontalLayout_2->addWidget(list_states);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_15 = new QGroupBox(stored_states);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        gridLayout_17 = new QGridLayout(groupBox_15);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        load_state_button = new QPushButton(groupBox_15);
        load_state_button->setObjectName(QString::fromUtf8("load_state_button"));

        gridLayout_17->addWidget(load_state_button, 0, 0, 1, 1);

        clear_states_button = new QPushButton(groupBox_15);
        clear_states_button->setObjectName(QString::fromUtf8("clear_states_button"));

        gridLayout_17->addWidget(clear_states_button, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_15);

        groupBox_16 = new QGroupBox(stored_states);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        gridLayout_15 = new QGridLayout(groupBox_16);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        set_as_start_state_button = new QPushButton(groupBox_16);
        set_as_start_state_button->setObjectName(QString::fromUtf8("set_as_start_state_button"));

        gridLayout_15->addWidget(set_as_start_state_button, 0, 0, 1, 1);

        set_as_goal_state_button = new QPushButton(groupBox_16);
        set_as_goal_state_button->setObjectName(QString::fromUtf8("set_as_goal_state_button"));

        gridLayout_15->addWidget(set_as_goal_state_button, 0, 1, 1, 1);

        remove_state_button = new QPushButton(groupBox_16);
        remove_state_button->setObjectName(QString::fromUtf8("remove_state_button"));

        gridLayout_15->addWidget(remove_state_button, 1, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_16);

        groupBox_17 = new QGroupBox(stored_states);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        gridLayout_16 = new QGridLayout(groupBox_17);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        save_start_state_button = new QPushButton(groupBox_17);
        save_start_state_button->setObjectName(QString::fromUtf8("save_start_state_button"));

        gridLayout_16->addWidget(save_start_state_button, 0, 0, 1, 1);

        save_goal_state_button = new QPushButton(groupBox_17);
        save_goal_state_button->setObjectName(QString::fromUtf8("save_goal_state_button"));

        gridLayout_16->addWidget(save_goal_state_button, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_17);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);


        horizontalLayout_2->addLayout(verticalLayout_4);

        tabWidget->addTab(stored_states, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_11 = new QGridLayout(tab);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        status_text = new QTextEdit(tab);
        status_text->setObjectName(QString::fromUtf8("status_text"));
        status_text->setReadOnly(true);

        gridLayout_11->addWidget(status_text, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        verticalLayout_5->addWidget(tabWidget);

        background_job_progress = new QProgressBar(MotionPlanningUI);
        background_job_progress->setObjectName(QString::fromUtf8("background_job_progress"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(background_job_progress->sizePolicy().hasHeightForWidth());
        background_job_progress->setSizePolicy(sizePolicy5);
        background_job_progress->setMinimumSize(QSize(0, 5));
        background_job_progress->setMaximumSize(QSize(16777215, 5));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        background_job_progress->setPalette(palette);
        background_job_progress->setLayoutDirection(Qt::LeftToRight);
        background_job_progress->setAutoFillBackground(false);
        background_job_progress->setStyleSheet(QString::fromUtf8(""));
        background_job_progress->setMinimum(0);
        background_job_progress->setMaximum(1);
        background_job_progress->setValue(0);

        verticalLayout_5->addWidget(background_job_progress);

        QWidget::setTabOrder(tabWidget, planning_algorithm_combo_box);
        QWidget::setTabOrder(planning_algorithm_combo_box, publish_current_scene_button);
        QWidget::setTabOrder(publish_current_scene_button, database_host);
        QWidget::setTabOrder(database_host, database_port);
        QWidget::setTabOrder(database_port, reset_db_button);
        QWidget::setTabOrder(reset_db_button, database_connect_button);
        QWidget::setTabOrder(database_connect_button, collision_aware_ik);
        QWidget::setTabOrder(collision_aware_ik, approximate_ik);
        QWidget::setTabOrder(approximate_ik, plan_button);
        QWidget::setTabOrder(plan_button, execute_button);
        QWidget::setTabOrder(execute_button, plan_and_execute_button);
        QWidget::setTabOrder(plan_and_execute_button, start_state_selection);
        QWidget::setTabOrder(start_state_selection, use_start_state_button);
        QWidget::setTabOrder(use_start_state_button, goal_state_selection);
        QWidget::setTabOrder(goal_state_selection, use_goal_state_button);
        QWidget::setTabOrder(use_goal_state_button, wcenter_x);
        QWidget::setTabOrder(wcenter_x, wcenter_y);
        QWidget::setTabOrder(wcenter_y, wcenter_z);
        QWidget::setTabOrder(wcenter_z, wsize_x);
        QWidget::setTabOrder(wsize_x, wsize_y);
        QWidget::setTabOrder(wsize_y, wsize_z);
        QWidget::setTabOrder(wsize_z, planning_time);
        QWidget::setTabOrder(planning_time, planning_attempts);
        QWidget::setTabOrder(planning_attempts, exec_time_factor);
        QWidget::setTabOrder(exec_time_factor, allow_replanning);
        QWidget::setTabOrder(allow_replanning, allow_looking);
        QWidget::setTabOrder(allow_looking, allow_external_program);
        QWidget::setTabOrder(allow_external_program, path_constraints_combo_box);
        QWidget::setTabOrder(path_constraints_combo_box, goal_tolerance);
        QWidget::setTabOrder(goal_tolerance, clear_octomap_button);
        QWidget::setTabOrder(clear_octomap_button, detected_objects_list);
        QWidget::setTabOrder(detected_objects_list, detect_objects_button);
        QWidget::setTabOrder(detect_objects_button, support_surfaces_list);
        QWidget::setTabOrder(support_surfaces_list, pick_button);
        QWidget::setTabOrder(pick_button, place_button);
        QWidget::setTabOrder(place_button, roi_center_x);
        QWidget::setTabOrder(roi_center_x, roi_center_y);
        QWidget::setTabOrder(roi_center_y, roi_center_z);
        QWidget::setTabOrder(roi_center_z, roi_size_x);
        QWidget::setTabOrder(roi_size_x, roi_size_y);
        QWidget::setTabOrder(roi_size_y, roi_size_z);
        QWidget::setTabOrder(roi_size_z, collision_objects_list);
        QWidget::setTabOrder(collision_objects_list, import_file_button);
        QWidget::setTabOrder(import_file_button, import_url_button);
        QWidget::setTabOrder(import_url_button, remove_object_button);
        QWidget::setTabOrder(remove_object_button, clear_scene_button);
        QWidget::setTabOrder(clear_scene_button, object_x);
        QWidget::setTabOrder(object_x, object_y);
        QWidget::setTabOrder(object_y, object_z);
        QWidget::setTabOrder(object_z, object_rx);
        QWidget::setTabOrder(object_rx, object_ry);
        QWidget::setTabOrder(object_ry, object_rz);
        QWidget::setTabOrder(object_rz, scene_scale);
        QWidget::setTabOrder(scene_scale, export_scene_text_button);
        QWidget::setTabOrder(export_scene_text_button, import_scene_text_button);
        QWidget::setTabOrder(import_scene_text_button, planning_scene_tree);
        QWidget::setTabOrder(planning_scene_tree, load_scene_button);
        QWidget::setTabOrder(load_scene_button, load_query_button);
        QWidget::setTabOrder(load_query_button, delete_scene_button);
        QWidget::setTabOrder(delete_scene_button, delete_query_button);
        QWidget::setTabOrder(delete_query_button, save_query_button);
        QWidget::setTabOrder(save_query_button, save_scene_button);
        QWidget::setTabOrder(save_scene_button, list_states);
        QWidget::setTabOrder(list_states, load_state_button);
        QWidget::setTabOrder(load_state_button, clear_states_button);
        QWidget::setTabOrder(clear_states_button, set_as_start_state_button);
        QWidget::setTabOrder(set_as_start_state_button, set_as_goal_state_button);
        QWidget::setTabOrder(set_as_goal_state_button, remove_state_button);
        QWidget::setTabOrder(remove_state_button, save_start_state_button);
        QWidget::setTabOrder(save_start_state_button, save_goal_state_button);
        QWidget::setTabOrder(save_goal_state_button, status_text);

        retranslateUi(MotionPlanningUI);

        tabWidget->setCurrentIndex(1);
        query_stackedwidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MotionPlanningUI);
    } // setupUi

    void retranslateUi(QWidget *MotionPlanningUI)
    {
        MotionPlanningUI->setWindowTitle(QApplication::translate("MotionPlanningUI", "MoveIt! Planning Frame", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("MotionPlanningUI", "Planning Library", 0, QApplication::UnicodeUTF8));
        library_label->setText(QApplication::translate("MotionPlanningUI", "Planning Library Name", 0, QApplication::UnicodeUTF8));
        publish_current_scene_button->setText(QApplication::translate("MotionPlanningUI", "&Publish Current Scene", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("MotionPlanningUI", "Warehouse", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MotionPlanningUI", "Host:", 0, QApplication::UnicodeUTF8));
        database_host->setText(QApplication::translate("MotionPlanningUI", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MotionPlanningUI", "Port:", 0, QApplication::UnicodeUTF8));
        reset_db_button->setText(QApplication::translate("MotionPlanningUI", "Reset database ...", 0, QApplication::UnicodeUTF8));
        database_connect_button->setText(QApplication::translate("MotionPlanningUI", "Connect", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MotionPlanningUI", "Kinematics", 0, QApplication::UnicodeUTF8));
        collision_aware_ik->setText(QApplication::translate("MotionPlanningUI", "Use Collision-Aware IK", 0, QApplication::UnicodeUTF8));
        approximate_ik->setText(QApplication::translate("MotionPlanningUI", "Allow Approximate IK Solutions", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(context), QApplication::translate("MotionPlanningUI", "Context", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("MotionPlanningUI", "Commands", 0, QApplication::UnicodeUTF8));
        plan_button->setText(QApplication::translate("MotionPlanningUI", "&Plan", 0, QApplication::UnicodeUTF8));
        execute_button->setText(QApplication::translate("MotionPlanningUI", "&Execute", 0, QApplication::UnicodeUTF8));
        plan_and_execute_button->setText(QApplication::translate("MotionPlanningUI", "Plan and E&xecute", 0, QApplication::UnicodeUTF8));
        result_label->setText(QString());
        groupBox_11->setTitle(QApplication::translate("MotionPlanningUI", "Query", 0, QApplication::UnicodeUTF8));
        use_start_state_button->setText(QApplication::translate("MotionPlanningUI", "&Update", 0, QApplication::UnicodeUTF8));
        query_stackedwidget->setItemText(query_stackedwidget->indexOf(query_stackedwidgetPage2), QApplication::translate("MotionPlanningUI", "Select Start State:", 0, QApplication::UnicodeUTF8));
        use_goal_state_button->setText(QApplication::translate("MotionPlanningUI", "&Update", 0, QApplication::UnicodeUTF8));
        query_stackedwidget->setItemText(query_stackedwidget->indexOf(query_stackedwidgetPage1), QApplication::translate("MotionPlanningUI", "Select Goal State:", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("MotionPlanningUI", "Workspace", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MotionPlanningUI", "Center (XYZ):", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MotionPlanningUI", "Size (XYZ):", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("MotionPlanningUI", "Options", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MotionPlanningUI", "Planning Time (s):", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MotionPlanningUI", "Planning Attempts:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MotionPlanningUI", "Velocity Scaling:", 0, QApplication::UnicodeUTF8));
        allow_replanning->setText(QApplication::translate("MotionPlanningUI", "Allow Replanning", 0, QApplication::UnicodeUTF8));
        allow_looking->setText(QApplication::translate("MotionPlanningUI", "Allow Sensor Positioning", 0, QApplication::UnicodeUTF8));
        allow_external_program->setText(QApplication::translate("MotionPlanningUI", "Allow External Comm.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MotionPlanningUI", "Path Constraints:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MotionPlanningUI", "Goal Tolerance:", 0, QApplication::UnicodeUTF8));
        clear_octomap_button->setText(QApplication::translate("MotionPlanningUI", "Clear octomap", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(planning), QApplication::translate("MotionPlanningUI", "Planning", 0, QApplication::UnicodeUTF8));
        groupBox_13->setTitle(QApplication::translate("MotionPlanningUI", "Detected Objects", 0, QApplication::UnicodeUTF8));
        detect_objects_button->setText(QApplication::translate("MotionPlanningUI", "&Detect", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("MotionPlanningUI", "Support Surfaces", 0, QApplication::UnicodeUTF8));
        place_button->setText(QApplication::translate("MotionPlanningUI", "P&lace", 0, QApplication::UnicodeUTF8));
        pick_button->setText(QApplication::translate("MotionPlanningUI", "&Pick", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MotionPlanningUI", "ROI", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MotionPlanningUI", "Size (m): ", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MotionPlanningUI", "Center (m): ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(manipulation), QApplication::translate("MotionPlanningUI", "Manipulation", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MotionPlanningUI", "Object Status", 0, QApplication::UnicodeUTF8));
        object_status->setText(QApplication::translate("MotionPlanningUI", "Status", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MotionPlanningUI", "Manage Pose and Scale", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MotionPlanningUI", "Position (XYZ): ", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MotionPlanningUI", "Rotation (RPY):", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MotionPlanningUI", "Scale:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MotionPlanningUI", "0%", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MotionPlanningUI", "200%", 0, QApplication::UnicodeUTF8));
        groupBox3->setTitle(QApplication::translate("MotionPlanningUI", "Scene Geometry", 0, QApplication::UnicodeUTF8));
        export_scene_text_button->setText(QApplication::translate("MotionPlanningUI", "&Export As Text", 0, QApplication::UnicodeUTF8));
        import_scene_text_button->setText(QApplication::translate("MotionPlanningUI", "&Import From Text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupBox_8->setToolTip(QApplication::translate("MotionPlanningUI", "Press Ctrl+C to duplicate an object", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_8->setTitle(QApplication::translate("MotionPlanningUI", "Current Scene Objects", 0, QApplication::UnicodeUTF8));
        import_url_button->setText(QApplication::translate("MotionPlanningUI", "Import &URL", 0, QApplication::UnicodeUTF8));
        clear_scene_button->setText(QApplication::translate("MotionPlanningUI", "Clear", 0, QApplication::UnicodeUTF8));
        remove_object_button->setText(QApplication::translate("MotionPlanningUI", "Remove", 0, QApplication::UnicodeUTF8));
        import_file_button->setText(QApplication::translate("MotionPlanningUI", "Import &File", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(scene_collision_objects), QApplication::translate("MotionPlanningUI", "Scene Objects", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MotionPlanningUI", "Planning Scenes and Queries", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = planning_scene_tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MotionPlanningUI", "1", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MotionPlanningUI", "Saved Scenes", 0, QApplication::UnicodeUTF8));
        load_scene_button->setText(QApplication::translate("MotionPlanningUI", "Load &Scene", 0, QApplication::UnicodeUTF8));
        load_query_button->setText(QApplication::translate("MotionPlanningUI", "Load &Query", 0, QApplication::UnicodeUTF8));
        delete_scene_button->setText(QApplication::translate("MotionPlanningUI", "Delete Scene", 0, QApplication::UnicodeUTF8));
        delete_query_button->setText(QApplication::translate("MotionPlanningUI", "Delete Query", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MotionPlanningUI", "Current Scene", 0, QApplication::UnicodeUTF8));
        save_scene_button->setText(QApplication::translate("MotionPlanningUI", "Save Scene", 0, QApplication::UnicodeUTF8));
        save_query_button->setText(QApplication::translate("MotionPlanningUI", "Save Query", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(stored_plans), QApplication::translate("MotionPlanningUI", "Stored Scenes", 0, QApplication::UnicodeUTF8));
        groupBox_15->setTitle(QApplication::translate("MotionPlanningUI", "Stored States", 0, QApplication::UnicodeUTF8));
        load_state_button->setText(QApplication::translate("MotionPlanningUI", "Filter", 0, QApplication::UnicodeUTF8));
        clear_states_button->setText(QApplication::translate("MotionPlanningUI", "Clear", 0, QApplication::UnicodeUTF8));
        groupBox_16->setTitle(QApplication::translate("MotionPlanningUI", "Selected State", 0, QApplication::UnicodeUTF8));
        set_as_start_state_button->setText(QApplication::translate("MotionPlanningUI", "Set as Start", 0, QApplication::UnicodeUTF8));
        set_as_goal_state_button->setText(QApplication::translate("MotionPlanningUI", "Set as Goal", 0, QApplication::UnicodeUTF8));
        remove_state_button->setText(QApplication::translate("MotionPlanningUI", "Remove", 0, QApplication::UnicodeUTF8));
        groupBox_17->setTitle(QApplication::translate("MotionPlanningUI", "Current  State", 0, QApplication::UnicodeUTF8));
        save_start_state_button->setText(QApplication::translate("MotionPlanningUI", "Save Start", 0, QApplication::UnicodeUTF8));
        save_goal_state_button->setText(QApplication::translate("MotionPlanningUI", "Save Goal", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(stored_states), QApplication::translate("MotionPlanningUI", "Stored States", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MotionPlanningUI", "Status", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        background_job_progress->setWhatsThis(QApplication::translate("MotionPlanningUI", "<html><head/><body><p>Progress of background jobs</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        background_job_progress->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class MotionPlanningUI: public Ui_MotionPlanningUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H
