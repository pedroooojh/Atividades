#include <iostream>
#include <cstdlib>
using namespace std;

int maior_elemento(int vet[], int n) {
    if (n == 1) return vet[0];
    int maior_resto = maior_elemento(vet, n - 1);
    return (vet[n-1] > maior_resto) ? vet[n-1] : maior_resto;
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
    
    cout << "Maior elemento: " << maior_elemento(vetor, tamanho) << endl;
    free(vetor);
    return 0;
}