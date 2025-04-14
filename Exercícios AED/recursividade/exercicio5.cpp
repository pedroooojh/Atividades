#include <iostream>
using namespace std;

void contagem_regressiva(int n) {
    if (n < 0) return;
    cout << n << " ";
    contagem_regressiva(n - 1);
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    contagem_regressiva(num);
    cout << endl;
    return 0;
}