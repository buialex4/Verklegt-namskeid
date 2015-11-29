#include "datalayer.h"

DataLayer::DataLayer()
{

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
