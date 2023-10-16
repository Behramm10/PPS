#include <iostream>
using namespace std;
int main() {
  // Get the number of years to print.
  int n;
  cout << "Enter the number of years to print: ";
  cin >> n;
  // Iterate through the years from 1 to n.
  for (int i = 1; i <= n; i++) {
    // Check if the year is a leap year.
    if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
      // Print the year.
      cout << i << endl;
    }
  }
  return 0;
}
