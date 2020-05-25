#ifndef CARMANAGER_H
#define CARMANAGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CarManager; }
QT_END_NAMESPACE

class CarManager : public QMainWindow
{
    Q_OBJECT

public:
    CarManager(QWidget *parent = nullptr);
    ~CarManager();

private:
    Ui::CarManager *ui;
};
#endif // CARMANAGER_H
