#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int N1, N2;

    cout << "Enter the range start: ";
    cin >> N1;
    cout << "Enter the range end: ";
    cin >> N2;


    cout << "Prime numbers between " << N1 << " and " << N2 << " are: ";

    for (int i = N1; i <= N2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

