#include "Worker.h"
#include "person.dataLayer.h"

Worker::Worker()
{

}

void Worker::pressNumber()
{
    int numb;

    do
    {
        m_interface.pickOption();
        cin >> numb;
        if(numb < 1 || numb > 4)
        {
            cout << numb << " is not an option. Pick again" << endl;
        }

         switch(numb)
         {
            case 1:
                getPersonInfo();

                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                return;
          }

    }while(true);
}

void Worker::getPersonInfo()
{
    Person p = m_interface.getPersoninfo();
    
}

