#include "editinfo.h"
#include "ui_editinfo.h"
#include <QMessageBox>

EditInfo::EditInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditInfo)
{
    ui->setupUi(this);
}

EditInfo::~EditInfo()
{
    delete ui;
}

//bool EditInfo:: CheckData(QString str)
//{
//    QString example = "12345abcd";
//    for (int i =0;i<example.size();i++)
//    {
//        if (example[i].isDigit())
//        {
//
//        }
//        else
//        {
//            return false;
//        }
//    }
//    return true;
//}

QList<QVariant> EditInfo::getDataRow()
{
    QList<QVariant> dataRow;

    QString a = ui->linePrice->text();

    dataRow.append(ui->lineName->text());
    dataRow.append(ui->linePrice->text());
    dataRow.append(ui->lineYear->text());
    dataRow.append(ui->comboBox->currentText());
    dataRow.append(ui->lineKM->text());

    return dataRow;
}
