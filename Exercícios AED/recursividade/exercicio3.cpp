#include <iostream>
#include <cstdlib>
using namespace std;

int soma_digitos(int n) {
    if (abs(n) < 10) return n;
    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "Soma dos digitos: " << soma_digitos(num) << endl;
    return 0;
}