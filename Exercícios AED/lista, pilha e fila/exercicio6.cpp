#include <iostream>
#include <cstdlib>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

bool isBalanced(const char* exp) {
    int top = -1;
    char stack[MAX_SIZE];

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            stack[++top] = '(';
        } else if (exp[i] == ')') {
            if (top == -1) return false;
            top--;
        }
    }
    return top == -1;
}

bool isEmpty() {
    return top == -1;
}

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        std::cout << "Stack overflow" << std::endl;
        return;
    }
    stack[++top] = value;
}

void pop() {
    if (isEmpty()) {
        std::cout << "Stack underflow" << std::endl;
        return;
    }
    top--;
}

int getTop() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }
    return stack[top];
}

int main() {
    const char* exp1 = "(())()";
    const char* exp2 = "(()";
    std::cout << (isBalanced(exp1) ? "Válido" : "Inválido") << std::endl;
    std::cout << (isBalanced(exp2) ? "Válido" : "Inválido") << std::endl;
    return 0;
}