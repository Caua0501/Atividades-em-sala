#include <iostream>
using namespace std;

int main() {

    const int SIZE = 4;
    int vetor[SIZE];
    int soma = 0;
    cout << "Digite " << SIZE << " valores inteiros:\n";

    // invertendo os vetores
    for (int i = 0; i < SIZE; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
        soma += vetor[i]; 
    }
    cout << "\nA soma de todos os elementos do vetor é: " << soma / 4 << endl;

    
   
    return 0;
}