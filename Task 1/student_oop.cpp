#include <iostream>
#include <string>
#include <limits> // Untuk std::numeric_limits

class Student {
private:
    std::string name; // Menyimpan nama siswa
    int id;           // Menyimpan ID siswa
    char grade;       // Menyimpan grade siswa

public:
    // Constructor yang tidak menerima argumen
    Student() : id(0), grade('F') {} // Inisialisasi ID dan grade default

    // Metode untuk menginput informasi siswa
    void inputInfo() {
        std::cout << "Masukkan Nama: ";
        std::getline(std::cin, name); // Mengambil nama dari input
        std::cout << "Masukkan ID: ";
        std::cin >> id; // Mengambil ID dari input
        std::cout << "Masukkan Grade: ";
        std::cin >> grade; // Mengambil grade dari input

        // Membersihkan buffer input setelah membaca integer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Getter untuk nama
    std::string getName() const {
        return name;
    }

    // Getter untuk ID
    int getID() const {
        return id;
    }

    // Getter untuk grade
    char getGrade() const {
        return grade;
    }

    // Metode untuk menampilkan informasi siswa
    void displayInfo() const {
        std::cout << "Nama: " << name << ", ID: " << id << ", Grade: " << grade << std::endl;
    }
};

int main() {
    // Membuat instance dari kelas Student
    Student student1;

    // Menginput informasi siswa
    student1.inputInfo();

    // Menampilkan informasi siswa yang telah dimasukkan
    student1.displayInfo();

    return 0;
}