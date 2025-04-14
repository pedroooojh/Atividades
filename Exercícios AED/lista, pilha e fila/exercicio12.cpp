#include <iostream>
#include <cstdlib>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int stack[MAX_SIZE];
int top = -1;

bool isQueueEmpty() {
    return front == -1 && rear == -1;
}

bool isQueueFull() {
    return rear == MAX_SIZE - 1;
}

void enqueue(int value) {
    if (isQueueFull()) {
        std::cout << "Erro: Fila cheia\n";
        return;
    }
    if (isQueueEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = value;
}

void dequeue() {
    if (isQueueEmpty()) {
        std::cout << "Erro: Fila vazia\n";
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

int getFront() {
    if (isQueueEmpty()) {
        std::cout << "Fila vazia\n";
        return -1;
    }
    return queue[front];
}

void displayQueue() {
    if (isQueueEmpty()) {
        std::cout << "Fila vazia\n";
        return;
    }
    std::cout << "Fila: ";
    for (int i = front; i <= rear; i++) {
        std::cout << queue[i] << " ";
    }
    std::cout << "\n";
}

bool isStackEmpty() {
    return top == -1;
}

bool isStackFull() {
    return top == MAX_SIZE - 1;
}

void push(int value) {
    if (isStackFull()) {
        std::cout << "Erro: Pilha cheia\n";
        return;
    }
    stack[++top] = value;
}

void pop() {
    if (isStackEmpty()) {
        std::cout << "Erro: Pilha vazia\n";
        return;
    }
    top--;
}

int getTop() {
    if (isStackEmpty()) {
        std::cout << "Pilha vazia\n";
        return -1;
    }
    return stack[top];
}

void reverseQueue() {
    while (!isQueueEmpty()) {
        push(getFront());
        dequeue();
    }
    
    while (!isStackEmpty()) {
        enqueue(getTop());
        pop();
    }
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    std::cout << "Fila original:\n";
    displayQueue();

    reverseQueue();

    std::cout << "\nFila invertida:\n";
    displayQueue();

    return 0;
}