#include <iostream>

class Counter {
private:
    int count; // variabel anggota privat untuk menyimpan jumlah

public:
    // Konstruktor untuk menginisialisasi jumlah ke nol
    Counter() : count(0) {}

    // Metode untuk meningkatkan jumlah
    void increment() {
        count++;
    }

    // Metode untuk mendapatkan jumlah saat ini
    int getCount() const {
        return count;
    }
};

int main() {
    Counter myCounter; // Membuat sebuah instance dari kelas Counter

    // Meningkatkan jumlah beberapa kali
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();

    // Meminta pengguna untuk menekan Enter sebelum menampilkan jumlah
    std::cout << "Tekan Enter untuk melihat jumlah saat ini..." << std::endl;
    std::cin.ignore(); // Menunggu input pengguna (tekan Enter)

    // Mengambil dan menampilkan jumlah saat ini
    std::cout << "Jumlah saat ini: " << myCounter.getCount() << std::endl;

    return 0;
}