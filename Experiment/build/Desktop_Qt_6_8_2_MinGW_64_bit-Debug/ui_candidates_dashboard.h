/********************************************************************************
** Form generated from reading UI file 'candidates_dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATES_DASHBOARD_H
#define UI_CANDIDATES_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_candidates_dashboard
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Title;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *dashboard_btn;
    QPushButton *voters_btn;
    QPushButton *cadidates_btn;
    QPushButton *result_btn;
    QFormLayout *formLayout;
    QLabel *LIVE_STATS;
    QLabel *candidates;
    QLabel *vters;
    QLabel *castsvote;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *name;
    QLabel *label_7;
    QLabel *id;
    QLabel *label_12;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *party;
    QLabel *label_10;
    QLabel *actions;

    void setupUi(QWidget *candidates_dashboard)
    {
        if (candidates_dashboard->objectName().isEmpty())
            candidates_dashboard->setObjectName("candidates_dashboard");
        candidates_dashboard->resize(504, 633);
        candidates_dashboard->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(candidates_dashboard);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Title = new QLabel(candidates_dashboard);
        Title->setObjectName("Title");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setStrikeOut(false);
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Title);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        dashboard_btn = new QPushButton(candidates_dashboard);
        dashboard_btn->setObjectName("dashboard_btn");
        QFont font1;
        font1.setWeight(QFont::DemiBold);
        dashboard_btn->setFont(font1);
        dashboard_btn->setAutoFillBackground(false);
        dashboard_btn->setStyleSheet(QString::fromUtf8(" background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    margin: 0 5px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    min-width: 120px;;"));

        horizontalLayout_2->addWidget(dashboard_btn);

        voters_btn = new QPushButton(candidates_dashboard);
        voters_btn->setObjectName("voters_btn");
        voters_btn->setFont(font1);
        voters_btn->setStyleSheet(QString::fromUtf8(" background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    margin: 0 5px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    min-width: 120px;"));

        horizontalLayout_2->addWidget(voters_btn);

        cadidates_btn = new QPushButton(candidates_dashboard);
        cadidates_btn->setObjectName("cadidates_btn");
        cadidates_btn->setFont(font1);
        cadidates_btn->setStyleSheet(QString::fromUtf8(" background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    margin: 0 5px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    min-width: 120px;"));

        horizontalLayout_2->addWidget(cadidates_btn);

        result_btn = new QPushButton(candidates_dashboard);
        result_btn->setObjectName("result_btn");
        result_btn->setFont(font1);
        result_btn->setStyleSheet(QString::fromUtf8(" background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    margin: 0 5px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    min-width: 120px;"));

        horizontalLayout_2->addWidget(result_btn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        LIVE_STATS = new QLabel(candidates_dashboard);
        LIVE_STATS->setObjectName("LIVE_STATS");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        LIVE_STATS->setFont(font2);
        LIVE_STATS->setStyleSheet(QString::fromUtf8("color:black"));
        LIVE_STATS->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, LIVE_STATS);

        candidates = new QLabel(candidates_dashboard);
        candidates->setObjectName("candidates");
        candidates->setStyleSheet(QString::fromUtf8("color:black"));
        candidates->setMargin(5);

        formLayout->setWidget(1, QFormLayout::LabelRole, candidates);

        vters = new QLabel(candidates_dashboard);
        vters->setObjectName("vters");
        vters->setStyleSheet(QString::fromUtf8("color:black"));
        vters->setMargin(5);

        formLayout->setWidget(2, QFormLayout::LabelRole, vters);

        castsvote = new QLabel(candidates_dashboard);
        castsvote->setObjectName("castsvote");
        castsvote->setStyleSheet(QString::fromUtf8("color:black"));
        castsvote->setMargin(5);

        formLayout->setWidget(3, QFormLayout::LabelRole, castsvote);

        label_2 = new QLabel(candidates_dashboard);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        label_3 = new QLabel(candidates_dashboard);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, label_3);

        label_4 = new QLabel(candidates_dashboard);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::FieldRole, label_4);


        verticalLayout_2->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(candidates_dashboard);
        label->setObjectName("label");
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setMargin(10);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_9 = new QLabel(candidates_dashboard);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label_8 = new QLabel(candidates_dashboard);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_8, 2, 3, 1, 1);

        name = new QLabel(candidates_dashboard);
        name->setObjectName("name");
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        name->setFont(font3);
        name->setStyleSheet(QString::fromUtf8("color:black"));
        name->setFrameShape(QFrame::Shape::NoFrame);
        name->setLineWidth(1);
        name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        name->setMargin(6);

        gridLayout->addWidget(name, 1, 1, 1, 1);

        label_7 = new QLabel(candidates_dashboard);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        id = new QLabel(candidates_dashboard);
        id->setObjectName("id");
        id->setMaximumSize(QSize(70, 16777215));
        id->setFont(font3);
        id->setStyleSheet(QString::fromUtf8("color:black"));
        id->setFrameShape(QFrame::Shape::NoFrame);
        id->setFrameShadow(QFrame::Shadow::Raised);
        id->setLineWidth(1);
        id->setMidLineWidth(0);
        id->setAlignment(Qt::AlignmentFlag::AlignCenter);
        id->setMargin(6);

        gridLayout->addWidget(id, 1, 0, 1, 1);

        label_12 = new QLabel(candidates_dashboard);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_12, 3, 3, 1, 1);

        label_5 = new QLabel(candidates_dashboard);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(candidates_dashboard);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_11 = new QLabel(candidates_dashboard);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_11, 3, 2, 1, 1);

        party = new QLabel(candidates_dashboard);
        party->setObjectName("party");
        party->setMaximumSize(QSize(130, 16777215));
        party->setFont(font3);
        party->setStyleSheet(QString::fromUtf8("color:black"));
        party->setAlignment(Qt::AlignmentFlag::AlignCenter);
        party->setMargin(6);

        gridLayout->addWidget(party, 1, 2, 1, 1);

        label_10 = new QLabel(candidates_dashboard);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_10, 3, 1, 1, 1);

        actions = new QLabel(candidates_dashboard);
        actions->setObjectName("actions");
        actions->setFont(font3);
        actions->setStyleSheet(QString::fromUtf8("color:black"));
        actions->setAlignment(Qt::AlignmentFlag::AlignCenter);
        actions->setMargin(6);

        gridLayout->addWidget(actions, 1, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        retranslateUi(candidates_dashboard);

        QMetaObject::connectSlotsByName(candidates_dashboard);
    } // setupUi

    void retranslateUi(QWidget *candidates_dashboard)
    {
        candidates_dashboard->setWindowTitle(QCoreApplication::translate("candidates_dashboard", "Form", nullptr));
        Title->setText(QCoreApplication::translate("candidates_dashboard", "ELECTION ADMIN PORTAL", nullptr));
        dashboard_btn->setText(QCoreApplication::translate("candidates_dashboard", "Dashboard", nullptr));
        voters_btn->setText(QCoreApplication::translate("candidates_dashboard", "Candidates", nullptr));
        cadidates_btn->setText(QCoreApplication::translate("candidates_dashboard", "Voters", nullptr));
        result_btn->setText(QCoreApplication::translate("candidates_dashboard", "Results", nullptr));
        LIVE_STATS->setText(QCoreApplication::translate("candidates_dashboard", "LIVE STATS", nullptr));
        candidates->setText(QCoreApplication::translate("candidates_dashboard", "Candidates :", nullptr));
        vters->setText(QCoreApplication::translate("candidates_dashboard", "Voters :", nullptr));
        castsvote->setText(QCoreApplication::translate("candidates_dashboard", "Votes Cast :", nullptr));
        label_2->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("candidates_dashboard", "RECENT CANDIDATES", nullptr));
        label_9->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        name->setText(QCoreApplication::translate("candidates_dashboard", "Name", nullptr));
        label_7->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        id->setText(QCoreApplication::translate("candidates_dashboard", "ID", nullptr));
        label_12->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        party->setText(QCoreApplication::translate("candidates_dashboard", "Party", nullptr));
        label_10->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        actions->setText(QCoreApplication::translate("candidates_dashboard", "Actions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class candidates_dashboard: public Ui_candidates_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATES_DASHBOARD_H
