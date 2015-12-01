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
<<<<<<< HEAD
    void programInfo()const;
    void pickOption();
    Person getPersoninfo();  // fær upplýsingar um persónu frá notanda.
    void printList(vector<Person> listOfPersons); // prentar út lista af persónum.
    char askSearchOrSort();
    vector<Person> sortList(vector<Person> listOfPersons);
    void printSorted();

=======

    void programInfo()const;                        // birtir welcome note.
    void pickOption();                              // birtir valkosti fyrir notanda.
    Person getPersoninfo();                         // fær upplýsingar um persónu frá notanda.
    void printList(vector<Person> listOfPersons);   // prentar út lista af persónum.
    char askToSort();
    void printSorted();
    char askSearchOrSort();
>>>>>>> 7801c74748b560c0bb43b548d100b8542954be57
};

#endif // INTERFACE_H
