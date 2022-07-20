#ifndef COPYTXT_H
#define COPYTXT_H

#include <QObject>
#include <QVector>

using namespace std;

class Copytxt : public QObject
{
    Q_OBJECT
public:
    explicit Copytxt(QObject *parent = nullptr);

signals:

public slots:
    void callme();
    void callurl(QString str);
    void takeurl(std::string& str);
private slots:
    void readtxt(QVector<char>& text, string url);

};

#endif // COPYTXT_H
