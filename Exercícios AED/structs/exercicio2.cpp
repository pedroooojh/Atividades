#include <iostream>
using namespace std;

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    Aluno alunos[5];
    float soma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Nome: ";
        cin.ignore();
        cin.getline(alunos[i].nome, 50);
        cout << "Matricula: ";
        cin >> alunos[i].matricula;
        cout << "Nota: ";
        cin >> alunos[i].nota;
        soma += alunos[i].nota;
    }

    cout << "Media das notas: " << soma / 5 << endl;
    return 0;
}
