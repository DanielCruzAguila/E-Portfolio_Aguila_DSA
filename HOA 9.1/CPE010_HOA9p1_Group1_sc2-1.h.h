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

    void preOrder(Node* node) {
        if (node != nullptr) {
            std::cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    void inOrder(Node* node) {
        if (node != nullptr) {
            inOrder(node->left);
            std::cout << node->data << " ";
            inOrder(node->right);
        }
    }

    void postOrder(Node* node) {
        if (node != nullptr) {
            postOrder(node->left);
            postOrder(node->right);
            std::cout << node->data << " ";
        }
    }

public:
    BinarySearchTree(T value) {
        root = new Node(value);
    }

    void insert(T value) {
        insert(root, value);
    }

    void preOrder() {
        preOrder(root);
        std::cout << std::endl;
    }

    void inOrder() {
        inOrder(root);
        std::cout << std::endl;
    }

    void postOrder() {
        postOrder(root);
        std::cout << std::endl;
    }
};

#endif