#include <iostream>
#include <cstdlib>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1 && rear == -1;
}

bool isFull() {
    return rear == MAX_SIZE - 1;
}

void enqueue(int value) {
    if (isFull()) {
        std::cout << "A fila está cheia. Não é possível adicionar mais clientes.\n";
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = value;
    std::cout << "Cliente " << value << " entrou na fila.\n";
}

void dequeue() {
    if (isEmpty()) {
        std::cout << "A fila está vazia. Não há clientes para atender.\n";
        return;
    }
    std::cout << "Atendendo cliente " << queue[front] << "...\n";
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

int getFront() {
    if (isEmpty()) {
        std::cout << "A fila está vazia.\n";
        return -1;
    }
    return queue[front];
}

void displayQueue() {
    if (isEmpty()) {
        std::cout << "A fila está vazia.\n";
        return;
    }
    std::cout << "Clientes na fila: ";
    for (int i = front; i <= rear; i++) {
        std::cout << queue[i] << " ";
    }
    std::cout << "\n";
}

void bankSimulation() {
    int customerNumber = 1;
    int choice;
    
    std::cout << "=== Simulação de Atendimento Bancário ===\n";
    
    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Novo cliente entra na fila\n";
        std::cout << "2. Atender próximo cliente\n";
        std::cout << "3. Ver próximo cliente a ser atendido\n";
        std::cout << "4. Mostrar fila de espera\n";
        std::cout << "5. Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                enqueue(customerNumber++);
                break;
            case 2:
                dequeue();
                break;
            case 3: {
                int next = getFront();
                if (next != -1) {
                    std::cout << "Próximo cliente a ser atendido: " << next << "\n";
                }
                break;
            }
            case 4:
                displayQueue();
                break;
            case 5:
                std::cout << "Encerrando simulação...\n";
                return;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }
}

int main() {
    bankSimulation();
    return 0;
}