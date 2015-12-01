#include <iostream>
#include <algorithm>
#include "interface.h"
#include <windows.h>

using namespace std;

int main()
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

   Interface inter;
   inter.start();

   return 0;
}
