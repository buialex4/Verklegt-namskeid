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
    vector<Person> sortList(vector<Person> listOfPersons);
    void printSorted();
<<<<<<< HEAD
=======
    int sortMenu();
>>>>>>> 0bebaa9b24fd5de4b3f60b6ab56438835ff23aee
};

#endif // INTERFACE_H
