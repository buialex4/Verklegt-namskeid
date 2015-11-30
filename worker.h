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
    void programInfo() const;
    void pressNumber();

private:
    Interface m_interface; // Object af Interface fyrir Worker klasann.
    DataLayer m_datalayer; // Object af DataLayer fyrir Worker klasann.
    void createPerson();  // Býr til eintak af persónu og vistar.
    void printList();     // Prentar út allar persónurnar.
    void askSort();
};

#endif // WORKER_H
