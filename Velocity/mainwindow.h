#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// qt
#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QFile>

// forms
#include "profileeditor.h"
#include "about.h"
#include "packageviewer.h"
#include "xdbfdialog.h"
#include "strbdialog.h"
#include "profileeditor.h"
#include "creationwizard.h"
#include "profilecreatorwizard.h"
#include "themecreationwizard.h"
#include "gameadderdialog.h"

// other
#include "ui_mainwindow.h"
#include "Stfs/StfsPackage.h"
#include "GPD/GPDBase.h"
#include <iostream>
#include <vector>
#include "FileIO.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);

private slots:
    void on_actionAbout_triggered();

    void on_actionPackage_triggered();

    void on_actionXDBF_File_triggered();

    void on_actionSTRB_File_triggered();

    void on_actionCreate_Package_triggered();

    void on_actionTitle_ID_Finder_triggered();

    void on_actionProfile_Creator_triggered();

    void on_actionProfile_Editor_triggered();

    void on_actionTheme_Creator_triggered();

    void on_actionGame_Adder_triggered();

private:
    Ui::MainWindow *ui;
    vector<StfsPackage*> openPackages;
};

#endif // MAINWINDOW_H
