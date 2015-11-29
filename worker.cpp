#include "Worker.h"

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

    }while(numb != 4);
}
