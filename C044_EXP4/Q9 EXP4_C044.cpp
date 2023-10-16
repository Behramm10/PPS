#include <iostream>
using namespace std;
int main() {
  // Get the number from the user.
  int n;
  cout << "Enter a number: ";
  cin >> n;
  // Reverse the number.
  int reversed = 0;
  while (n > 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  // Check if the number is a palindrome.
  if (n == reversed) {
    cout << "The number is a palindrome." << endl;
  } else {
    cout << "The number is not a palindrome." << endl;
  }
  return 0;
}
