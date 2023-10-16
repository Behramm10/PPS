#include <iostream>
using namespace std;
void stringCopy(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    const int MAX_SIZE = 100;
    char source[MAX_SIZE];
    char destination[MAX_SIZE];

    cout << "Enter a string: ";
    cin.getline(source, MAX_SIZE);

    stringCopy(destination, source);

    cout << "Copied string: " << destination << endl;

    return 0;
}
