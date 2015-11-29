#ifndef WORKER_H
#define WORKER_H
#include "interface.h"
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
};

#endif // WORKER_H
