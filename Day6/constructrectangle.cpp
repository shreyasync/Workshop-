#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    // Object created, constructor is called automatically
    Rectangle rect(l, w);

    cout << "Area = " << rect.area() << endl;
    cout << "Perimeter = " << rect.perimeter() << endl;

    return 0;
}
