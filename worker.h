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
<<<<<<< HEAD
    void programInfo() const;
    void pressNumber();

private:
    Interface m_interface;
    DataLayer m_datalayer;

    void getPersonInfo();
    void printList();
    //void sortList();
=======
    void pressNumber();

private:
    Interface m_interface; // Object af Interface fyrir Worker klasann.
    DataLayer m_datalayer; // Object af DataLayer fyrir Worker klasann.
>>>>>>> 7c63fae1c1170c7f49f4dec127a205ed34b38b6c

    void createPerson();  // Býr til eintak af persónu og vistar.
    void printList();     // Prentar út allar persónurnar.
};

#endif // WORKER_H
