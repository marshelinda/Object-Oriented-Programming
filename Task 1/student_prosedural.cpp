#include <iostream>
#include <limits>  // Header yang diperlukan
#include <string>

struct Student {
    std::string name;
    int id;
    char grade;
};

void inputStudentInfo(Student &student) {
    std::cout << "Enter student name: ";
    std::getline(std::cin, student.name);
    
    std::cout << "Enter student ID: ";
    std::cin >> student.id;

    std::cin.ignore();  // Membersihkan newline dari buffer

    std::cout << "Enter student grade: ";
    std::cin >> student.grade;

    // Bersihkan input buffer setelah membaca grade
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void displayStudentInfo(const Student &student) {
    std::cout << "Name: " << student.name << ", ID: "
              << student.id << ", Grade: " << student.grade << std::endl;
}

int main() {
    Student student1;

    // Input informasi siswa
    inputStudentInfo(student1);

    // Tampilkan informasi siswa
    displayStudentInfo(student1);

    return 0;
}