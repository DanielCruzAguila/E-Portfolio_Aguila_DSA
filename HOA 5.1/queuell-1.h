//Aguila, Daniel C. CPE21S1 
#ifndef QUEUELL_H
#define QUEUELL_H

template <typename T>
class qNode {
    public:
    T data;
    qNode *next;
};

//creating a new node 
template <typename T>
qNode<T>* new_node(T newData) {
    qNode<T>* newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

template <typename T>
void enqueue(qNode<T>** frontPtr, qNode<T>** backPtr, T newData) {
    qNode<T>* newNode = new_node(newData);

    //inserting to an empty queue
    if((*frontPtr) == nullptr && (*backPtr) == nullptr) {
        (*frontPtr) = newNode;
        (*backPtr) = newNode;
    } 
        //inserting an item into a non-empty queue
        //point the backPtr next to the newNode
        (*backPtr)->next = newNode;
        (*backPtr) = newNode;
    }

template <typename T>
void dequeue(qNode<T>** frontPtr, qNode<T>** backPtr) {
    //create a temporary node to store the node to be deleted
    if((*frontPtr) == nullptr) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }

    qNode<T>* deleteNode = (*frontPtr);

    //check if the queue has only one node
    if((*frontPtr) == (*backPtr)) {
        (*frontPtr) = nullptr;
        (*backPtr) = nullptr;
    } 
        (*frontPtr) = deleteNode->next;

    delete deleteNode;
}

//display all elements in the list
template <typename T>
void display(qNode<T>* frontPtr) {
    if(frontPtr == nullptr) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }
    qNode<T>* temp = frontPtr;
    std::cout << "Queue elements: ";
    while(temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

//return the front variable
template <typename T>
T getFront(qNode<T>* frontPtr) {
    if(frontPtr == nullptr) {
        throw std::runtime_error("Queue is empty.");
    }
    return frontPtr->data;
}

#endif