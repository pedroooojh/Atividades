#include <iostream>
using namespace std;

struct Retangulo {
    float base;
    float altura;
};

float calcularArea(Retangulo r) {
    return r.base * r.altura;
}

float calcularPerimetro(Retangulo r) {
    return 2 * (r.base + r.altura);
}

int main() {
    Retangulo r;
    cout << "Base: ";
    cin >> r.base;
    cout << "Altura: ";
    cin >> r.altura;

    cout << "Area: " << calcularArea(r) << endl;
    cout << "Perimetro: " << calcularPerimetro(r) << endl;
    return 0;
}
