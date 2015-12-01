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
    void programInfo()const;
    void pickOption();
    Person getPersoninfo();  // fær upplýsingar um persónu frá notanda.
    void printList(vector<Person> listOfPersons); // prentar út lista af persónum.
    int askSearchOrSort();
<<<<<<< HEAD
    void printSortedReverse();
    void printSorted();
    void printSortedYear();
    void printSortedYearReverse();
=======
    vector<Person> sortList(vector<Person> listOfPersons);
    void printSorted();
    int sortMenu();
<<<<<<< HEAD
=======
>>>>>>> 0bebaa9b24fd5de4b3f60b6ab56438835ff23aee
>>>>>>> 07f509b01152d401a018408cd153850f6a285d8b
>>>>>>> e6d8067adffceea3a0bac325b0c129aeacdb52a8
};

#endif // INTERFACE_H
