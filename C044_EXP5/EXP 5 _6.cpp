#include <iostream>
using namespace std;

bool isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == originalNum)
        return true;
    else
        return false;
}

int main()
{
    int N1, N2;

    cout << "Enter the range start: ";
    cin >> N1;
    cout << "Enter the range end: ";
    cin >> N2;

    cout << "Armstrong numbers between " << N1 << " and " << N2 << " are: ";

    for (int i = N1; i <= N2; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
