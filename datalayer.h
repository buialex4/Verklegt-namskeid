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
<<<<<<< HEAD
    void GetData(); // sækir allar persónur úr skrá og setur inn í vectorinn.
    vector<Person> m_personList; // geymir lista af persónum.
    void createTestData();      // temp. prufu data.
=======
    void GetData();                 // sækir allar persónur úr skrá og setur inn í vectorinn.
    vector<Person> m_personList;    // geymir lista af persónum.
>>>>>>> 7801c74748b560c0bb43b548d100b8542954be57
};

#endif // DATALAYER_H
