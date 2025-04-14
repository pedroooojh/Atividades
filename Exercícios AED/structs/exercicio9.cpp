#include <iostream>
using namespace std;

struct Paciente {
    char nome[50];
    int idade;
    char diagnostico[100];
};

void exibirPacientesIdosos(Paciente* p, int n) {
    for (int i = 0; i < n; i++) {
        if (p[i].idade > 60) {
            cout << p[i].nome << " - " << p[i].idade << " - " << p[i].diagnostico << endl;
        }
    }
}

int main() {
    int n;
    cout << "Numero de pacientes: ";
    cin >> n;

    Paciente* pacientes = (Paciente*) malloc(n * sizeof(Paciente));

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Nome: ";
        cin.getline(pacientes[i].nome, 50);
        cout << "Idade: ";
        cin >> pacientes[i].idade;
        cin.ignore();
        cout << "Diagnostico: ";
        cin.getline(pacientes[i].diagnostico, 100);
    }

    exibirPacientesIdosos(pacientes, n);
    free(pacientes);
    return 0;
}
