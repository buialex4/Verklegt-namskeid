#include "person.h"

Person::Person()
{
    name = "";
    gender = "";
    dayOfBirth = 0;
    dayOfDeath = 0;
}

Person::Person(string n, string g, int dob, int dod)
{
    name = n;
    gender = g;
    dayOfBirth = dob;
    dayOfDeath = dod;
}


