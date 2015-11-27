#include "person.h"

Person::Person()
{
    name = "";
    gender = "";
    age = 0;
    dayOfBirth = 0;
    dayOfDeath = 0;
}

Person::Person(string n, string g, int a, int dob, int dod)
{
    name = n;
    gender = g;
    age = a;
    dayOfBirth = dob;
    dayOfDeath = dod;
}

ostream& operator << (ostream& out, const Person& p)
{
    out << "Name: " << p.name << endl;
    out << "Gender: " << p.gender << endl;
    out << "Age: " << p.age << endl;
    out << "Day of birth: " << p.dayOfDeath << endl;
    out << "Died: " << p.dayOfDeath << endl;
    return out;
}


