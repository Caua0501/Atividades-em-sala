#include <iostream>
using namespace std;

// Função para verificar se um número é palíndromo
bool verificarPalindromo(int numero) {
    int numeroOriginal = numero;
    int inverso = 0;
    
    while (numero > 0) {
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }
    
    return numeroOriginal == inverso;
}

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (verificarPalindromo(numero)) {
        cout << numero << " é um número palíndromo." << endl;
    } else {
        cout << numero << " não é um número palíndromo." << endl;
    }

    return 0;
}
