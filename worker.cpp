#include "Worker.h"
#include "person.h"
#include "datalayer.h"
#include <ctype.h>

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

