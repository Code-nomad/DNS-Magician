#include "interfacequery.h"
#include <qnetworkinterface.h>
#include <iostream>
 #include <QStringList>
interfaceQuery::interfaceQuery()
{

    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces(); // now you have interfaces list
    foreach (QNetworkInterface iface, list)  // this should print all interfaces' names
    {

       interfaceNames << iface.humanReadableName();
    }

}

QStringList interfaceQuery::getnames()
{



      return interfaceNames;
}
