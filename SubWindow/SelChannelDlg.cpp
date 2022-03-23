#include "SelChannelDlg.h"
#include "ui_SelChannelDlg.h"

SelChannelDlg::SelChannelDlg(QWidget *parent, int countChannel) :
    QDialog(parent),
    ui(new Ui::SelChannelDlg)
{
    ui->setupUi(this);

    for(int i=0;i<countChannel;i++)
    {
        ui->cmbBoxChannel->addItem(QString::number(i));
    }
}

SelChannelDlg::~SelCha