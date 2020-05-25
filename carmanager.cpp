#include "carmanager.h"
#include "ui_carmanager.h"

CarManager::CarManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CarManager)
{
    ui->setupUi(this);
}

CarManager::~CarManager()
{
    delete ui;
}

