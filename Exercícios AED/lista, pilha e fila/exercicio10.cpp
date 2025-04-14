#include <iostream>
#include <cstdlib>

#define MAX_SIZE 5

int circularQueue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1 && rear == -1;
}

bool isFull() {
    return (rear + 1) % MAX_SIZE == front;
}

void enqueue(int value) {
    if (isFull()) {
        std::cout << "Queue is full. Cannot enqueue " << value << std::endl;
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX_SIZE;
    }
    circularQueue[rear] = value;
    std::cout << "Enqueued " << value << " successfully" << std::endl;
}

void dequeue() {
    if (isEmpty()) {
        std::cout << "Queue is empty. Cannot dequeue" << std::endl;
        return;
    }
    std::cout << "Dequeued " << circularQueue[front] << " successfully" << std::endl;
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
}

int getFront() {
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
        return -1;
    }
    return circularQueue[front];
}

void displayQueue() {
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
        return;
    }
    
    std::cout << "Queue elements: ";
    int i = front;
    while (true) {
        std::cout << circularQueue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX_SIZE;
    }
    std::cout << std::endl;
}

int main() {
    int choice, value;
    
    while (true) {
        std::cout << "\n1. Enqueue\n2. Dequeue\n3. Get Front\n4. Display Queue\n5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                std::cout << "Enter value to enqueue: ";
                std::cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                value = getFront();
                if (value != -1) {
                    std::cout << "Front element: " << value << std::endl;
                }
                break;
            case 4:
                displayQueue();
                break;
            case 5:
                exit(0);
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    }
    
    return 0;
}