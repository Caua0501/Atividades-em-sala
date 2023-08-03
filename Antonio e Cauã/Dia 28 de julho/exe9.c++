#include <iostream>
using namespace std;

int main() {
    int numero, maior = INT_MIN, menor = INT_MAX;

    cout << "Digite uma sequência de números inteiros (digite 0 para encerrar):\n";

    while (true) {
        cin >> numero;

        if (numero == 0) {
            break;
        }

        // Atualiza o maior valor, se necessário
        if (numero > maior) {
            maior = numero;
        }

        // Atualiza o menor valor, se necessário
        if (numero < menor) {
            menor = numero;
        }
    }

    if (maior == INT_MIN && menor == INT_MAX) {
        cout << "Nenhum número foi digitado.\n";
    } else {
        cout << "O maior número digitado é: " << maior << endl;
        cout << "O menor número digitado é: " << menor << endl;
    }

    return 0;
}
