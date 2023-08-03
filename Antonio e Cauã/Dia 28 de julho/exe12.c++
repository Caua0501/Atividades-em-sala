#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    // Verificar divisibilidade por números de 2 até a raiz quadrada do número
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false; // Encontrou um divisor, portanto, não é primo
        }
    }

    return true; // Nenhum divisor encontrado, portanto, é primo
}

int main() {
    int numero;

    // Solicitar ao usuário para inserir um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Verificar se o número é primo
    if (isPrime(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}
