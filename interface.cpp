#include "interface.h"
#include "person.h"

Interface::Interface()
{

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
    cout << "Enter year of birth (yyyy): ";
    cin >> dayOfBirth;
    cout << "Year of passing (yyyy, Type -1 if scientist is alive): ";
    cin >> dayOfDeath;

    return Person(name, gender, dayOfBirth, dayOfDeath);
}

void Interface::printList(vector<Person> listOfPersons)
{
    cout << "LIST OF COMPUTER SCIENTISTS" << endl;
    cout << "---------------------------" << endl;
    for(unsigned int i = 0; i < listOfPersons.size(); i++)
    {
        cout << "Name: " << listOfPersons[i].getName() << endl;
        cout << "Gender: " << listOfPersons[i].getGender() << endl;
        cout << "Born: " << listOfPersons[i].getDayOfBirth() << endl;
        if (listOfPersons[i].getDayOfDeath() > 0)
            cout << "Died: " << listOfPersons[i].getDayOfDeath() << endl;
        cout << endl;
        cout << "---------------------------" << endl;
    }
<<<<<<< HEAD
}

char Interface::askToSort()
{
    char answer;
    cout << "Do you want to sort the list? (y/n)" << endl;
    cin >> answer;

    return answer;
=======
>>>>>>> 6a8ee51ca4ef591e2b3aa72baf14e2b7c76b95a7
}
