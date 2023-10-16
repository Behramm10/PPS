#include <iostream>
using namespace std;
int main()
{
    unsigned int S, D;
    cout << "Enter the initial positions of Sahil and Dev: ";
    cin >> S >> D;

    int difference=D-S;

        if (difference%2==0)
        {
            cout << "Sahil will meet Dev at position " << endl;

        }
        else
        {
            cout << "Sahil will not be able to meet Dev." << endl;

        }
    return 0;
}
