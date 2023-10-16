#include <iostream>
using namespace std;

int main() {
    int R;
    int examFee = 3500;
    int scholarshipPer= 0;

    cout << "Enter your rank in the Jethalal Scholarship Contest: ";
    cin >> R;

    if (R >= 1 && R <= 50) {
        scholarshipPer = 100;
    } else if (R >= 51 && R <= 100) {
        scholarshipPer = 50;
    }

    int scholarshipAmount = (scholarshipPer * examFee) / 100;

    cout << "You will get " << scholarshipPer << "% scholarship.\n";
    cout << "The scholarship amount you will receive is Rs. " << scholarshipAmount << endl;

    return 0;
}
