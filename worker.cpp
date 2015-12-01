#include "Worker.h"
#include "person.h"
#include "datalayer.h"
#include <ctype.h>
#include <string>

Worker::Worker()
{

}

void Worker::createPerson(Person p)
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

vector<Person> Worker::searchScientist(string search)
{
    vector<Person> list = m_datalayer.getPersonList();
    vector<Person> returnList;
    for(int i = 0; i < list.size(); i++)
    {
        if(list[i].getName().find(search, 0)!= string::npos)
            returnList.push_back(list[i]);
    }
    return returnList;
}

