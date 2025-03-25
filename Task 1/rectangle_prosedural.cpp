#include <iostream>

// Fungsi untuk menghitung area
double calculateArea(double length, double width) {
    return length * width;
}

// Fungsi untuk menampilkan dimensi
void displayDimensions(double length, double width) {
    std::cout << "Length: " << length << ", Width: " << width << std::endl;
}

int main() {
    double length, width;

    // Mengambil input dari pengguna untuk panjang dan lebar
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    // Menampilkan dimensi
    displayDimensions(length, width);

    // Menghitung dan menampilkan area
    double area = calculateArea(length, width);
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}