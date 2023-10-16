#include <iostream>
using namespace std;

struct Tablet {
    int width;
    int height;
    int price;
};

int main() {
    int Num, Budget;
    cout << "Enter Number of Tablets: ";
    cin >> Num;
    cout << "Enter Budget: ";
    cin >> Budget;

    Tablet maxAreaTablet; // Initialize a tablet to track the one with max area
    maxAreaTablet.width = maxAreaTablet.height = maxAreaTablet.price = 0; // Initialize to 0

    Tablet tablets[100]; // Assuming there are at most 100 tablets
    for (int i = 0; i < Num; ++i) {
        cout << "Enter width, height, and price for tablet " << i + 1 << ": ";
        cin >> tablets[i].width >> tablets[i].height >> tablets[i].price;

        if (tablets[i].price <= Budget) {
            int area = tablets[i].width * tablets[i].height;
            int maxArea = maxAreaTablet.width * maxAreaTablet.height;

            if (area > maxArea) {
                maxAreaTablet = tablets[i];
            }
        }
    }

    if (maxAreaTablet.width == 0 && maxAreaTablet.height == 0 && maxAreaTablet.price == 0) {
        cout << "No tablet" << endl;
    } else {
        cout << "Tablet with max area within budget: Width = " << maxAreaTablet.width
             << ", Height = " << maxAreaTablet.height << ", Price = " << maxAreaTablet.price << endl;
    }

    return 0;
}
