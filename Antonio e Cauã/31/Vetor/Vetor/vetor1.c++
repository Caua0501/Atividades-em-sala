#include <iostream>

int main() {
    const int tamanhoVetor = 5;
    int vetor[tamanhoVetor];

    std::cout << "Digite " << tamanhoVetor << " valores inteiros:\n";

    // Preenchendo o vetor com valores digitados pelo usuário
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << "Digite o elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    // Exibindo os elementos do vetor na tela
    std::cout << "\nElementos do vetor:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << vetor[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}