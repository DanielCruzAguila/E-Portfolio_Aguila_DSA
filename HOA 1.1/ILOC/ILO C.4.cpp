// Aguila, Daniel C. CPE21S1
#include <iostream>   // Header File Declaration Section

// Global Declaration Section
class Triangle;   

// Class Declaration and Method Definition Section
class Triangle {
private:
    double sideA, sideB, sideC;

public:
    Triangle(double A, double B, double C);
    void setSides(double A, double B, double C);
    double computeArea();
    double computePerimeter();
    std::string determineType();
    const bool validateTriangle();
};

// Method Definition Section
Triangle::Triangle(double A, double B, double C) {
    sideA = A;
    sideB = B;
    sideC = C;
}

void Triangle::setSides(double A, double B, double C) {
    sideA = A;
    sideB = B;
    sideC = C;
}

double Triangle::computeArea() {
    double s = (sideA + sideB + sideC) / 2.0;
    double area = s * (s - sideA) * (s - sideB) * (s - sideC);

    double approx = area;
    double better = 0.5 * (approx + area / approx);
    for (int i = 0; i < 10; i++) {
        approx = better;
        better = 0.5 * (approx + area / approx);
    }
    return better;
}

double Triangle::computePerimeter() {
    return sideA + sideB + sideC;
}

std::string Triangle::determineType() {
    double a2 = sideA * sideA;
    double b2 = sideB * sideB;
    double c2 = sideC * sideC;

    if (sideA >= sideB && sideA >= sideC) {
        if (a2 == b2 + c2) return "Right-angled";
        else if (a2 > b2 + c2) return "Obtuse-angled";
        else return "Acute-angled";
    } else if (sideB >= sideA && sideB >= sideC) {
        if (b2 == a2 + c2) return "Right-angled";
        else if (b2 > a2 + c2) return "Obtuse-angled";
        else return "Acute-angled";
    } else {
        if (c2 == a2 + b2) return "Right-angled";
        else if (c2 > a2 + b2) return "Obtuse-angled";
        else return "Acute-angled";
    }
}

const bool Triangle::validateTriangle() {
    return (sideA + sideB > sideC &&
            sideA + sideC > sideB &&
            sideB + sideC > sideA);
}

// Main Function Section
int main() {
    Triangle tri(3, 4, 5);

    if (tri.validateTriangle()) {
        std::cout << "Perimeter: " << tri.computePerimeter() << std::endl;
        std::cout << "Area: " << tri.computeArea() << std::endl;
        std::cout << "Type: " << tri.determineType() << std::endl;
    } else {
        std::cout << "Invalid triangle!" << std::endl;
    }

    return 0;
}
