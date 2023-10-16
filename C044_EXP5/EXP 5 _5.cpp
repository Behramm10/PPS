#include <iostream>
using namespace std;

int main()
{
    int numLines = 3;

    for (int i = 1; i <= numLines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = numLines; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}



    return 0;
}
