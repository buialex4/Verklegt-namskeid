#include <fstream>
#include "person.h"
#include "datalayer.h"
#include <cstdlib>

DataLayer::DataLayer()
{
    GetData();
}

void DataLayer::GetData()       //Sækir gögn úr skrá og geymir í vektor.
{
    ifstream in_stream;
    in_stream.open("person.txt");
    if(in_stream.is_open())
    {
        string name;
        string gender;
        int dob;
        int dod;

        while (!in_stream.eof())
        {
            getline(in_stream, name);
            in_stream >> gender;
            in_stream >> dob;
            in_stream >> dod;

            Person newguy(name, gender, dob, dod);
            m_personList.push_back(newguy);
        }
        in_stream.close();
    }
}

void DataLayer::SaveData()                      //Sækir gögn úr vektor og vistar í skrá.
{
    ofstream out_stream;
    out_stream.open("person.txt");

    for(unsigned int i=0; i<m_personList.size(); i++)
    {
        out_stream << m_personList[i].getName() << endl;
        out_stream << m_personList[i].getGender() << endl;
        out_stream << m_personList[i].getDayOfBirth() << endl;
        out_stream << m_personList[i].getDayOfDeath();
    }
    out_stream.close();
}


void DataLayer::AddData(Person& p)              //Bætir við tilviki af Person klasanum og bætir aftan við vektor.
{
    m_personList.push_back(p);
}

vector<Person> DataLayer::getPersonList()        //Skilar private breytunni m_personList.
{
    return m_personList;
}
