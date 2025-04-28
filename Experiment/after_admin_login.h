#ifndef AFTER_ADMIN_LOGIN_H
#define AFTER_ADMIN_LOGIN_H

#include <QDialog>

namespace Ui {
class After_admin_login;
}

class After_admin_login : public QDialog
{
    Q_OBJECT

public:
    explicit After_admin_login(QWidget *parent = nullptr);
    ~After_admin_login();

private:
    Ui::After_admin_login *ui;
};

#endif // AFTER_ADMIN_LOGIN_H
