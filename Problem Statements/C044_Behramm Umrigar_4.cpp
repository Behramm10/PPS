#include <iostream>
using namespace std;

int main() {
    unsigned int Y, X;
    cout << "Enter your total income : ";
    cin >> X;
    cout << "Enter your income : ";
    cin >> Y;

    int minInvestment = X-Y ;

    cout << "The minimum amount to invest for tax exemption is: " << minInvestment << " rupees.\n";

    return 0;
}
