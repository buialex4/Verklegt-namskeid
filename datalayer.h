#ifndef DATALAYER_H
#define DATALAYER_H
#include "person.h"
#include <vector>
#include <fstream>


class DataLayer
{
public:
    DataLayer();
    vector<Person> GetData(); // skilar öllum skráðum persónum.
    void SaveData(Person p);  // vistar eina persónu.

private:
    vector<Person> m_personList; // geymir lista af persónum.
    void createTestData();      // temp. prufu data.
};

#endif // DATALAYER_H
