// Aguila, Daniel C. CPE21S1
#include <iostream>   // Header File Declaration Section

// Global Declaration Section
double kelvinToFahrenheit(double kelvin);  

// Class Declaration and Method Definition Section
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32;
}

// Main Function Section
int main() {
    double kelvin;

    std::cout << "Enter temperature in Kelvin: ";
    std::cin >> kelvin;

    double fahrenheit = kelvinToFahrenheit(kelvin);

    std::cout << kelvin << " K = " << fahrenheit << " °F" << std::endl;

    return 0;
}