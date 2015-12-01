#ifndef INTERFACE_H
#define INTERFACE_H
#include "person.h"
#include "worker.h"
#include <iostream>
#include <vector>

using namespace std;

class Interface
{
public:
    Interface();
    void start();
    void printSorted();
    vector<Person> sortList(vector<Person> listOfPersons);

private:
    Worker m_worker;
    void askSort();
    void programInfo()const;
    void pickOption();
    Person getPersoninfo();  // fær upplýsingar um persónu frá notanda.
    void printList(vector<Person> listOfPersons); // prentar út lista af persónum.
    char askToSort();
};

#endif // INTERFACE_H
