#ifndef DATALAYER_H
#define DATALAYER_H
#include "person.h"
#include <vector>


class DataLayer
{
public:
    DataLayer();
    vector<Person> GetData();
    void SaveData(Person p);


private:
    vector<Person> m_personList;
};

#endif // DATALAYER_H
