// Aguila, Daniel C. CPE21S1
#include <iostream>

bool logicalOperations(bool a, bool b) {
    std::cout << "\nLogical Operations:\n";
    std::cout << "a && b = " << (a && b) << std::endl;
    std::cout << "a  b = " << (a || b) << std::endl;
    std::cout << "!a = " << (!a) << std::endl;
    std::cout << "!b = " << (!b) << std::endl;

    return true;
}

int main() {
    bool firstBoolean, secondBoolean;

    std::cout << "Enter your first Boolean (0 for false, 1 for true): ";
    std::cin >> firstBoolean;

    std::cout << "Enter your second Boolean (0 for false, 1 for true): ";
    std::cin >> secondBoolean;

    if (logicalOperations(firstBoolean, secondBoolean)) {
        std::cout << "\nFunction executed successfully!" << std::endl;
    }
    return 0;
}