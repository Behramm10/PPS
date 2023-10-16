#include <iostream>
using namespace std;
int main() {
  // Get the number from the user.
  int n;
  cout << "Enter a number: ";
  cin >> n;
  // Check if the number is prime.
  bool isPrime = true;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }
  // Print the result.
  if (isPrime) {
    cout << n << " is prime." << endl;
  } else {
    cout << n << " is not prime." << endl;
  }
  return 0;
}

