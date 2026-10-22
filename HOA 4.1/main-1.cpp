//Aguila, Daniel C. CPE21S1
#include <iostream>
#include "stacklist.h"

int main(){

    std::cout<< "------ PUSHING 'c' 'p' 'e' ONTO THE STACK ------ \n";
    
    //push
    push('c');
    push('p');
    push('e');

    //display the current top
    Top<char>(); // Top shpuld be 'e'
    displayAll<char>();
    std::cout << std::endl;

    std::cout<<"\n ------ Popping all the elements ------- \n";

    while(!isEmpty<char>()){
        std::cout<<" Popped:"<< pop<char>() <<std::endl;
    }

    std::cout<<"\n ------ Testing the Underflow ------ \n";
    pop<char>();

    return 0;
}