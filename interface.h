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

private:
    Worker m_worker;

    void programInfo()const;                        // birtir welcome note.
    void pickOption();                              // birtir valkosti fyrir notanda.
    Person getPersoninfo();                         // fær upplýsingar um persónu frá notanda.
    void printList(vector<Person> listOfPersons);   // prentar út lista af persónum.
    char askToSort();
    void printSorted();
    char askSearchOrSort();
};

#endif // INTERFACE_H
