#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "hello";
    QCoreApplication a(argc, argv);

    return a.exec();
}

