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

    friend ostream& operator << (ostream &out, const Person& p);
    friend ifstream& operator >> (ifstream &in, const Person& p);

private:
    string name;
    string gender;
    int age;
    int dayOfBirth;
    int dayOfDeath;

};

#endif // PERSON_H
