#include <iostream>
using namespace std;

struct ContaBancaria {
    char nome[50];
    int numero;
    float saldo;
};

void depositar(ContaBancaria* c, float valor) {
    c->saldo += valor;
}

void sacar(ContaBancaria* c, float valor) {
    if (valor <= c->saldo) {
        c->saldo -= valor;
    } else {
        cout << "Saldo insuficiente.\n";
    }
}

void exibirSaldo(ContaBancaria* c) {
    cout << "Saldo: R$" << c->saldo << endl;
}

int main() {
    ContaBancaria conta;
    cout << "Nome do titular: ";
    cin.getline(conta.nome, 50);
    cout << "Numero da conta: ";
    cin >> conta.numero;
    conta.saldo = 0;

    int opcao;
    float valor;
    do {
        cout << "1 - Depositar\n2 - Sacar\n3 - Exibir saldo\n0 - Sair\nOpcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                depositar(&conta, valor);
                break;
            case 2:
                cout << "Valor: ";
                cin >> valor;
                sacar(&conta, valor);
                break;
            case 3:
                exibirSaldo(&conta);
                break;
        }
    } while (opcao != 0);

    return 0;
}
