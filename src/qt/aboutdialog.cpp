#include "aboutdialog.h"
#include "ui_aboutdialog.h"

#include "dialogwindowflags.h"

#include "clientmodel.h"

#include "version.h"

#include <QKeyEvent>

AboutDialog::AboutDialog(QWidget *parent) :
    QWidget(parent, Qt::CustomizeWindowHint),
	ui(new Ui::AboutDialog)
	{    
ui->setupUi(this);	
}

void AboutDialog::setModel(ClientModel *model)
{
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_buttonBox_accepted()
{
    close();
}

void AboutDialog::keyPressEvent(QKeyEvent *event)
{
#ifdef ANDROID
    if(event->key() == Qt::Key_Back)
    {
        close();
    }
#else
    if(event->key() == Qt::Key_Escape)
    {
        close();
    }
#endif
}