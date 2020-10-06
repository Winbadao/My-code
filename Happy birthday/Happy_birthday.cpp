#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <string>
#include <stdafx.h>
using namespace std;
int main()
{
    system("color B");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n                                  HAPPY BIRTHDAY"; sleep(2);
    for (int k=1; k<=3600; k++)
    {
        system("color 9"); sleep(1);
        system("color A"); sleep(1);
        system("color C"); sleep(1);
        system("color D"); sleep(1);
        system("color E"); sleep(1);
        system("color 7"); sleep(1);
        system("color B"); sleep(2);
    }
    return 0;
}