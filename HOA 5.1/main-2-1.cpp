//Aguila, Daniel C. CPE21S1
#include <iostream>
#include <queue>

void display(std::queue<char> r);

int main(){

    std::queue<char> q;

    q.push('c');
    q.push('p');
    q.push('e');
    q.push('0');
    q.push('1');
    q.push('0');

    //display
    display(q);
    //empty()
    std::cout<<"Is the queue empty? "<<q.empty() << std::endl;
    //size()
    std::cout<<"What is the size? "<<q.size() << std::endl;
    //front
    std::cout<<"The front of this queue is: "<<q.front() << std::endl;
    //back
    std::cout<<"The back of this queue is: "<<q.back() << std::endl;
    //pop
    std::cout<<"Popping out: "<<q.front() << std::endl;
    q.pop();
    //display
    display(q);
    //push another element
    q.push('o');
    std::cout<<"After pushing an element: "<< std::endl;
    //display
    display(q);
}

void display(std::queue<char> r){
    //create a copy of the queue
    std::queue<char> c = r;

    while(!c.empty()){
        std::cout<<" "<<c.front();
        c.pop();
    }
    std::cout<<"\n";

}