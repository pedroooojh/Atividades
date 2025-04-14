#include <iostream>
#include <cstdlib>
using namespace std;

int soma_digitos_iterativa(int n) {
    int soma = 0;
    n = abs(n);
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "Soma dos digitos: " << soma_digitos_iterativa(num) << endl;
    return 0;
}