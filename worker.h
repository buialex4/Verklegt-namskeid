#ifndef WORKER_H
#define WORKER_H
#include "interface.h"
#include "datalayer.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Worker
{
public:
    Worker();

    void pressNumber();

private:
    Interface m_interface;
    DataLayer m_datalayer;

    void getPersonInfo();
    void printList();

};

#endif // WORKER_H
