#include <iostream>
#include <cstdlib>
#include <string.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void reverseString(char* str) {
    int n = strlen(str);
    char stack[MAX_SIZE];
    int top = -1;

    for (int i = 0; i < n; i++) {
        stack[++top] = str[i];
    }

    for (int i = 0; i < n; i++) {
        str[i] = stack[top--];
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
    char str[] = "hello";
    reverseString(str);
    std::cout << str << std::endl;
    return 0;
}