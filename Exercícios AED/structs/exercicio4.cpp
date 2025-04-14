#include <iostream>
#include <cstdlib>
using namespace std;

struct Carro {
    char modelo[30];
    int ano;
    float preco;
};

int main() {
    Carro* c = (Carro*) malloc(sizeof(Carro));

    cout << "Modelo: ";
    cin.getline(c->modelo, 30);
    cout << "Ano: ";
    cin >> c->ano;
    cout << "Preco: ";
    cin >> c->preco;

    cout << "Modelo: " << c->modelo << endl;
    cout << "Ano: " << c->ano << endl;
    cout << "Preco: " << c->preco << endl;

    free(c);
    return 0;
}
