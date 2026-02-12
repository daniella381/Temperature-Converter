#include <iostream>

int main() {
    double celsius, fahrenheit;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    std::cout << celsius << "°C is equal to " << fahrenheit << "°F" << std::endl;

    if (celsius < 0) {
        std::cout << "Freezing!" << std::endl;
    } else if (celsius > 30) {
        std::cout << "Hot!" << std::endl;
    }

    return 0;
}
