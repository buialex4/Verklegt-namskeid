#ifndef DATALAYER_H
#define DATALAYER_H
#include "person.h"
#include <vector>


class DataLayer
{
public:
    DataLayer();
    void SaveData();                // vistar vector af persónum.
    void AddData(Person& p);        // bætir persónu við
    vector<Person> getPersonList(); // sækir m_personList.

private:
    void GetData(); // sækir allar persónur úr skrá og setur inn í vectorinn.
    vector<Person> m_personList; // geymir lista af persónum.
    void createTestData();      // temp. prufu data.
};

#endif // DATALAYER_H
