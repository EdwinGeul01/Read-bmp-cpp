#include "proyecto.h"
#include "readbmp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    proyecto w;

    w.show();
    return a.exec();
}
