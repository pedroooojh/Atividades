#include <iostream>
using namespace std;

void contagem_regressiva_iterativa(int n) {
    for (int i = n; i >= 0; i--) {
        cout << i << " ";
    }
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    contagem_regressiva_iterativa(num);
    cout << endl;
    return 0;
}