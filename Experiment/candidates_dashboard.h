#ifndef CANDIDATES_DASHBOARD_H
#define CANDIDATES_DASHBOARD_H

#include <QWidget>

namespace Ui {
class candidates_dashboard;
}

class candidates_dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit candidates_dashboard(QWidget *parent = nullptr);
    ~candidates_dashboard();

private:
    Ui::candidates_dashboard *ui;
};

#endif // CANDIDATES_DASHBOARD_H
