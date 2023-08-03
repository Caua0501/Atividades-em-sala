#include <iostream>
using namespace std;

int main() {
    #define SIZE 6
    char vetor[SIZE];

    cout << "Digite " << SIZE << " letras do alfabeto:\n";

    // Preenchendo o vetor com letras do alfabeto digitadas pelo usuário
    for (int i = 0; i < SIZE; i++) {
        cout << "Digite a letra " << i + 1 << ": ";
        cin >> vetor[i];
    }

    char letraBusca;
    cout << "\nDigite a letra que deseja verificar se esta presente no vetor: ";
    cin >> letraBusca;

    // Verificando se a letra está presente no vetor
    bool encontrada = false;
    for (int i = 0; i < SIZE; i++) {
        if (vetor[i] == letraBusca) {
            encontrada = true;
            break;
        }
    }

    // Exibindo o resultado da busca
    if (encontrada) {
        cout << "A letra '" << letraBusca << "' esta presente no vetor." << endl;
    } else {
        cout << "A letra '" << letraBusca << "' não esta presente no vetor." << endl;
    }

    return 0;
}
