#include <iostream>

class Rectangle {
private:
    double length; // Panjang
    double width;  // Lebar

public:
    // Konstruktor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Fungsi untuk menghitung area
    double area() const {
        return length * width;
    }

    // Fungsi untuk menampilkan dimensi
    void displayDimensions() const {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    double length, width;

    // Mengambil input dari pengguna untuk panjang dan lebar
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    // Membuat objek Rectangle
    Rectangle rect(length, width);

    // Menampilkan dimensi dan menghitung serta menampilkan area
    rect.displayDimensions();
    std::cout << "Area of the rectangle: " << rect.area() << std::endl;

    return 0;
}