#include "dengueme.h"
#include "options.h"
#include "ui_options.h"

#include <QFileDialog>

Options::Options(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);
     this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->lineEdit->setText(dengueme::settingsFile.value("workspace").toString());
    ui->lineEdit_2->setText(dengueme::settingsFile.value("terrame").toString());
    ui->lineEdit_3->setText(dengueme::settingsFile.value("rscript").toString());
    ui->checkBox->setChecked(dengueme::settingsFile.value("prompt_workspace") == "true");

    ui->comboBox->addItem("Default");

    QDir dir(QCoreApplication::applicationDirPath() + "/translations");
    foreach (QFileInfo x, dir.entryInfoList(QDir::Files))
        if (x.suffix() == "qm")
            ui->comboBox->addItem(x.baseName());

    for (int i = 0; i < ui->comboBox->count(); ++i)
        if (ui->comboBox->itemText(i) == dengueme::settingsFile.value("locale"))
            ui->comboBox->setCurrentIndex(i);

    connect(ui->pushButton,SIGNAL(pressed()),this,SLOT(browseWorkspace()));
    connect(ui->pushButton_2,SIGNAL(pressed()),this,SLOT(browseTerraME()));
    connect(ui->pushButton_3,SIGNAL(pressed()),this,SLOT(browseRscript()));
}

Options::~Options() {
    delete ui;
}

void Options::browseWorkspace() {
    QString path(QFileDialog::getExistingDirectory(this,tr("Workspace Path"),ui->lineEdit->text()));
    if (!path.isEmpty())
        ui->lineEdit->setText(path);
}

void Options::browseTerraME() {
    QString path(QFileDialog::getOpenFileName(this,"TerraME Path",ui->lineEdit_2->text(),"TerraME Executable (*.*)"));
    if (!path.isEmpty())
        ui->lineEdit_2->setText(path);
}

void Options::browseRscript()
{
    QString path(QFileDialog::getOpenFileName(this,"Rscript Path",ui->lineEdit_3->text(),"TerraME Executable (*.*)"));
    if (!path.isEmpty())
        ui->lineEdit_3->setText(path);
}
//Save all the configs in the defautt config file
void Options::accept() {
    dengueme::saveconfig("workspace",ui->lineEdit->text());

    dengueme::saveconfig("terrame",ui->lineEdit_2->text());
    dengueme::setconfig("terrame",ui->lineEdit_2->text());

    dengueme::saveconfig("rscript",ui->lineEdit_3->text());
    dengueme::setconfig("rscript",ui->lineEdit_3->text());

    dengueme::saveconfig("locale",ui->comboBox->currentText());
    dengueme::saveconfig("prompt_workspace",ui->checkBox->isChecked() ? "true" : "false");
    close();
}
