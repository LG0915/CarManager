#ifndef QRECVTHREAD_H
#define QRECVTHREAD_H

#include <QObject>

class QRecvThread : public QObject
{
    Q_OBJECT
public:
    explicit QRecvThread(QObject *parent = nullptr);

signals:

};

#endif // QRECVTHREAD_H
