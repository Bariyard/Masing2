#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "audiodevicebase.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openPreference();

private:
    Ui::MainWindow  *ui;
    void            CreateActions();
    void            CreateMenus();

    QAction         *preferenceAct;

    QMenu           *fileMenu;


    AudioDeviceBase *m_pAudioDeviceBase;
};

#endif // MAINWINDOW_H
