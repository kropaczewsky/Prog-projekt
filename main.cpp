#include <cstdlib>
#include <iostream>
#include <stdio.h>



using namespace std;

int plansza[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int i=0;
int ruch=0;

int czywygrana(int czy)
{


    i=0;
    if(ruch==0)
    {
        //wiersze
        while(i<3)
         {
            przerwa("badam wiersze");
            przerwa(intToStr(i));
            if(plansza[i][0]+plansza[i][1]+plansza[i][2]==czy )//|| plansza[i][0]+plansza[i][2]==4 || plansza[i][1]+plansza[i][2]==4)
            {
                //uzupelnij trzeci x
                if(plansza[i][0]==0)
                {
                    plansza[i][0]=2;
                }
                else if(plansza[i][1]==0)
                {
                    plansza[i][1]=2;
                }
                else if(plansza[i][2]==0)
                {
                    plansza[i][2]=2;
                }
            
            ruch=1;
            }
        i++;
        }
    }
    if (ruch==0)
    {
        i=0;
        //kolumny
         while(i<3)
        {
            przerwa("badam kolumnmy");
            przerwa(intToStr(i));
            if(plansza[0][i]+plansza[1][i]+plansza[2][i]==czy )//|| plansza[i][0]+plansza[i][2]==4 || plansza[i][1]+plansza[i][2]==4)
            {
                //uzupe³nij trzeci iks
                if(plansza[0][i]==0)
                {
                    plansza[0][i]=2;
                }
                else if(plansza[1][i]==0)
                {
                    plansza[1][i]=2;
                }
                else if(plansza[2][i]==0)
                {
                    plansza[2][i]=2;
                }
            ruch=1;
            }
        i++;
        }
    }
    return 0;
}



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
