#ifndef WORKER_H
#define WORKER_H
#include "datalayer.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Worker
{
public:
    Worker();

    void sortList();
    void createPerson(Person p);  // Býr til eintak af persónu og vistar.
    vector<Person> getList();    // sækja lista.
    void saveAllData();

private:
    DataLayer m_datalayer; // Object af DataLayer fyrir Worker klasann.
};

#endif // WORKER_H
