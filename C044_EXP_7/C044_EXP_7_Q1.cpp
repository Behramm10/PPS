// Write a function that takes one integer parameter as a year, and displays its leap year or not.
#include <iostream>
using namespace std;
bool isleap(int year);
int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (isleap(year))
        cout << "Leap year" << endl;
    else
        cout << "Not a leap year" << endl;

    return 0;
}

bool isleap(int year)
{
    if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
        return true;
    else if (year % 400 == 0 || year % 4 == 0)
        return true;
    else
        return false;
}