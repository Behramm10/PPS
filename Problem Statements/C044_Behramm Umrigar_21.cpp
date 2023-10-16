#include <iostream>
using namespace std;

int len_array(long int);
void convert_array(long int, int[], int);
int findMax(int[], int);
void incrementMax(int[], int);

int main()
{
    long int number;
    cout << "\n Enter the number: ";
    cin >> number;
    int size_array = len_array(number);
    int number_array[size_array];

    convert_array(number, number_array, size_array);

    cout << "\n Array of digits: ";
    for (int i = 0; i < size_array; i++)
    {
        cout << number_array[i] << " ";
    }
    cout << endl;

    incrementMax(number_array, size_array);

    cout << "\n Array after incrementing the greatest number: ";
    for (int i = 0; i < size_array; i++)
    {
        cout << number_array[i] << " ";
    }
    cout << endl;

    return 0;
}

int len_array(long int n)
{
    long int temp = n;
    int counter_digit = 0;
    while (temp > 0)
    {
        temp = temp / 10;
        counter_digit++;
    }
    cout << "\n Digit: " << counter_digit;
    return counter_digit;
}

void convert_array(long int n, int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
}

int findMax(int arr[], int size)
{
    int maxNum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

void incrementMax(int arr[], int size)
{
    int maxNum = findMax(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == maxNum)
        {
            arr[i]++;
            break;
        }
    }
}
