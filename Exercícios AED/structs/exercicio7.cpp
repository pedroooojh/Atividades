#include <iostream>
#include <cstring>
using namespace std;

struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    int n;
    cout << "Quantos contatos deseja adicionar? ";
    cin >> n;

    Contato* contatos = (Contato*) malloc(n * sizeof(Contato));

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Nome: ";
        cin.getline(contatos[i].nome, 50);
        cout << "Telefone: ";
        cin.getline(contatos[i].telefone, 15);
    }

    char busca[50];
    cout << "Buscar contato pelo nome: ";
    cin.ignore();
    cin.getline(busca, 50);

    for (int i = 0; i < n; i++) {
        if (strcmp(contatos[i].nome, busca) == 0) {
            cout << "Telefone: " << contatos[i].telefone << endl;
            break;
        }
    }

    free(contatos);
    return 0;
}
