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
    Person(string n, string g, int dob, int dod);
    string getName();
    string getGender();
    int getDayOfBirth();
    int getDayOfDeath();

private:
    string name;
    string gender;
    int dayOfBirth;
    int dayOfDeath;
};

#endif // PERSON_H
