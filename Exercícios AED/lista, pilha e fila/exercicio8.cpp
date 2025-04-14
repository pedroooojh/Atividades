#include <iostream>
#include <cstdlib>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void decimalToBinary(int num) {
    int stack[MAX_SIZE];
    int top = -1;

    while (num > 0) {
        stack[++top] = num % 2;
        num /= 2;
    }

    while (top != -1) {
        std::cout << stack[top--];
    }
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
    decimalToBinary(10);
    std::cout << std::endl;
    decimalToBinary(25);
    std::cout << std::endl;
    return 0;
}