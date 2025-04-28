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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_candidates_dashboard
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *Title;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *dashboard_btn;
    QPushButton *voters_btn;
    QPushButton *cadidates_btn;
    QPushButton *result_btn;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *LIVE_STATS;
    QLabel *candidates;
    QLabel *vters;
    QLabel *castsvote;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *id;
    QLabel *name;
    QLabel *party;
    QLabel *actions;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;

    void setupUi(QWidget *candidates_dashboard)
    {
        if (candidates_dashboard->objectName().isEmpty())
            candidates_dashboard->setObjectName("candidates_dashboard");
        candidates_dashboard->resize(741, 633);
        candidates_dashboard->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0)"));
        horizontalLayoutWidget = new QWidget(candidates_dashboard);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 341, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Title = new QLabel(horizontalLayoutWidget);
        Title->setObjectName("Title");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setStrikeOut(false);
        Title->setFont(font);

        horizontalLayout->addWidget(Title);

        horizontalLayoutWidget_2 = new QWidget(candidates_dashboard);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 100, 731, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        dashboard_btn = new QPushButton(horizontalLayoutWidget_2);
        dashboard_btn->setObjectName("dashboard_btn");
        QFont font1;
        font1.setBold(true);
        dashboard_btn->setFont(font1);
        dashboard_btn->setAutoFillBackground(false);
        dashboard_btn->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 89);"));

        horizontalLayout_2->addWidget(dashboard_btn);

        voters_btn = new QPushButton(horizontalLayoutWidget_2);
        voters_btn->setObjectName("voters_btn");
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        voters_btn->setFont(font2);
        voters_btn->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 89);"));

        horizontalLayout_2->addWidget(voters_btn);

        cadidates_btn = new QPushButton(horizontalLayoutWidget_2);
        cadidates_btn->setObjectName("cadidates_btn");
        cadidates_btn->setFont(font1);
        cadidates_btn->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 89);"));

        horizontalLayout_2->addWidget(cadidates_btn);

        result_btn = new QPushButton(horizontalLayoutWidget_2);
        result_btn->setObjectName("result_btn");
        result_btn->setFont(font1);
        result_btn->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 89);"));

        horizontalLayout_2->addWidget(result_btn);

        verticalLayoutWidget = new QWidget(candidates_dashboard);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(129, 190, 411, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LIVE_STATS = new QLabel(verticalLayoutWidget);
        LIVE_STATS->setObjectName("LIVE_STATS");
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        LIVE_STATS->setFont(font3);
        LIVE_STATS->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(LIVE_STATS);

        candidates = new QLabel(verticalLayoutWidget);
        candidates->setObjectName("candidates");
        candidates->setMargin(5);

        verticalLayout->addWidget(candidates);

        vters = new QLabel(verticalLayoutWidget);
        vters->setObjectName("vters");
        vters->setMargin(5);

        verticalLayout->addWidget(vters);

        castsvote = new QLabel(verticalLayoutWidget);
        castsvote->setObjectName("castsvote");
        castsvote->setMargin(5);

        verticalLayout->addWidget(castsvote);

        horizontalLayoutWidget_3 = new QWidget(candidates_dashboard);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 420, 721, 211));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        id = new QLabel(horizontalLayoutWidget_3);
        id->setObjectName("id");
        id->setMaximumSize(QSize(70, 16777215));
        id->setFrameShape(QFrame::Shape::NoFrame);
        id->setFrameShadow(QFrame::Shadow::Raised);
        id->setLineWidth(1);
        id->setMidLineWidth(0);
        id->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        id->setMargin(6);

        horizontalLayout_3->addWidget(id);

        name = new QLabel(horizontalLayoutWidget_3);
        name->setObjectName("name");
        name->setFrameShape(QFrame::Shape::NoFrame);
        name->setLineWidth(1);
        name->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        name->setMargin(6);

        horizontalLayout_3->addWidget(name);

        party = new QLabel(horizontalLayoutWidget_3);
        party->setObjectName("party");
        party->setMaximumSize(QSize(130, 16777215));
        party->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        party->setMargin(6);

        horizontalLayout_3->addWidget(party);

        actions = new QLabel(horizontalLayoutWidget_3);
        actions->setObjectName("actions");
        actions->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        actions->setMargin(6);

        horizontalLayout_3->addWidget(actions);

        horizontalLayoutWidget_4 = new QWidget(candidates_dashboard);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(0, 380, 171, 42));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_4);
        label->setObjectName("label");
        label->setMargin(10);

        horizontalLayout_4->addWidget(label);


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
        id->setText(QCoreApplication::translate("candidates_dashboard", "ID", nullptr));
        name->setText(QCoreApplication::translate("candidates_dashboard", "Name", nullptr));
        party->setText(QCoreApplication::translate("candidates_dashboard", "Party", nullptr));
        actions->setText(QCoreApplication::translate("candidates_dashboard", "Actions", nullptr));
        label->setText(QCoreApplication::translate("candidates_dashboard", "RECENT CANDIDATES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class candidates_dashboard: public Ui_candidates_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATES_DASHBOARD_H
