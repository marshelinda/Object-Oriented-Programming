#include <iostream>

// Define a structure to represent the Counter
struct Counter {
    int count; // member variable to hold the count
};

// Function to initialize the Counter
void initializeCounter(Counter& counter) {
    counter.count = 0; // Start the count at zero
}

// Function to increment the Counter
void increment(Counter& counter) {
    counter.count++; // Increase the count by 1
}

// Function to get the current count
int getCount(const Counter& counter) {
    return counter.count; // Return the current count
}

int main() {
    Counter myCounter; // Create a Counter variable

    // Initialize the counter
    initializeCounter(myCounter);

    // Increment the counter a few times
    increment(myCounter);
    increment(myCounter);
    increment(myCounter);

    // Menunggu pengguna menekan tombol Enter sebelum menampilkan hasil
    std::cout << "Press Enter to see the current count...\n";
    std::cin.ignore();  // Mengabaikan karakter newline yang tersisa
    std::cin.get();     // Menunggu pengguna menekan Enter

    // Get and display the current count
    std::cout << "Current count: " << getCount(myCounter) << std::endl;

    return 0;
}