#ifndef INTERFACE_H
#define INTERFACE_H
#include "person.h"
#include "worker.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Interface
{
public:
    Interface();
    void start();

private:
    Worker m_worker;
<<<<<<< HEAD
    void programInfo()const;
    void pickOption();
    Person getPersoninfo();  // fær upplýsingar um persónu frá notanda.
    void printList(vector<Person> listOfPersons); // prentar út lista af persónum.
    char askSearchOrSort();
=======

    void programInfo()const;  // birtir welcome note.
    void pickOption();        // birtir valkosti fyrir notanda.
    Person getPersoninfo();   // fær upplýsingar um persónu frá notanda.
    void printList(vector<Person> listOfPersons); // prentar út lista af persónum.
    vector<Person> sortList(vector<Person> listOfPersons);
    void askSort();
    char askToSort();
    void printSorted();
>>>>>>> 706799159cc5a4d069d0027e74e5b3337c16a92a
};

#endif // INTERFACE_H
