#include <iostream>
using namespace std;

int produto_iterativo(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < abs(b); i++) {
        resultado += a;
    }
    return (b < 0) ? -resultado : resultado;
}

int main() {
    int a, b;
    cout << "Digite dois numeros: ";
    cin >> a >> b;
    cout << "Produto: " << produto_iterativo(a, b) << endl;
    return 0;
}