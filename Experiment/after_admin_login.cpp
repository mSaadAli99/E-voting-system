#include "after_admin_login.h"
#include "ui_after_admin_login.h"

After_admin_login::After_admin_login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::After_admin_login)
{
    ui->setupUi(this);
}

After_admin_login::~After_admin_login()
{
    delete ui;
}
