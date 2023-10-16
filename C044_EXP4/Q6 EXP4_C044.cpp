#include <iostream>
using namespace std;
int main() {
    int n;// input
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;// Initialize
    while (n > 0) {// Iterate
    int digit = n % 10;
    sum += digit;  // Formula
    n /= 10;
  }
  cout << "The sum of digits is " << sum << endl;// Print
  return 0;
}
