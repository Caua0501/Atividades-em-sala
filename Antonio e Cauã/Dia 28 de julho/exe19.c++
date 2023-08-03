#include <iostream>

using namespace std;

bool isTriangular(int numero) {
    int soma = 0;
    int contador = 1;

    while (soma < numero) {
        soma += contador;
        contador++;
    }

    return soma == numero;
}

int main() {
    int numero;

    // Solicitar ao usuário para inserir um número inteiro positivo
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verificar se é um número triangular
    if (isTriangular(numero)) {
        cout << numero << " é um número triangular." << endl;
    } else {
        cout << numero << " não é um número triangular." << endl;
    }

    return 0;
}
