#include <iostream>

// Mendefinisikan sebuah struktur untuk merepresentasikan Counter
struct Counter {
    int count; // variabel anggota untuk menyimpan hitungan
};

// Fungsi untuk menginisialisasi Counter
void initializeCounter(Counter& counter) {
    counter.count = 0; // Mulai hitungan pada nol
}

// Fungsi untuk meningkatkan Counter
void increment(Counter& counter) {
    counter.count++; // Meningkatkan hitungan sebanyak 1
}

// Fungsi untuk mendapatkan hitungan saat ini
int getCount(const Counter& counter) {
    return counter.count; // Mengembalikan hitungan saat ini
}

int main() {
    Counter myCounter; // Membuat variabel Counter

    // Menginisialisasi counter
    initializeCounter(myCounter);

    // Meningkatkan counter beberapa kali
    increment(myCounter);
    increment(myCounter);
    increment(myCounter);

    // Menunggu pengguna menekan tombol Enter sebelum menampilkan hasil
    std::cout << "Tekan Enter untuk melihat hitungan saat ini...\n";
    std::cin.ignore();  // Mengabaikan karakter newline yang tersisa
    std::cin.get();     // Menunggu pengguna menekan Enter

    // Mengambil dan menampilkan hitungan saat ini
    std::cout << "Hitungan saat ini: " << getCount(myCounter) << std::endl;

    return 0;
}