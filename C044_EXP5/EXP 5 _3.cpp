#include <iostream>
using namespace std;

int main()
{
    int numLines = 5;
    for (int i = 1; i <= numLines; i++)
    {
        for (int j = 1; j <= numLines - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

