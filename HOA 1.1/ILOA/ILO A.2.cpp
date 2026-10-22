// Aguila, Daniel C. CPE21S1
#include <iostream>

int a, b;

int NumResult (int a, int b);

int main(){
    
    std::cout << "Enter Your First Number: ";
    std::cin >> a;

    std::cout << "Enter Your Second Number: ";
    std::cin >> b;

    if(a>b){
        std::cout<< a << " is greater than " << b << std::endl;
    }else if(a<b){
        std::cout<< a << " is less than " << b << std::endl;
    }

    return 0;
}