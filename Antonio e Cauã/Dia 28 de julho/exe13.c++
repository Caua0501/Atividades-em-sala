#include <iostream>

using namespace std;

int main() {
    int numero, contadorPares = 0, contadorImpares = 0;

    // Solicitar ao usuário para inserir os números (0 para encerrar a entrada)
    cout << "Digite uma sequência de números inteiros (insira 0 para encerrar):" << endl;

    while (true) {
        cin >> numero;

        if (numero == 0) {
            break; // Encerra o loop quando o usuário insere 0
        }

        if (numero % 2 == 0) {
            contadorPares++;
        } else {
            contadorImpares++;
        }
    }

    // Exibir o resultado
    cout << "Quantidade de números pares: " << contadorPares << endl;
    cout << "Quantidade de números ímpares: " << contadorImpares << endl;

    return 0;
}

