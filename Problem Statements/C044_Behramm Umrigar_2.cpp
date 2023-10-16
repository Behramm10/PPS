#include <iostream>
using namespace std;
int main()
{
    unsigned int x,y,a;
    cout<<"\n Enter minimum age limit:";
    cin>>x;
    cout<<"\n Enter maximum age limit:";
    cin>>y;
    cout<<"\n Enter Rahul`s age:";
    cin>>a;

    if (a>=x && a<=y)
        {
            cout<<"\n Rahul is eligible to take the exam";
        }
    else
            {
                cout<<"\n Rahul is not eligible to take the exam";
            }
    return 0;
}

