#include "SelThreshDlg.h"
#include "ui_SelThreshDlg.h"

SelThreshDlg::SelThreshDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelThreshDlg)
{
    ui->setupUi(this);
}

SelThreshDlg::~SelThreshDlg()
{
    delete ui;
}

void SelThreshDlg::on_horizontalSlider_v