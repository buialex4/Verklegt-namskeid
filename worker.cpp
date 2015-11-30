#include "Worker.h"
#include "person.h"
#include "datalayer.h"

Worker::Worker()
{

}
void Worker::programInfo() const
{
    cout << "**************************************************" << endl;
    cout << "*                    WELCOME                     *" << endl;
    cout << "*  This program allows you to store info about   *" << endl;
    cout << "*  the most common computer scientists, search   *" << endl;
    cout << "*  and sort your list.                           *" << endl;
    cout << "*                                                *" << endl;
    cout << "**************************************************" << endl;

}

void Worker::pressNumber()
{
    int numb;

    do
    {
        m_interface.pickOption();
        cin >> numb;

        //Error message
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

/*void sortList(vector<Person>& listOfPersons)
{
    for(unsigned int i = 0; i < listOfPersons.size(); i++){

        cout << listOfPersons.size()
    }
}*/
