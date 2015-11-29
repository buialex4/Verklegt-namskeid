#include "Worker.h"
#include "person.h"

Worker::Worker()
{

}

void Worker::pressNumber()
{
    int numb;

    do
    {
        m_interface.pickOption();
        cin >> numb;
        if(numb < 1 || numb > 4)
        {
            cout << numb << " is not an option. Pick again" << endl;
        }

         switch(numb)
         {
            case 1:
                getPersonInfo();
                break;
            case 2:
                printList();
                break;
            case 3:
                break;
            case 4:
                return;
          }

    }while(true);
}

void Worker::getPersonInfo()
{
    Person p = m_interface.getPersoninfo();
    m_datalayer.SaveData(p);
}

void Worker::printList()
{
    vector<Person> listOfPersons = m_datalayer.GetData();
    m_interface.printList(listOfPersons);
}
