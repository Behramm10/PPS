// WAP using user defined function to calculate and return factorial of a given integer
#include <iostream>
using namespace std;
int factorial(int num);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    factorial(num);
}
int factorial(int num)
{
    int ans = 1;
    for (int i = num; i > 0; i--)
    {
        ans *= i;
    }
    cout << "Factorial = " << ans << endl;

    return 0;
}