#include <iostream>
using namespace std;

// Função recursiva para verificar se um número é primo
bool verificarPrimoRecursivo(int num, int divisor) {
    if (divisor == 1) {
        return true;
    }
    
    if (num % divisor == 0) {
        return false;
    }
    
    return verificarPrimoRecursivo(num, divisor - 1);
}

// Função auxiliar para iniciar a chamada recursiva
bool verificarPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    
    return verificarPrimoRecursivo(num, num - 1);
}

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (verificarPrimo(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}
