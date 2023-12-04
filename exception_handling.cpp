#include <iostream>
#include <iomanip>
#include <stdexcept>

double calculateAverage(double num1, double num2, double num3, double num4, double num5) {
    return (num1 + num2 + num3 + num4 + num5) / 5.0;
}

int main() {
    try {
        double num1, num2, num3, num4, num5;

        // Input
        std::cout << "Enter five numbers: ";
        std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

        // Check for invalid input (non-numeric values)
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter numeric values.");
        }

        // Calculate average
        double average = calculateAverage(num1, num2, num3, num4, num5);

        // Output result
        std::cout << "Average: " << std::fixed << std::setprecision(2) << average << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; // Return a non-zero value to indicate an error
    }

    return 0;
}
