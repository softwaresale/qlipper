#include <QtGui/QApplication>

#include "qlippersystray.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    a.setApplicationName("qlipper");
    a.setApplicationVersion("2.0.0"); // TODO/FXIME: build variable!
    a.setOrganizationDomain("qlipper.org");
    a.setOrganizationName("Qlipper");

    a.setQuitOnLastWindowClosed(false);

    QlipperSystray s;
    s.show();

    return a.exec();
}