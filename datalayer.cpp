#include <fstream>
#include "person.h"
#include "datalayer.h"
#include <cstdlib>

DataLayer::DataLayer()
{
    createTestData();
}

void DataLayer::SaveData(Person p)
{
    /*ofstream out_stream;
    out_stream.open("data.txt", ios::app);
    if(out_stream.fail())
    {
        cout << "in stream fail";
        exit(1);
    }
    out_stream << p.getName() << endl;
    out_stream << p.getGender() << endl;
    out_stream << p.getDayOfBirth() << endl;
    out_stream << p.getDayOfDeath() << endl;
    out_stream.close();*/
    m_personList.push_back(p); //á ekki að vera
}

vector<Person> DataLayer::GetData()
{
    /*ifstream in_stream;
    in_stream.open("data.txt");
    if(in_stream.fail())
    {
        cout << "in stream fail";
        exit(1);
    }
    string name;
    string gender;
    int dob;
    int dod;

    while (!in_stream.eof())
    {
        in_stream >> name;
        in_stream >> gender;
        in_stream >> dob;
        in_stream >> dod;

        Person newguy(name, gender, dob, dod);
        m_personList.push_back(newguy);
    }

    in_stream.close();*/
    return m_personList;  //Búi breytir þessu kannski? Ef það er
}                         //eðlilegra að sækja gögnin í skrá í staðin
                          //fyrir að sækja þau úr vector.

void swap(Person& p1, Person& p2)
{
    Person temp = p1;
    p1 = p2;
    p2 = temp;
}

void DataLayer::createTestData()   // temp. prufu data.
{
    Person computerduddi("Alan Turing", "m", 1936, 1989);
    Person computerduddi2("Britta konn", "m", 1936, -1);
    SaveData(computerduddi);
    SaveData(computerduddi2);
    swap(m_personList[0], m_personList[1]);
}
