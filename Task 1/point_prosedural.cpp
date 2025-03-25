#include <iostream>
#include <cmath> // Untuk fungsi sqrt dan pow

// Struktur untuk merepresentasikan sebuah titik dalam 2D
struct Point {
    double x; // Koordinat x
    double y; // Koordinat y
};

// Fungsi untuk menghitung jarak dari titik ke asal (0, 0)
double distanceFromOrigin(const Point& point) {
    return std::sqrt(std::pow(point.x, 2) + std::pow(point.y, 2));
}

// Fungsi untuk menampilkan informasi titik
void displayPoint(const Point& point) {
    std::cout << "Point(" << point.x << ", " << point.y << ")" << std::endl;
}

int main() {
    // Membuat instance dari struktur Point
    Point p1; // Titik asal
    p1.x = 0;
    p1.y = 0;

    // Menampilkan titik asal dan jarak dari titik asal
    displayPoint(p1);
    std::cout << "Distance from Origin: " << distanceFromOrigin(p1) << std::endl;

    // Menunggu input pengguna sebelum melanjutkan
    std::cout << "Press Enter to continue..." << std::endl;
    std::cin.get(); // Tunggu input dari pengguna

    // Membuat titik lain dengan koordinat (3, 4)
    Point p2;
    p2.x = 3;
    p2.y = 4;

    // Menampilkan titik dan jarak dari titik asal
    displayPoint(p2);
    std::cout << "Distance from Origin: " << distanceFromOrigin(p2) << std::endl;

    return 0;
}