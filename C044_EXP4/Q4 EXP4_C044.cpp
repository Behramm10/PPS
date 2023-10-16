#include <iostream>
using namespace std;
int main()
{
    int num, pos = 0, neg = 0, zero = 0;
    char cha;
    do
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> cha;
    } while (cha == 'y' || cha == 'Y');
    cout << "The number of positive numbers is: " << pos << endl;
    cout << "The number of negative numbers is: " << neg << endl;
    cout << "The number of zeros is: " << zero << endl;
    return 0;
}
