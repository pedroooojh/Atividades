#include <iostream>
using namespace std;

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    Pessoa p;
    cout << "Digite o nome: ";
    cin.getline(p.nome, 50);
    cout << "Digite a idade: ";
    cin >> p.idade;
    cout << "Digite a altura: ";
    cin >> p.altura;

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    cout << "Altura: " << p.altura << endl;
    return 0;
}
