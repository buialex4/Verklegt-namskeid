#include "datalayer.h"

DataLayer::DataLayer()
{
    createTestData();
}

void DataLayer::SaveData(Person p)
{
    m_personList.push_back(p);  //breyta þessu þannig að það save-i
                                //alltaf í skrá?
}

vector<Person> DataLayer::GetData()
{
    return m_personList;  //Búi breytir þessu kannski? Ef það er
}                         //eðlilegra að sækja gögnin í skrá í staðin
                          //fyrir að sækja þau úr vector.

void swap(Person& p1, Person& p2)
{
    Person temp = p1;
    p1 = p2;
    p2 = temp;
}

void DataLayer::createTestData()   // temp. prufu data.
{
    Person computerduddi("Alan Turing", "m", 1936, 1989);
    Person computerduddi2("Britta Konn", "m", 1936, -1);
    SaveData(computerduddi);
    SaveData(computerduddi2);
    swap(m_personList[0], m_personList[1]);
}
