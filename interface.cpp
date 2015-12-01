#include "interface.h"
#include "person.h"
#include <ctype.h>

Interface::Interface()
{

}
void Interface::programInfo() const
{
    cout << "**************************************************" << endl;
    cout << "*                    WELCOME                     *" << endl;
    cout << "*  This program allows you to store info about   *" << endl;
    cout << "*  the most common computer scientists, search   *" << endl;
    cout << "*  and sort your list.                           *" << endl;
    cout << "*                                                *" << endl;
    cout << "**************************************************" << endl;

}

void Interface::pickOption()
{
    cout << endl;
    cout << "       MAIN MENU       " << endl;
    cout << "       ---------       " << endl;
    cout << "1 - Add computer scientist." << endl;
    cout << "2 - Show list." << endl;
    cout << "3 - Exit." << endl;
}

Person Interface::getPersoninfo()
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

void Interface::printList(vector<Person> listOfPersons)
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

int Interface::askSearchOrSort()
{
<<<<<<< HEAD
    int SoS_answer;
=======
    int answer;
>>>>>>> 07f509b01152d401a018408cd153850f6a285d8b
    cout << endl;
    cout << "      LIST MENU      " << endl;
    cout << "      ---------      " << endl;
    cout << "1 - Search list" << endl;
    cout << "2 - Sort list" << endl;
    cout << "3 - Return to main menu" << endl;
<<<<<<< HEAD
    cin >> SoS_answer;

    return SoS_answer;
=======
    cin >> answer;
    while(cin.fail() || answer < 1 || answer > 3)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "The input you entered is not a valid option. Pick again!" << endl;
        cout << endl;
        cout << "      LIST MENU      " << endl;
        cout << "      ---------      " << endl;
        cout << "1 - Search list" << endl;
        cout << "2 - Sort list" << endl;
        cout << "3 - Return to main menu" << endl;
        cin >> answer;
    }
    return answer;
>>>>>>> 07f509b01152d401a018408cd153850f6a285d8b
}

void Interface::start()
{
    programInfo();     // welcome note.

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


        if(numb < 1 || numb > 3)
        {
            cout << "The input you entered is not a valid option. Pick again!" << endl;
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

                int ans = askSearchOrSort();
                if(ans == 1)
                {
                    string search;

                    cout << "Enter search word: ";
                    cin >> search;

                    vector<Person> searchlist = m_worker.searchScientist(search); //
                    printList(searchlist);
                }
                if(ans == 2)
                {

                    vector<Person> sortlist = m_worker.sortList(m_worker.getList());
                    printList(sortlist);

                    int sort_ans = sortMenu();
                    if(sort_ans == 1)
                    {
                        vector<Person> sortlist = m_worker.sortList(m_worker.getList());
                        printList(sortlist);
                        break;
                    }
                    /*if(sort_ans == 2)
                    {

                    }
                    if(sort_ans == 3)
                    {

                    }
                    if(sort_ans == 4)
                    {

                    }*/

                }
                if(ans == 3)
                {
                    break;
                }

                break;
            }
            case 3:
            {
                m_worker.saveAllData(); // Geymum öll gögn áður en forriti er lokað.
                return;
            }

       }
     }
}

void Interface::printSorted()
{
    vector<Person>listOfPersons = m_worker.sortList(m_worker.getList());
    printList(listOfPersons);
}


<<<<<<< HEAD
void Interface::printSortedReverse()
{
    vector<Person>listOfPersons = m_worker.sortListReverse(m_worker.getList());
    printList(listOfPersons);
}

void Interface::printSortedYear()
{
    vector<Person>listOfPersons = m_worker.sortListYearOfBirth(m_worker.getList());
    printList(listOfPersons);
}

void Interface::printSortedYearReverse()
{
    vector<Person>listOfPersons = m_worker.sortListYearOfBirthReverse(m_worker.getList());
    printList(listOfPersons);
}
int Interface::sortMenu()
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
<<<<<<< HEAD

=======
>>>>>>> 0bebaa9b24fd5de4b3f60b6ab56438835ff23aee
>>>>>>> 07f509b01152d401a018408cd153850f6a285d8b
>>>>>>> e6d8067adffceea3a0bac325b0c129aeacdb52a8
