#include "users.h"
#include <QStandardPaths>

QString dataPath = QStandardPaths::writableLocation(QStandardPaths::HomeLocation);

QFile customers(dataPath + "/TheVendor/Customers.txt");
QFile admins(dataPath + "/TheVendor/Admin.txt");
