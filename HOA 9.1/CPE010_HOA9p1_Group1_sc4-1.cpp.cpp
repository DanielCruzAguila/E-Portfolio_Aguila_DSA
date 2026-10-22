#include <iostream>
#include "BST.h"

int main() {

    BinarySearchTree<char> tree('A');

    tree.insert('B');
    tree.insert('C');
    tree.insert('D');
    tree.insert('E');
    tree.insert('F');
    tree.insert('G');
    tree.insert('H');

    // Add O as a new leaf node
    tree.insert('O');

    std::cout << "Pre-order search: ";
    tree.findData(1, 'O');

    std::cout << "In-order search: ";
    tree.findData(2, 'O');

    std::cout << "Post-order search: ";
    tree.findData(3, 'O');

    return 0;
}