#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of movies: ";
    cin >> n;

    int movielength[n], movierating[n], movieproduct[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter the details of movie " << i + 1 << ":\n";
        cout << "Length: ";
        cin >> movielength[i];
        cout << "Rating: ";
        cin >> movierating[i];
        movieproduct[i] = movielength[i] * movierating[i];
    }

    int maxproduct = 0;
    for (int i = 1; i < n; i++) {
        if (movieproduct[i] > movieproduct[maxproduct]) {
            maxproduct = i;
        }
    }

    cout << "\nMovie with the highest product of length and rating:\n";
    cout << "Movie " << maxproduct + 1 << " - Length: " << movielength[maxproduct]
         << ", Rating: " << movierating[maxproduct]
         << ", Product: " << movieproduct[maxproduct] << endl;

    return 0;
}
