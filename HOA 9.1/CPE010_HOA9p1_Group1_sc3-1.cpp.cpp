#include <iostream>
#include "BST.h"

int main() {

    BinarySearchTree<int> tree(20);

    tree.insert(30);
    tree.insert(70);
    tree.insert(50);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);
    tree.insert(10);
    tree.insert(15);

    std::cout << "Pre-order search: ";
    tree.findData(1, 60);

    std::cout << "In-order search: ";
    tree.findData(2, 60);

    std::cout << "Post-order search: ";
    tree.findData(3, 60);

    return 0;
}