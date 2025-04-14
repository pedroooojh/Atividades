#include <iostream>
#include <cstdlib>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

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
    push(10);
    push(20);
    std::cout << getTop() << std::endl;
    pop();
    std::cout << getTop() << std::endl;
    return 0;
}