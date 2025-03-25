#include <iostream>

class Counter {
private:
    int count; // private member variable to hold the count

public:
    // Constructor to initialize the count to zero
    Counter() : count(0) {}

    // Method to increment the count
    void increment() {
        count++;
    }

    // Method to get the current count
    int getCount() const {
        return count;
    }
};

int main() {
    Counter myCounter; // Create an instance of the Counter class

    // Increment the counter a few times
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();

    // Prompt the user to press Enter before displaying the count
    std::cout << "Tekan Enter untuk melihat jumlah saat ini..." << std::endl;
    std::cin.ignore(); // Wait for user input (press Enter)

    // Get and display the current count
    std::cout << "Current count: " << myCounter.getCount() << std::endl;

    return 0;
}