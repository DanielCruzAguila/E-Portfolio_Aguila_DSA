// Aguila, Daniel C. CPE21S1
#include <iostream>

void sumOfTwoNum(int fNum, int lNum);

int main() {

    sumOfTwoNum(10, 13);

    return 0;
}

void sumOfTwoNum(int fNum, int lNum) {

    int total = fNum + lNum;

    std::cout << "void output: " << total << std::endl;
}