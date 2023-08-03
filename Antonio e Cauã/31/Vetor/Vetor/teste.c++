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