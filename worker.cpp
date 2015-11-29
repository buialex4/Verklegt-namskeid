#include "Worker.h"
#include "person.h"

Worker::Worker()
{

}

void Worker::pressNumber()
{
    char numb;

    do
    {
        m_interface.pickOption();
        cin >> numb;
        if((numb != '1') && (numb != '2') && (numb != '3') && (numb != '4'))
        {
            cout << numb << " is not an option. Pick again" << endl;
        }

         switch(numb)
         {
            case '1':
                createPerson();  //býr til eintak af persónu.
                break;
            case '2':
                printList();     //prentar út allar persónurnar.
                break;
            case '3':
                break;
            case '4':
                return;
          }

    }while(true);
}

void Worker::createPerson()
{
    Person p = m_interface.getPersoninfo();
    m_datalayer.SaveData(p);
}

void Worker::printList()
{
    vector<Person> listOfPersons = m_datalayer.GetData();
    m_interface.printList(listOfPersons);
}
