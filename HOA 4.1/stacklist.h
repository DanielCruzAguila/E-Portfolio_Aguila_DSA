//Aguila, Daniel C. CPE21S1
#ifndef STACK_LIST_H
#define STACK_LIST_H

//class node that contains data and the next
template <typename T>
class Node{
    public:
    T data;     //VALUE THAT WE NEED STORE
    Node* next; //POINTER TO THE NEXT NODE
};

//global pointer for the top of the stack
template <typename T>
Node<T> *head = nullptr;
//operations for the stack


//push
template <typename T>
void push(T newData){
    //create a new node and assign the newData
    Node<T>* newNode = new Node<T>;
    newNode->data = newData;

    //newnode points to current top, then becomes the new top
    newNode->next = head<T>;
    head<T> = newNode;
}

//pop
template<typename T>
T pop(){
    //check if the stack is empty;
    if(head<T> == nullptr){
        std::cout << "Stack Overflow. "<< std::endl;
    }

    //save the current top node
    Node<T>* temp = head<T>;
    //store its data
    T temVal = temp->data;
    //move the head to the next node
    head<T> = head<T>->next;
    //free the removed node
    delete temp;
    //return the removed value
    return temVal;
}

//top
template<typename T>
void Top(){
    //error catching
    if(head<T> == nullptr){
        std::cout<<"Stack undeflow "<<std::endl;
        return;
    }
    //display the Top node
    std::cout<<"Top of Stack: "<<head<T>->data <<std::endl;
}

//isEmpty
template<typename T>
bool isEmpty(){
    return head <T> == nullptr;
}

// displayAll
template <typename T>
void displayAll() {
    if (head<T> == nullptr) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }
    Node<T>* temp = head<T>;
    while (temp != nullptr) {
        std::cout << temp->data << "\n";
        temp = temp->next;
    }
    std::cout << std::endl;
}

#endif