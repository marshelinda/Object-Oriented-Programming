#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    // Konstruktor untuk inisialisasi angka
    Calculator(double n1, double n2) : num1(n1), num2(n2) {}

    // Metode untuk melakukan penjumlahan
    double add() {
        return num1 + num2;
    }

    // Metode untuk melakukan pengurangan
    double subtract() {
        return num1 - num2;
    }

    // Metode untuk melakukan perkalian
    double multiply() {
        return num1 * num2;
    }

    // Metode untuk melakukan pembagian
    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0; // Mengembalikan 0 sebagai nilai error
        }
    }
};

int main() {
    double number1, number2;

    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;

    // Membuat objek Calculator
    Calculator calc(number1, number2);

    // Melakukan operasi
    std::cout << "Addition: " << calc.add() << std::endl;
    std::cout << "Subtraction: " << calc.subtract() << std::endl;
    std::cout << "Multiplication: " << calc.multiply() << std::endl;
    std::cout << "Division: " << calc.divide() << std::endl;

    return 0;
}