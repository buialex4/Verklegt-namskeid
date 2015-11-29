#ifndef INTERFACE_H
#define INTERFACE_H
#include "person.dataLayer.h"
#include <iostream>
#include <vector>

using namespace std;

class Interface
{
public:
    Interface();
    void pickOption();
    Person getPersoninfo();
    void printList(vector<Person> v);

};

#endif // INTERFACE_H
