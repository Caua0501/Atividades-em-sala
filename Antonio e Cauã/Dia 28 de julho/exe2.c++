#include <iostream>
using namespace std;

// Função para verificar se o número é perfeito
bool verificarNumeroPerfeito(int num) {
    int somaDivisores = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }
    return somaDivisores == num;
}

int main() {
    int numero;

    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "O número precisa ser inteiro positivo." << endl;
    } else {
        if (verificarNumeroPerfeito(numero)) {
            cout << numero << " é um número perfeito." << endl;
        } else {
            cout << numero << " não é um número perfeito." << endl;
        }
    }

    return 0;
}
