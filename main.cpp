#include <cstdlib>
#include <iostream>
#include <stdio.h>



using namespace std;

int plansza[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int i=0;
int ruch=0;

string intToStr(int n)
{
     string tmp, ret;
     if(n < 0) {
      ret = "-";
      n = -n;
     }
     do {
      tmp += n % 10 + 48;
      n -= n % 10;
     }
       while(n /= 10);
     for(int i = tmp.size()-1; i >= 0; i--)
      ret += tmp[i];
     return ret;
};

int czywolne(int u, int o)
{
    if(plansza[u][o]==0)
    {
        plansza[u][o]=9;
    }
    else
    {
        cout << "To pole jest zajete";
        getchar();
            wybor = -1;
    cout << "\nTwoj ruch: ";
    cin >> wybor;
    ruch=0;
    }
}
int swith()
{
    switch(wybor)
    {
    case 7:
        czywolne(0, 0);
    break;
    case 8:
        czywolne(0,1);
    break;
    case 9:
        czywolne(0,2);
    break;
    case 4:
        czywolne(1,0);
    break;
    case 5:
        czywolne(1,1);
    break;
    case 6:
        czywolne(1,2);
    break;
    case 1:
        czywolne(2,0);
    break;
    case 2:
        czywolne(2,1);
    break;
    case 3:
        czywolne(2,2);
    break;
    default:
        cout << "Nie ma takiego pola";
        getchar();
        wybor = -1;
        cout << "\nTwoj ruch: ";
        cin >> wybor;
        ruch=0;
        swith();
    }
}

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

int gra()
{
if(ruch==0)
    {
        if(plansza[0][0]==0)
        {
            plansza[0][0]=2;
            ruch=1;
        }
        else if(ruch==0)
        {
            if(plansza[2][2]==0)
            {
                plansza[2][2]=2;
                ruch=1;
            }
            else if(ruch==0)
            {
                if(plansza[2][0]==0)
                {
                    plansza[2][0]=2;
                    ruch=1;
                }
                else if(ruch==0)
                {
                    if(plansza[2][0]==0)
                    {
                        plansza[2][0]=2;
                        ruch=1;
                    }
                    else if(ruch==0)
                    {
                        if(plansza[0][2]==0)
                        {
                            plansza[0][2]=2;
                            ruch=1;
                        }
                    }
                }
            }
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

int reset()
{
    system("cls");
    plansza[0][0]=100;
    plansza[0][1]=100;
    plansza[0][2]=100;
    plansza[1][0]=100;
    plansza[1][1]=100;
    plansza[1][2]=100;
    plansza[2][0]=100;
    plansza[2][1]=100;
    plansza[2][2]=100;
    return 0;
}


int main()
{
    planszaa();

    return 0;
}
