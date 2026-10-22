// Aguila, Daniel C. CPE21S1
#include <iostream>
#include <string>

const int maxCap = 100;
char stack[maxCap];
int top = -1;

bool isEmpty() { return top == -1; }
bool isFull(int maxSize) { return top == maxSize - 1; }

void push(char c, int maxSize) {
    if (isFull(maxSize)) {
        std::cout << "Stack overflow.\n";
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (isEmpty()) {
        std::cout << "Stack underflow.\n";
        return '\0';
    }
    return stack[top--];
}

bool areSymbolsBalanced(const std::string& expr, int maxSize) {
    for (char c : expr) {
        if (c == '(' || c == '[' || c == '{') {
            push(c, maxSize);
        } else if (c == ')' || c == ']' || c == '}') {
            if (isEmpty()) return false;
            char topChar = pop();
            if ((c == ')' && topChar != '(') ||
                (c == ']' && topChar != '[') ||
                (c == '}' && topChar != '{')) {
                return false;
            }
        }
    }
    return isEmpty();
}

int main() {
    int maxSize;
    std::cout << "Enter maximum stack size: ";
    std::cin >> maxSize;

    std::string expr;
    std::cout << "Enter an expression: ";
    std::cin >> expr;

    if (areSymbolsBalanced(expr, maxSize)) {
        std::cout << "Symbols are balanced.\n";
    } else {
        std::cout << "Symbols are NOT balanced.\n";
    }

    return 0;
}
