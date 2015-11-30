#include "Worker.h"
#include "person.h"
#include "datalayer.h"
#include <ctype.h>

Worker::Worker()
{

}

void Worker::createPerson(Person p)
{
    m_datalayer.SaveData(p);
}

vector<Person> Worker::getList()
{
    vector<Person> listOfPersons = m_datalayer.GetData();
    return listOfPersons;
}
