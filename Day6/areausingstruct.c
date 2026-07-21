//program to create a structure which can calculate area perimenter of rectangle 
#include <stdio.h>
struct Rectangle {
    float Length;
    float Breadth;
};
struct Rectangle createRectangle(float length, float breadth) {
    struct Rectangle rect;
    rect.Length = length;
    rect.Breadth = breadth;
    return rect;
}
float area(struct Rectangle rect) {
    return rect.Length * rect.Breadth;
}
float perimeter(struct Rectangle rect) {
    return 2 * (rect.Length + rect.Breadth);
}
int main() {
    struct Rectangle rect = createRectangle(5.0, 3.0);
    printf("Length: %.2f\n", rect.Length);
    printf("Breadth: %.2f\n", rect.Breadth);
    printf("Area: %.2f\n", area(rect));
    printf("Perimeter: %.2f\n", perimeter(rect));
    return 0;
}
