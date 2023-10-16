#include <iostream>
using namespace std;
int main()
{
    int N=0,X=0, Total_X=0;
    cout<<"\n Enter days:";
    cin>>N;
    if(N>0 && N<=7)
    for (int i=0;i<N; i++)
    {
        cout<<"\n No of sets for day"<<i+1<<": ";
        cin>>X;
        Total_X=Total_X+X;
    }
    cout<<"\n Total number of squats:"<<Total_X*15;

    return 0;
}

