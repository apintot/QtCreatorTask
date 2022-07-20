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
    void Text_(QVector<char> qv);
    const QVector<char> Text_() const;

private:
    void takeurl(std::string& str);
    void readtxt(QVector<char>& text, std::string url);

    QVector<char> text_;

signals:

public slots:
    void callme();
    void callurl(QString str);
    void download();

private slots:


};

#endif // COPYTXT_H
