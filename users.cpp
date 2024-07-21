#include "users.h"
#include <QStandardPaths>

QString dataPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

QFile customers(dataPath + "/Customers.txt");
QFile admins(dataPath + "/Admin.txt");
