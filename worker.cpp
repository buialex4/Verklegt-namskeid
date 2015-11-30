#include "Worker.h"
#include "person.h"
#include "datalayer.h"
#include <ctype.h>

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
           if(cin.fail())
           {
               cin.clear();
               cin.ignore(100,'\n');
           }

        //Error message
        if(numb < 1 || numb > 4)

        {
            cout << "The input you enterd is not an option. Pick again" << endl;
        }

         switch(numb)
         {
            case 1:
                createPerson();  //býr til eintak af persónu.
                break;
            case 2:
                printList();     //prentar út allar persónurnar.
                break;
            case 3:
                break;
            case 4:
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

/*void sortList(vector<Person>& listOfPersons)
{
    for(unsigned int i = 0; i < listOfPersons.size(); i++){

        cout << listOfPersons.size()
    }
}*/
