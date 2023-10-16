#include <iostream>
using namespace std;
int main()
{
    int m, n, i, sum = 0;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = m + 1; i < n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of all numbers between " << m << " and " << n << " is " << sum;
    return 0;
}
