#include <iostream>
#include <cstdlib>
using namespace std;

int contar_digitos(int n) {
    if (abs(n) < 10) return 1;
    return 1 + contar_digitos(n / 10);
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "Quantidade de digitos: " << contar_digitos(num) << endl;
    return 0;
}