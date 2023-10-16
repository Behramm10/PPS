#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0; //initializing variables
    cout << "Enter the value of N: ";
    cin >> n;
    for (i = 2; i <= n; i = i + 2) //using loop
    {
        sum = sum + i; //formula
    }
    cout << "The sum of first " << n << " even natural numbers is " << sum; //output
    return 0;
}
