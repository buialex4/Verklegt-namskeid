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
    void readPerson(string n, string g, int a, int dob, int dod);


private:
    string name;
    string gender;
    int dayOfBirth;
    int dayOfDeath;

};

#endif // PERSON_H
