#include <iostream>
using namespace std;

#define SIZE 6

int main() {
    int vetor[SIZE] = {2, 4, 6, 8, 10, 12};

    // invertendo os vetores
     for ( int i = 0; i < SIZE / 2; i++) {
        int inverter = vetor[i];
        vetor[i] = vetor[SIZE - 1 - i];
        vetor[SIZE - 1 - i] = inverter;
    }
    // Acessando e exibindo os elemetos do vetor
    cout << "Elementos do vetor: " << endl;
    for ( int i = 0; i < SIZE; i++) {
        cout << vetor[i] <<" ";
    }
    return 0;
}