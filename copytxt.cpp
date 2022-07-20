#include "copytxt.h"
#include <QDebug>
#include <QVector>
#include <stdio.h>

using namespace std;

Copytxt::Copytxt(QObject *parent)
    : QObject{parent}
{

}

void Copytxt::callme()
{
    qDebug() << "hola";
}

void Copytxt::callurl(QString str)
{
    string s = str.toStdString();
    QVector<char> text;
    this->takeurl(s);
    this->readtxt(text,s);
    this->Text_(text);
    qDebug() << this->Text_();
}

void Copytxt::takeurl(std::string& str)
{
    for(int i = 0; i < 10; ++i)
    {
        str.erase(str.begin());
    }
}

void Copytxt::readtxt(QVector<char> &text, string url)
{
    FILE *f;
    char aux;

    f = fopen(url.c_str(),"r");

    while(!feof(f))
    {
        aux = fgetc(f);
        text.push_back(aux);
    }

    fclose(f);
}

void Copytxt::Text_(QVector<char> qv)
{
    text_ = qv;
}

const QVector<char> Copytxt::Text_() const
{
    return text_;
}

void Copytxt::download()
{
    FILE *f;

    f = fopen("./default.txt", "w+");

    if( f == NULL)
        qDebug() << "Something went wrong";
    else
    {
        auto it = this->Text_().begin();
        while(it != this->Text_().end())
        {
            fprintf(f,"%c",*it);
            ++it;
        }
    }

    fclose(f);

    qDebug() << "Finished :D";

}
