// Aguila, Daniel C. CPE21S1
#include <iostream>   // Header File Declaration Section

// Global Declaration Section
double calculateDistance(double x1, double y1, double x2, double y2);   
double mySqrt(double value);   

// Class Declaration and Method Definition Section
double calculateDistance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double sum = dx * dx + dy * dy;
    return mySqrt(sum);   
}

// Method Definition Section
double mySqrt(double value) {
    double approx = value;
    double better = 0.5 * (approx + value / approx);

    for (int i = 0; i < 10; i++) {
        approx = better;
        better = 0.5 * (approx + value / approx);
    }
    return better;
}

// Main Function Section
int main() {
    double x1, y1, x2, y2;

    std::cout << "Enter x1: ";
    std::cin >> x1;
    std::cout << "Enter y1: ";
    std::cin >> y1;

    std::cout << "Enter x2: ";
    std::cin >> x2;
    std::cout << "Enter y2: ";
    std::cin >> y2;

    double distance = calculateDistance(x1, y1, x2, y2);

    std::cout << "Distance between points (" << x1 << ", " << y1 << ") and ("
              << x2 << ", " << y2 << ") = " << distance << std::endl;

    return 0;
}
