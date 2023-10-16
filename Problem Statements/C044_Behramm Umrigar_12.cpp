#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int count = 0;
    cout<<"Enter number of dolls: ";
    cin>>n;
    int dolls[n];
    for(int i = 0; i<n;i++)
    {
        cout<<"Enter doll type "<<i+1<<": ";
        cin>>dolls[i];
    }

    for(int i = 0;i < n; i++)
    {
        count = 0;
        for(int j = 0;j < n; j++)
        {
            if (dolls[j]==dolls[i])
                count++;
        }
        if(count%2==0)
            {
                continue;
            }
        else
            cout<<endl<<"Doll Type "<<dolls[i]<<" is missing";
    }
}
