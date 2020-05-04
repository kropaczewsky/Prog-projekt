#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int plansza[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

int planszaa()
{
 system("cls");
    cout << "     |     |     " << endl;
    cout << " ";
    switch(plansza[0][0])
    {
    case 100:
        cout << "(7)";
    break;
    case 2:
        cout << " X ";
    break;
    case 9:
        cout << " O ";
    break;
    default:
        cout << "   ";
    }

}

int main()
{
    planszaa();

    return 0;
}
