#include "interface.h"

Interface::Interface()
{

}


void Interface::pickOption()
{
    cout << "1 - Add computer scientist." << endl;
    cout << "2 - Show list." << endl;
    cout << "3 - Sort." << endl;
    cout << "4 - Exit." << endl;
}

void Interface::pressNumber()
{
    int numb;

    pickOption();
    cin >> numb;

    if (numb > 0 && numb < 5 )
    {
       do
       {

            pickOption();
            cin >> numb;
    
           /* switch(numb);

            case 1:
                break;
            case 2:
                break;
            case 3:
                break:
            case 4:
                break;*/


       }while(numb != 4);

     }
    
}
