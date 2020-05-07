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
    cout << " | ";
    switch(plansza[0][1])
    {
    case 100:
        cout << "(8)";
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
    cout << " | ";
    switch(plansza[0][2])
    {
    case 100:
        cout << "(9)" << endl;
    break;
    case 2:
        cout << " X " << endl;
    break;
    case 9:
        cout << " O " << endl;
    break;
    default:
        cout << "   " << endl;

    }
    cout << "     |     |     " << endl;
    cout << "-----------------" << endl;
    cout << "     |     |     " << endl;
    cout << " ";
    switch(plansza[1][0])
    {
    case 100:
        cout << "(4)";
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
    cout << " | ";
    switch(plansza[1][1])
    {
    case 100:
        cout << "(5)";
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
    cout << " | ";
    switch(plansza[1][2])
    {
    case 100:
        cout << "(6)" << endl;
    break;
    case 2:
        cout << " X " << endl;
    break;
    case 9:
        cout << " O " << endl;
    break;
    default:
        cout << "   " << endl;

    }
    cout << "     |     |     " << endl;
    cout << "-----------------" << endl;
    cout << "     |     |     " << endl;
    cout << " ";
    switch(plansza[2][0])
    {
    case 100:
        cout << "(1)";
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
    cout << " | ";
    switch(plansza[2][1])
    {
    case 100:
        cout << "(2)";
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
    cout << " | ";
    switch(plansza[2][2])
    {
    case 100:
        cout << "(3)" << endl;
    break;
    case 2:
        cout << " X " << endl;
    break;
    case 9:
        cout << " O " << endl;
    break;
    default:
        cout << "   " << endl;
    }
    cout << "     |     |     " << endl;
    return 0;
}

int main()
{
    planszaa();

    return 0;
}
