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

string Person::getName()
{
    return name;
}

string Person::getGender()
{
    return gender;
}

int Person::getDayOfBirth()
{
    return dayOfBirth;
}

int Person::getDayOfDeath()
{
    return dayOfDeath;
}
