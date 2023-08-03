#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    const int tamanhoVetor = 4;
    int vetor[tamanhoVetor];

    // Inicializa a semente para geração de números aleatórios com base no tempo atual
    srand(static_cast<unsigned>(time(0)));

    // Preenche o vetor com valores aleatórios entre 1 e 10
    for (int i = 0; i < tamanhoVetor; i++) {
        vetor[i] = rand() % 10 + 1;
    }

    // Solicita ao usuário que adivinhe um dos números do vetor
    cout << "Tente adivinhar um dos numeros do vetor (valores entre 1 e 10): ";
    int palpite;
    cin >> palpite;

    // Verifica se o palpite está correto
    bool acertou = false;
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] == palpite) {
            acertou = true;
            break;
        }
    }

    // Exibe o resultado
    if (acertou) {
        cout << "Parabens! Seu palpite esta correto." << endl;
    } else {
        cout << "Que pena! Seu palpite esta incorreto." << endl;
    }

    // Exibe os números do vetor para que o usuário possa verificar a resposta
    cout << "Numeros do vetor: ";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
