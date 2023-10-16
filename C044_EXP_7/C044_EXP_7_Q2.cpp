// Write a function that takes two integer parameters x & y, and returns the result X^Y. (Don’t use pow( ))
#include <iostream>
using namespace std;
void power(int x, int y);
int main()
{
    int x, y;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;

    power(x, y);

    return 0;
}

void power(int x, int y)
{
    int total = x;
    for (int i = 0; i < y - 1; i++)
    {
        total *= x;
    }
    cout << total << endl;
}