#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Gerar uma semente aleatória para o gerador de números
    srand(time(0));

    // Gerar um número aleatório entre 1 e 100
    int numeroSecreto = rand() % 100 + 1;

    int tentativa;
    int tentativasRestantes = 10; // Número máximo de tentativas

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << "Tente adivinhar o número secreto entre 1 e 100." << endl;

    while (tentativasRestantes > 0) {
        cout << "Tentativas restantes: " << tentativasRestantes << endl;
        cout << "Digite sua tentativa: ";
        cin >> tentativa;

        if (tentativa == numeroSecreto) {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            break;
        } else if (tentativa < numeroSecreto) {
            cout << "O número secreto é maior." << endl;
        } else {
            cout << "O número secreto é menor." << endl;
        }

        tentativasRestantes--;
    }

    if (tentativasRestantes == 0) {
        cout << "Suas tentativas acabaram. O número secreto era: " << numeroSecreto << endl;
    }

    return 0;
}
