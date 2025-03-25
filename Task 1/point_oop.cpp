#include <iostream>
#include <cmath> // For sqrt and pow

class Point {
private:
    double x; // x coordinate
    double y; // y coordinate

public:
    // Default constructor
    Point() : x(0), y(0) {}

    // Constructor with parameters
    Point(double x, double y) : x(x), y(y) {}

    // Method to calculate distance from the origin (0, 0)
    double distanceFromOrigin() const {
        return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
    }

    // Getter for x coordinate
    double getX() const {
        return x;
    }

    // Getter for y coordinate
    double getY() const {
        return y;
    }

    // Method to display the point coordinates
    void displayPoint() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    // Create an instance of the Point class using the default constructor
    Point p1;
    p1.displayPoint();
    std::cout << "Distance from Origin: " << p1.distanceFromOrigin() << std::endl;

    // Wait for user input before showing the next point
    std::cout << "Press Enter to continue..." << std::endl;
    std::cin.get(); // Wait for Enter key press

    // Create an instance of the Point class using the parameterized constructor
    Point p2(3, 4);
    p2.displayPoint();
    std::cout << "Distance from Origin: " << p2.distanceFromOrigin() << std::endl;

    return 0;
}