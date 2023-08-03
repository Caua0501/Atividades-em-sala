#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0, contador = 0;

    cout << "Digite uma sequência de números inteiros (digite 0 para encerrar):\n";

    while (true) {
        cin >> numero;

        if (numero == 0) {
            break;
        }

        soma += numero;
        contador++;
    }

    if (contador == 0) {
        cout << "Nenhum número foi digitado.\n";
    } else {
        double media = static_cast<double>(soma) / contador;
        cout << "A média dos números digitados é: " << media << endl;
    }

    return 0;
}
