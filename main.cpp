#include <iostream>
#include "Interface.h"
#include <windows.h>

using namespace std;

int main()
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);        //grænt letur.
   Interface inter;                                                     //býr til smið af Interface klasanum.
   inter.start();                                                       //Keyrir forritið.

   return 0;
}
