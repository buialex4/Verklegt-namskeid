#include <fstream>
#include "person.h"
#include "datalayer.h"
#include <cstdlib>
#include <iostream>

using namespace std;

DataLayer::DataLayer()
{
    GetData();
}

void DataLayer::GetData()
{
    ifstream in_stream;
<<<<<<< HEAD
    in_stream.open("person.txt");
=======
    in_stream.open("data.txt");
>>>>>>> 7801c74748b560c0bb43b548d100b8542954be57

    m_personList.clear();
    if(in_stream.is_open())
    {

        string name;
        string gender;
        int dob;
        int dod;

        while (!in_stream.eof())
        {
            getline(in_stream, name);

            if(in_stream.eof()) // Losnum við vandamál að það sé auð lína aftast
                break;

            in_stream>>gender;
            in_stream>>dob;
            in_stream>>dod;


            Person newguy(name, gender, dob, dod);
            m_personList.push_back(newguy);
        }

        in_stream.close();
    }
}

void DataLayer::SaveData()
{
    ofstream out_stream;
<<<<<<< HEAD
    out_stream.open("person.txt");
=======
    out_stream.open("data.txt");
>>>>>>> 7801c74748b560c0bb43b548d100b8542954be57

    for(unsigned int i=0; i<m_personList.size(); i++)
    {
        out_stream << m_personList[i].getName() << endl;
        out_stream << m_personList[i].getGender() << endl;
        out_stream << m_personList[i].getDayOfBirth() << endl;
        out_stream << m_personList[i].getDayOfDeath();
    }
    out_stream.close();
}


void DataLayer::AddData(Person& p)
{
    m_personList.push_back(p);
}

vector<Person> DataLayer::getPersonList()
{
    return m_personList;
}
