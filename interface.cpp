#include "Interface.h"
#include "Person.h"
#include <ctype.h>

Interface::Interface()
{

}

void Interface::start()             //Keyrir forritið.
{
    programInfo();     //Opnunarskilaboð til notanda.
    int numb;

    while(true)
    {
        pickOption();
        cin >> numb;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(100,'\n');
        }
        if(numb < 1 || numb > 4)
        {
            cout << "The input you entered is not a valid option. Pick again!" << endl;     //Villuskilaboð fyrir valmynd.
        }
        switch(numb)
        {
            case 1:
            {
                Person p = getPersoninfo(); //sækja upplýsingar um persónu.
                m_worker.createPerson(p);   //býr til eintak af persónu.
                break;
            }
            case 2:
            {
                vector<Person> list = m_worker.getList(); // Sækja lista.
                printList(list);

                int sos_ans = askSearchOrSort();
                while(sos_ans != 3)
                {
                    if(sos_ans == 1)
                    {
                        int sort_ans = sortMenu();
                        if(sort_ans == 1)
                        {
                            printSorted();
                        }
                        if(sort_ans == 2)
                        {
                            printSortedReverse();
                        }
                        if(sort_ans == 3)
                        {
                            printSortedYear();
                        }
                        if(sort_ans == 4)
                        {
                            printSortedYearReverse();
                        }
                    }


                if(sos_ans == 2)
                {
                    string remove;
                    cout << "Enter name to remove: ";
                    cin >> remove;
                    vector<Person> removelist = m_worker.removeScientist(remove); //
                    printList(removelist);
                }
                if(sos_ans == 3)
                {
                    break;
                }
                sos_ans = askSearchOrSort();
              }
              break;
            }

            case 3:                     // Search list
            {
                string search;
                cout << "Enter search word: ";
                cin >> search;
                vector<Person> searchlist = m_worker.searchScientist(search);
                printList(searchlist);
                break;
            }
            case 4:
            {
                m_worker.saveAllData(); // Geymum öll gögn áður en forriti er lokað.
                return;
            }
       }
     }
}

void Interface::programInfo() const  //Opnunarskilaboð til notanda.
{
    cout << "**************************************************" << endl;
    cout << "*                    WELCOME                     *" << endl;
    cout << "*  This program allows you to store info about   *" << endl;
    cout << "*  the most common computer scientists, search   *" << endl;
    cout << "*  and sort your list.                           *" << endl;
    cout << "*                               BREYTA!!!!       *" << endl;
    cout << "**************************************************" << endl;
}

void Interface::pickOption()        //Aðalvalmynd.
{
    cout << endl;
    cout << "       MAIN MENU       " << endl;
    cout << "       ---------       " << endl;
    cout << "1 - Add computer scientist " << endl;
    cout << "2 - Show list " << endl;
    cout << "3 - Search list " << endl;
    cout << "4 - Save/Exit " << endl;
}

Person Interface::getPersoninfo()       //Inntak fyrir upplýsingar um persónu.
{
    string name;
    string gender;
    int dayOfBirth;
    int dayOfDeath;

    cin.ignore();

    cout << "Name of computer scientist: ";
    getline(cin, name);
    cout << "Gender (f/m): ";
    cin >> gender;
    while(gender != "f" && gender != "m") // Villuskilaboð (ef notandi slær inn vitlausann innslátt
    {
        cout << "Invalid gender input!" << endl;
        cout << "Gender (f/m): ";
        cin >> gender;
    }
    cout << "Enter year of birth (yyyy): ";
    cin >> dayOfBirth;
    while(cin.fail() || dayOfBirth < 0 || dayOfBirth > 2015) // Villu tjékk á innslætti dayofbirth
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Invalid year input!" << endl;
        cout << "Enter year of birth (yyyy): ";
        cin >> dayOfBirth;
    }
    cout << "Year of passing (yyyy, Type -1 if scientist is alive): ";
    cin >> dayOfDeath;
    while(cin.fail() || dayOfDeath < -1 || dayOfDeath > 2015) // Villu tjékk á innslætti dayofbirth
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Invalid year input!" << endl;
        cout << "Year of passing (yyyy, Type -1 if scientist is alive): ";
        cin >> dayOfDeath;
    }
    return Person(name, gender, dayOfBirth, dayOfDeath);
}

void Interface::printList(vector<Person> listOfPersons)         //Prentar út upplýsingar um persónur.
{
    cout << endl;
    cout << "LIST OF COMPUTER SCIENTISTS" << endl;
    cout << "---------------------------" << endl;
    for(unsigned int i = 0; i < listOfPersons.size(); i++)
    {
        cout << "Name: " << listOfPersons[i].getName() << endl;
        cout << "Gender: " << (listOfPersons[i].getGender()=="m"?"Male":"Female") << endl;
        cout << "Born: " << listOfPersons[i].getDayOfBirth() << endl;
        if (listOfPersons[i].getDayOfDeath() > 0)
            cout << "Died: " << listOfPersons[i].getDayOfDeath() << endl;
        cout << "---------------------------" << endl;
    }
}

int Interface::askSearchOrSort()            //Valmynd fyrir "show list".
{

    int answer;

    cout << endl;
    cout << "       LIST MENU      " << endl;
    cout << "       ---------      " << endl;
    cout << "1 - Sort list" << endl;
    cout << "2 - Remove from list" << endl;
    cout << "3 - Return to main menu" << endl;

    cin >> answer;

    while(cin.fail() || answer < 1 || answer > 3)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "The input you entered is not a valid option. Pick again!" << endl;
        cout << endl;
        cout << "       LIST MENU      " << endl;
        cout << "       ---------      " << endl;
        cout << "1 - Sort list" << endl;
        cout << "2 - Remove from list" << endl;
        cout << "3 - Return to main menu" << endl;
        cin >> answer;
    }

    return answer;
}


void Interface::printSorted()               //prentar út uppröðuðum upplýsingum á mismunandi vegu.
{
    vector<Person>listOfPersons = m_worker.sortList(m_worker.getList());
    printList(listOfPersons);
}

void Interface::printSortedReverse()
{
    vector<Person>listOfPersons = m_worker.sortListReverse(m_worker.getList());
    printList(listOfPersons);
}

void Interface::printSortedYear()
{
    vector<Person>listOfPersons = m_worker.sortListYear(m_worker.getList());
    printList(listOfPersons);
}

void Interface::printSortedYearReverse()
{
    vector<Person>listOfPersons = m_worker.sortListYearReverse(m_worker.getList());
    printList(listOfPersons);
}

int Interface::sortMenu()           //Valmynd fyrir "sort list".
{
    int answer;
    cout << "--------------------------------" << endl;
    cout << "Sort by?" << endl;
    cout << "1 - In alphabetical order " << endl;
    cout << "2 - In reverse alphabetical order " << endl;
    cout << "3 - Birth " << endl;
    cout << "4 - Reverse birth " << endl;
    cin >> answer;
    while(cin.fail() || answer < 1 || answer > 4)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "The input you entered is not a valid option. Pick again!" << endl;
        cout << "Sort by?" << endl;
        cout << "1 - In alphabetical order " << endl;
        cout << "2 - In reverse alphabetical order " << endl;
        cout << "3 - Birth " << endl;
        cout << "4 - Reverse birth " << endl;
        cin >> answer;
    }
    return answer;
}

