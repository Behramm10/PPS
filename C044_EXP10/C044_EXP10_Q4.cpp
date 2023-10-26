
#include <iostream>

using namespace std;

class Rectangle {
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() {
        return length * width;
    }
};

class Box : public Rectangle {
private:
    double depth;

public:
    Box(double l, double w, double d) : Rectangle(l, w), depth(d) {}

    double volume() {
        return length * width * depth;
    }
};

int main() {
    double rectLength, rectWidth, boxLength, boxWidth, boxDepth;

    cout << "Enter the dimensions of the rectangle (length and width): ";
    cin >> rectLength >> rectWidth;

    cout << "Enter the dimensions of the box (length, width, and depth): ";
    cin >> boxLength >> boxWidth >> boxDepth;

    Rectangle rectangle(rectLength, rectWidth);
    Box box(boxLength, boxWidth, boxDepth);

    cout << "Area of the Rectangle: " << rectangle.area() << endl;
    cout << "Volume of the Box: " << box.volume() << endl;

    return 0;
}
