#ifndef INTERFACEQUERY_H
#define INTERFACEQUERY_H
#include <QStringList>

class interfaceQuery
{
public:
    interfaceQuery();
    QStringList getnames();

private:
        QStringList interfaceNames;
};

#endif // INTERFACEQUERY_H
