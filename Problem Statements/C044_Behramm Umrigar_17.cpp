#include <iostream>
using namespace std;
int main()
{
    int N,D;
    cout<<"Enter number of people: ";
    cin>>N;
    cout<<"Enter number of days: ";
    cin>>D;

    int ages[N];
    for(int i=0;i<N;++i)
    {
        cin>>ages[i];
    }
    int atRisk = 0, notatRisk = 0;
    for(int i=0;i<N;++i)
    {
        if (ages[i]>=80 || ages[i]<=9)
        {
            atRisk++;
        }
        else
        {
            notatRisk++;
        }
    }
    int days = 0;
    int i=0;
    if(atRisk>0)
    {
        days+=(atRisk + D-i)/D;
    }
    if (notatRisk>0)
    {
        days+=(notatRisk + D-i)/D;
    }
    cout <<"Number of days to vaccinate all people: " << days;

    return 0;
}
