#include "person.h"

Person::Person()
{
    name = "";
    gender = "";
    dayOfBirth = "";
    dayOfDeath = "";
}

Person::Person(string n, string g, string dob, string dod)
{
    name = n;
    gender = g;
    dayOfBirth = dob;
    dayOfDeath = dod;
}


