#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    cout << "All combinations of 1, 2, and 3 are: " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }

    return 0;
}

