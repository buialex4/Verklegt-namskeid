#ifndef INTERFACE_H
#define INTERFACE_H
#include "person.dataLayer.h"
#include <iostream>

using namespace std;

class Interface
{
public:
    Interface();
    void pickOption();
    Person getPersoninfo();

};

#endif // INTERFACE_H
