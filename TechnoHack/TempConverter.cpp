#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0/9.0;
}

int main() {
    int choice;
    double temperature;

    std::cout << "Temperature Conversion:" << std::endl;
    std::cout << "1. Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Celsius" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temperature;
        std::cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << std::endl;
    } else if (choice == 2) {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temperature;
        std::cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << std::endl;
    } else {
        std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}

