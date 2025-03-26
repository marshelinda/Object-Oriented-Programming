#include <iostream>
#include <cmath> // Untuk sqrt dan pow

class Point {
private:
    double x; // Koordinat x
    double y; // Koordinat y

public:
    // Konstruktor default
    Point() : x(0), y(0) {}

    // Konstruktor dengan parameter
    Point(double x, double y) : x(x), y(y) {}

    // Metode untuk menghitung jarak dari titik asal (0, 0)
    double distanceFromOrigin() const {
        return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
    }

    // Getter untuk koordinat x
    double getX() const {
        return x;
    }

    // Getter untuk koordinat y
    double getY() const {
        return y;
    }

    // Metode untuk menampilkan koordinat titik
    void displayPoint() const {
        std::cout << "Titik(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    // Membuat instance dari kelas Point menggunakan konstruktor default
    Point p1;
    p1.displayPoint();
    std::cout << "Jarak dari Titik Asal: " << p1.distanceFromOrigin() << std::endl;

    // Menunggu input pengguna sebelum menampilkan titik selanjutnya
    std::cout << "Tekan Enter untuk melanjutkan..." << std::endl;
    std::cin.get(); // Menunggu tekanan tombol Enter

    // Membuat instance dari kelas Point menggunakan konstruktor parameter
    Point p2(3, 4);
    p2.displayPoint();
    std::cout << "Jarak dari Titik Asal: " << p2.distanceFromOrigin() << std::endl;

    return 0;
}