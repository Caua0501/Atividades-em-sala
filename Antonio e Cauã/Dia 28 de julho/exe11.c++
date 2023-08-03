#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar ao usuário para inserir um número inteiro positivo
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verificar se o número é positivo
    if (numero <= 0) {
        cout << "O número inserido não é válido. Por favor, insira um número inteiro positivo." << endl;
        return 1; // Encerra o programa com erro
    }

    // Exibir os divisores
    cout << "Divisores de " << numero << ": ";
    for (int divisor = 1; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            cout << divisor << " ";
        }
    }

    cout << endl;

    return 0; // Encerra o programa com sucesso
}

