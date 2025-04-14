#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int palindromo(char str[], int inicio, int fim) {
    if (inicio >= fim) return 1;
    if (str[inicio] != str[fim]) return 0;
    return palindromo(str, inicio + 1, fim - 1);
}

int main() {
    char *str = (char*)malloc(100 * sizeof(char));
    cout << "Digite uma string: ";
    cin >> str;
    
    int resultado = palindromo(str, 0, strlen(str) - 1);
    cout << "E palindromo? " << (resultado ? "Sim" : "Nao") << endl;
    
    free(str);
    return 0;
}