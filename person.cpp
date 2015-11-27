#include "person.h"

Person::Person()
{
    name = "";
    age = 0;
    dayOfBirth = 0;
    dayOfDeath = 0;
}

Person::Person(string n, int a, int dob, int dod)
{
    name = n;
    age = a;
    dayOfBirth = dob;
    dayOfDeath = dod;
}

