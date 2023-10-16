#include <iostream>
using namespace std;
int main()
{
    int saif,kareena;
    start:
    cout<<"\n Let the game begin!!"<<endl;
    cout<<"\n Saif`s turn:";
    cin>>saif;
    cout<<"\n Kareena`s turn:";
    cin>>kareena;
    int tot=0;
    if(saif<0 || saif>6 || kareena<0 || kareena>6)
    {
        cout<<"\n Invalid Input";
        goto start;
    }
    tot=saif+kareena;
    if(tot>6)
    {
        cout<<"\n YES";
    }
    else
    {
        cout<<"\n NO";
    }
    return 0;
}
