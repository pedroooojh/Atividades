#include <iostream>
using namespace std;

struct Produto {
    char nome[30];
    int codigo;
    float preco;
};

void exibirProduto(Produto p) {
    cout << "Produto: " << p.nome << endl;
    cout << "Codigo: " << p.codigo << endl;
    cout << "Preco: R$" << p.preco << endl;
}

int main() {
    Produto prod;
    cout << "Nome do produto: ";
    cin.getline(prod.nome, 30);
    cout << "Codigo: ";
    cin >> prod.codigo;
    cout << "Preco: ";
    cin >> prod.preco;

    exibirProduto(prod);
    return 0;
}
