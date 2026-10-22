// Aguila, Daniel C. CPE21S1
#include <iostream>

const size_t maxCap = 100;
int stack[maxCap];
int top = -1;  
int maxSize;   
int newData;

void push();
void pop();
void Top();
bool isEmpty();
bool isFull();
void displayStack();

int main() {
    int choice;
    std::cout << "Enter the maximum number of elements for the stack: ";
    std::cin >> maxSize;

    while (true) {
        std::cout << "\nStack Operations Menu:\n";
        std::cout << " 1. PUSH\n 2. POP\n 3. TOP\n 4. isEMPTY\n 5. DISPLAY\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: push(); 
            break;
            case 2: pop(); 
            break;
            case 3: Top(); 
            break;
            case 4: std::cout << (isEmpty() ? "Stack is empty\n" : "Stack is not empty\n"); 
            break;
            case 5: displayStack(); 
            break;
            default: std::cout << "Invalid choice.\n"; 
            break;
        }
    }
    return 0;
}

bool isEmpty() {
    //create a condition to check whether the top element is equal to -1
    return (top == -1);
}

bool isFull() {
    //check if we reached the maximum capacity of the array;
    return (top == maxSize - 1);
}

void push() {
    //check if full -> if yes return an error
    if (isFull()) {
        std::cout << "Stack overflow.\n";
        return;
    }
    std::cout << "Enter new value to push: ";
    std::cin >> newData;
    // increment the top(indext by 1) then assign the new data;
    stack[++top] = newData;
    std::cout << newData << " pushed into stack.\n";
}

void Top() {
    //check if the stack is empty
    if (isEmpty()) {
        std::cout << "Stack underflow. No elements.\n";
        return;
    }
    std::cout << "Top element: " << stack[top] << std::endl;
}

void pop() {
    //check if the stack is empty
    if (isEmpty()) {
        std::cout << "Stack underflow. Nothing to pop.\n";
        return;
    }
    //display the top value
    std::cout << "Popping: " << stack[top] << std::endl;
    //decrement the top value from the stack
    top--;
}

//display all elements
void displayStack() {
    if (isEmpty()) {
        std::cout << "Stack is empty.\n";
        return;
    }
    std::cout << "Stack elements (top to bottom): ";
    for (int j = top; j >= 0; j--) {
        std::cout << stack[j] << " ";
    }
    std::cout << std::endl;
}