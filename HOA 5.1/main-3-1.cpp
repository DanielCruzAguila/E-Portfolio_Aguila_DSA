//Aguila, Daniel C. CPE21S1
#include <iostream>
#include "queuell.h"

int main() {
    qNode<char>* frontNode = nullptr;  // renamed to avoid conflict
    qNode<char>* backNode = nullptr;

    enqueue(&frontNode, &backNode, 'D');
    std::cout << frontNode->data << " " << backNode->data << std::endl;

    enqueue(&frontNode, &backNode, 'A');
    std::cout << frontNode->data << " " << backNode->data << std::endl;

    enqueue(&frontNode, &backNode, 'N');
    std::cout << frontNode->data << " " << backNode->data << std::endl;

    display(frontNode);
    std::cout << "Front element: " << getFront(frontNode) << std::endl;

    dequeue(&frontNode, &backNode);
    std::cout << frontNode->data << " " << backNode->data << std::endl;

    display(frontNode);

    return 0;
}
