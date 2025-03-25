#include <iostream>
#include <stdexcept> // Untuk std::runtime_error

// Fungsi untuk melakukan penjumlahan
double add(double num1, double num2) {
    return num1 + num2;
}

// Fungsi untuk melakukan pengurangan
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Fungsi untuk melakukan perkalian
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Fungsi untuk melakukan pembagian
double divide(double num1, double num2) {
    if (num2 == 0) {
        throw std::runtime_error("Error: Division by zero!");
    }
    return num1 / num2;
}

int main() {
    double number1, number2;

    // Mengambil input dari pengguna
    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;

    // Melakukan operasi aritmetika dan menampilkan hasil
    std::cout << "Addition: " << add(number1, number2) << std::endl;
    std::cout << "Subtraction: " << subtract(number1, number2) << std::endl;
    std::cout << "Multiplication: " << multiply(number1, number2) << std::endl;

    try {
        std::cout << "Division: " << divide(number1, number2) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl; // Menangani pembagian dengan nol
    }

    return 0;
}