#include <iostream>
using namespace std;

struct Funcionario {
    char nome[50];
    char cargo[30];
    float salario;
};

int main() {
    int n;
    cout << "Quantos funcionarios? ";
    cin >> n;

    Funcionario* f = (Funcionario*) malloc(n * sizeof(Funcionario));

    for (int i = 0; i < n; i++) {
        cout << "Funcionario " << i+1 << ":\n";
        cin.ignore();
        cout << "Nome: ";
        cin.getline(f[i].nome, 50);
        cout << "Cargo: ";
        cin.getline(f[i].cargo, 30);
        cout << "Salario: ";
        cin >> f[i].salario;
    }

    for (int i = 0; i < n; i++) {
        cout << f[i].nome << " - " << f[i].cargo << " - R$" << f[i].salario << endl;
    }

    free(f);
    return 0;
}
