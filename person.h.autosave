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
    Person(string n, string g, int a, int dob, int dod);
    void readPerson(string n, string g, int a, int dob, int dod);
    friend ifstream& operator >>(ifstream& ins, Person& per);
    friend ostream& operator << (ostream& out, Person& per);

private:
    string name;
    string gender;
    int age;
    int dayOfBirth;
    int dayOfDeath;

};

#endif // PERSON_H
