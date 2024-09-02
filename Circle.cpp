//No 4.
#include <iostream>
#include <cmath>

using namespace std;

class Circle {
public:
    double getArea(double side) {
        // Area of a square
        return 10 * side * side;
    }

    double getArea(double radius, bool isCircle) {
        // Area of a circle
        if (isCircle)
            return 5 * M_PI * radius * radius;
        else
            return 0; // Return 0 if not a circle
    }
};

int main() {
    Circle circle;

    // Calculate and display the sum of areas of squares
    double side;
    cout << "Enter the side of the square: ";
    cin >> side;
    double sumOfSquareAreas = circle.getArea(side);
    cout << "Sum of areas of squares: " << sumOfSquareAreas << endl;

    // Calculate and display the sum of areas of circles
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double sumOfCircleAreas = circle.getArea(radius, true);
    cout << "Sum of areas of circles: " << sumOfCircleAreas << endl;

    return 0;
}

