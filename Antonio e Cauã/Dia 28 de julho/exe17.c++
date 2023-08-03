#include <iostream>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    // Verificar divisibilidade por números de 2 até a raiz quadrada do número
    for (int i = 2; i * i <= number; i++) {
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

    // Exibir todos os números primos menores ou iguais a ele
    cout << "Números primos menores ou iguais a " << numero << ": ";
    for (int i = 2; i <= numero; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
