#include <iostream>
#include <cstdlib>
using namespace std;

int maior_elemento_iterativo(int vet[], int n) {
    int maior = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int main() {
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    
    int *vetor = (int*)malloc(tamanho * sizeof(int));
    cout << "Digite os elementos do vetor:\n";
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }
    
    cout << "Maior elemento: " << maior_elemento_iterativo(vetor, tamanho) << endl;
    free(vetor);
    return 0;
}