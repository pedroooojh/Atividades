#include <iostream>
#include <cstdlib>
using namespace std;

int produto(int a, int b) {
    if (b == 0) return 0;
    if (b == 1) return a;
    return a + produto(a, b - 1);
}

int main() {
    int a, b;
    cout << "Digite dois numeros: ";
    cin >> a >> b;
    cout << "Produto: " << produto(a, b) << endl;
    return 0;
}