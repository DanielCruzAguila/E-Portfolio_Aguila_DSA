#ifndef BST_H
#define BST_H

#include <iostream>

template <typename T>
class BinarySearchTree {

private:
    struct Node {
        T data;
        Node* left;
        Node* right;

        Node(T value) {
            data = value;
            left = nullptr;
            right = nullptr;
        }
    };

    Node* root;

    void insert(Node*& node, T value) {
        if (node == nullptr) {
            node = new Node(value);
        }
        else if (value < node->data) {
            insert(node->left, value);
        }
        else {
            insert(node->right, value);
        }
    }

    bool findPreOrder(Node* node, T key) {
        if (node == nullptr)
            return false;

        if (node->data == key)
            return true;

        if (findPreOrder(node->left, key))
            return true;

        return findPreOrder(node->right, key);
    }

    bool findInOrder(Node* node, T key) {
        if (node == nullptr)
            return false;

        if (findInOrder(node->left, key))
            return true;

        if (node->data == key)
            return true;

        return findInOrder(node->right, key);
    }

    bool findPostOrder(Node* node, T key) {
        if (node == nullptr)
            return false;

        if (findPostOrder(node->left, key))
            return true;

        if (findPostOrder(node->right, key))
            return true;

        if (node->data == key)
            return true;

        return false;
    }

public:
    BinarySearchTree(T value) {
        root = new Node(value);
    }

    void insert(T value) {
        insert(root, value);
    }

    void findData(int choice, T key) {

        bool found = false;

        if (choice == 1) {
            found = findPreOrder(root, key);
        }
        else if (choice == 2) {
            found = findInOrder(root, key);
        }
        else if (choice == 3) {
            found = findPostOrder(root, key);
        }

        if (found) {
            std::cout << key << " was found." << std::endl;
        }
    }
};

#endif