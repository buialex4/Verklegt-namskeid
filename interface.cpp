#include "interface.h"

Interface::Interface()
{

}

void Interface::pickOption()
{
    cout << endl;
    cout << "1 - Add computer scientist." << endl;
    cout << "2 - Show list." << endl;
    cout << "3 - Sort." << endl;
    cout << "4 - Exit." << endl;
}

Person Interface::getPersoninfo()
{
    string name;
    string gender;
    int dayOfBirth;
    int dayOfDeath;

    cin.ignore();
    //system("cls");

    cout << "Name of computer scientist: " << endl;
    getline(cin, name);
    cout << "Gender (f/m): " << endl;
    cin >> gender;
    cout << "Enter year of birth (yyyy): " << endl;
    cin >> dayOfBirth;
    cout << "Year of passing (yyyy, Type -1 if scientist is alive): " << endl;
    cin >> dayOfDeath;

    return Person(name, gender, dayOfBirth, dayOfDeath);
}

void Interface::printList(vector<Person> listOfPersons)
{
    //system("cls");

    cout << "LIST OF COMPUTER SCIENTISTS" << endl;
    cout << "---------------------------" << endl;
    for(unsigned int i = 0; i < listOfPersons.size(); i++)
    {
        cout << "Name: " << listOfPersons[i].getName() << endl;
        cout << "Gender: " << listOfPersons[i].getGender() << endl;
        cout << "Born: " << listOfPersons[i].getDayOfBirth() << endl;
        cout << "Died: " << listOfPersons[i].getDayOfDeath() << endl;
        cout << endl;

        cout << "---------------------------" << endl;
}
}
