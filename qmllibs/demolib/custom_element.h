#pragma once

#include <QObject>
#include <QtQml/qqmlregistration.h>

class CustomElement : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(int counter READ counter WRITE setCounter NOTIFY counterChanged)

 public:
    CustomElement();
    int counter() const;
    void setCounter(int value);

signals:
    void counterChanged();

private:
    int m_counter;
};
