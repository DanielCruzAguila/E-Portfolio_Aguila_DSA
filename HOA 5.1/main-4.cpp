//Aguila, Daniel C. CPE21S1
#include <iostream>
#include "suppQueue.h"

int main(){
    Printer myPrinter;

    std::cout << "Adding jobs to the queue..." << std::endl;
    myPrinter.addJob(Job(1, "Daniel Aguila", 5));
    myPrinter.addJob(Job(2, "Megan Lee", 10));

    std::cout <<"\nProcessing jobs in the queue..." << std::endl;
    myPrinter.processJob();

    std::cout <<"\n Adding more jobs to the queue..." << std::endl;
    myPrinter.addJob(Job(3, "Peter Parker", 15));
    myPrinter.addJob(Job(4, "Dr Doom", 20));

    std::cout <<"\nProcessing remaining jobs in the queue..." << std::endl;
    myPrinter.processAllJobs();

    std::cout <<"\nProcessing remaining jobs in the queue..." << std::endl;
    myPrinter.processAllJobs();


    return 0;
}