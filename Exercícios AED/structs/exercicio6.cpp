#include <iostream>
using namespace std;

struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
};

void mostrarLivrosAposAno(Livro* livros, int tamanho, int ano) {
    for (int i = 0; i < tamanho; i++) {
        if (livros[i].ano > ano) {
            cout << livros[i].titulo << " - " << livros[i].autor << " - " << livros[i].ano << endl;
        }
    }
}

int main() {
    int n, ano;
    cout << "Quantos livros? ";
    cin >> n;
    Livro* livros = (Livro*) malloc(n * sizeof(Livro));

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Titulo: ";
        cin.getline(livros[i].titulo, 50);
        cout << "Autor: ";
        cin.getline(livros[i].autor, 50);
        cout << "Ano: ";
        cin >> livros[i].ano;
    }

    cout << "Mostrar livros publicados apos o ano: ";
    cin >> ano;

    mostrarLivrosAposAno(livros, n, ano);

    free(livros);
    return 0;
}
