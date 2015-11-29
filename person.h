#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
public:
    Person();
    Person(string n, string g, string dob, string dod);
    void readPerson(string n, string g, string dob, string dod);
    string getName();
    string getGender();
    string getDayOfBirth();
    string getDayOfDeath();

private:
    string name;
    string gender;
    string dayOfBirth;
    string dayOfDeath;
};

#endif // PERSON_H
