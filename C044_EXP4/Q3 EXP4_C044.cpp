#include <iostream>
using namespace std;
int main()
{
    int x, y, i, power = 1; //initializing variables
    cout << "Enter the base number: ";
    cin >> x;
    cout << "Enter the exponent number: ";
    cin >> y;
    for (i = 1; i <= y; i++) //using loop
    {
        power = power * x; //formula
    }
    cout << "The power of " << x << " raised to " << y << " is " << power; //output
    return 0;
}
