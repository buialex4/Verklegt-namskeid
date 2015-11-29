#include "datalayer.h"

DataLayer::DataLayer()
{

}

void DataLayer::SaveData(Person p)
{
    m_personList.push_back(p);
}

vector<Person> DataLayer::GetData()
{
    return m_personList;
}
