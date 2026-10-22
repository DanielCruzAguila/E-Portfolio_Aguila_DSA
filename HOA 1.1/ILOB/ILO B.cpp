// Aguila, Daniel C. CPE21S1
#include <iostream>   // Header File Declaration Section

// Global Declaration Section
class Triangle {
private:
    double totalAngle, angleA, angleB, angleC;

public:
    Triangle(double A, double B, double C);  
    void setAngles(double A, double B, double C);   
    const bool validateTriangle();   
};

// Method Definition Section
Triangle::Triangle(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

const bool Triangle::validateTriangle() {
    return (totalAngle <= 180);
}

// Main Function Section
int main() {
    Triangle set1(40, 30, 110);

    if (set1.validateTriangle()) {
        std::cout << "The shape is a valid triangle.\n";
    } else {
        std::cout << "The shape is NOT a valid triangle.\n";
    }

    return 0;
}
