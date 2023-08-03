#include <iostream>
using namespace std;

// Função para gerar a sequência de Fibonacci
void gerarSequenciaFibonacci(int numero) {
    int primeiro = 0, segundo = 1, proximo;

    cout << "Sequência de Fibonacci até " << numero << ":" << endl;
    cout << primeiro << " ";
    while (segundo <= numero) {
        cout << segundo << " ";
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
    cout << endl;
}

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    gerarSequenciaFibonacci(numero);

    return 0;
}
