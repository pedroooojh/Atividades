#include <iostream>
#include <cstdlib>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1 && rear == -1;
}

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        std::cout << "Queue overflow" << std::endl;
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = value;
}

void dequeue() {
    if (isEmpty()) {
        std::cout << "Queue underflow" << std::endl;
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

int getFront() {
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
        return -1;
    }
    return queue[front];
}

int main() {
    enqueue(10);
    enqueue(20);
    std::cout << getFront() << std::endl;
    dequeue();
    std::cout << getFront() << std::endl;
    return 0;
}