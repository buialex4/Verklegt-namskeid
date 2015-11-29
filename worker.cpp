#include "Worker.h"

Worker::Worker()
{

}

void Worker::pressNumber()
{
    int numb;

    while(numb != 4)
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
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
          }

    }
}
