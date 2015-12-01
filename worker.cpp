#include "Worker.h"
#include "person.h"
#include "datalayer.h"
#include <ctype.h>
#include <string>
#include <algorithm>

Worker::Worker()
{

}

void Worker::createPerson(Person p)     // Býr til eintak af persónu og vistar.
{
    m_datalayer.AddData(p);
}

vector<Person> Worker::getList()
{
    return m_datalayer.getPersonList();
}

void Worker::saveAllData()
{
    m_datalayer.SaveData();
}

vector<Person> Worker::searchScientist(string search)   // Leitar af persónu í lista og skilar
{                                                       // vector af persónum sem fundust.
    vector<Person> list = m_datalayer.getPersonList();
    vector<Person> returnList;
    for(unsigned int i = 0; i < list.size(); i++)
    {
        if(list[i].getName().find(search, 0)!= string::npos)
            returnList.push_back(list[i]);
    }
    return returnList;
}

bool compareName(Person& name1, Person& name2)
{
    return name1.getName() < name2.getName();
}


vector<Person> Worker::sortList(vector<Person> listOfPersons)
{
    sort(listOfPersons.begin(), listOfPersons.end(), compareName);
    return listOfPersons;
}

