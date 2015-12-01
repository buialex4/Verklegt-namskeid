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
    if(cin.fail()) // Villu tjékk á innslætti dayofbirth
    {
        cin.clear();
        cin.ignore(100,'\n');
    }
    while(dayOfBirth < 1500 || dayOfBirth > 2100) // Villuskilaboð (ef notandi slær inn vitlausann innslátt
    {
        cout << "Invalid year input!" << endl;
        cout << "Enter year of birth (yyyy): " << endl;
        cin >> dayOfBirth;
    }
    cout << "Year of passing (yyyy, Type -1 if scientist is alive): ";
    cin >> dayOfDeath;

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

char Interface::askSearchOrSort()
{
    char answer;
    cout << endl;
    cout << "      LIST MENU      " << endl;
    cout << "      ---------      " << endl;
    cout << "1 - Search the list" << endl;
    cout << "2 - Sort the list" << endl;
    cout << "3 - Return to main menu" << endl;
    cin >> answer;

    if(answer == 'y')
        printSorted();

    return answer;
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


        if(numb < 1 || numb > 4)
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
                char ans = askSearchOrSort();
                if(ans == '1')
                {
                    string search;

                    cout << "Enter search word: ";
                    cin >> search;

                    vector<Person> searchlist = m_worker.searchScientist(search); //
                    printList(searchlist);
                }
                if(ans == '2')
                {
                    system("Cls");
                    programInfo();
                    break;
                }
                if(ans == '3')
                {
                    system("Cls");
                    programInfo();
                    break;
                }


                break;
            }
            case 3:
            {
                m_worker.saveAllData(); // Geymum öll gögn áður en forriti er lokað.
                return;
            }
<<<<<<< HEAD
=======
            case 4:
            {
                string search;

                cout << "Enter search word: ";
                cin >> search;

                vector<Person> searchlist = m_worker.searchScientist(search); //
                printList(searchlist);

            }
>>>>>>> 706799159cc5a4d069d0027e74e5b3337c16a92a
       }
     }
}

<<<<<<< HEAD
=======
void Interface::printSorted()
{
    vector<Person>listOfPersons = m_worker.sortList(m_worker.getList());
    printList(listOfPersons);
}
>>>>>>> 706799159cc5a4d069d0027e74e5b3337c16a92a
