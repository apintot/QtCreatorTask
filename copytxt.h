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
private:
    QVector<char> text_;

signals:

public slots:
    void callme();
    void Text_(QVector<char> qv);
    const QVector<char> Text_() const;

    void callurl(QString str);

private slots:
    void takeurl(std::string& str);
    void readtxt(QVector<char>& text, std::string url);

};

#endif // COPYTXT_H
