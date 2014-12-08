#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "audiopreferencedialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(QString("Masing"));
    m_pAudioDeviceBase = new AudioDeviceBase();

    CreateActions();
    CreateMenus();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::CreateActions()
{
    preferenceAct = new QAction(tr("&Preference..."), this);
    preferenceAct->setShortcuts(QKeySequence::Preferences);
    preferenceAct->setStatusTip(tr("Create a new file"));
    connect(preferenceAct, SIGNAL(triggered()), this, SLOT(openPreference()));
}

void MainWindow::CreateMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(preferenceAct);

}


void MainWindow::openPreference()
{
    AudioPreferenceDialog *pAudioPreferenceDialog = new AudioPreferenceDialog(this, m_pAudioDeviceBase);
    pAudioPreferenceDialog->show();
}
