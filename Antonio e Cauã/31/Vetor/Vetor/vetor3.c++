#include <iostream>

int main() {
    const int tamanhoVetor = 10;
    int vetor[tamanhoVetor];
    int soma = 0;

    std::cout << "Digite " << tamanhoVetor << " valores inteiros:\n";

    // Preenchendo o vetor com valores digitados pelo usuário
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << "Digite o elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
        soma += vetor[i]; // Somando cada elemento ao total
    }

    // Exibindo a soma de todos os elementos do vetor
    std::cout << "\nA soma de todos os elementos do vetor é: " << soma << std::endl;

    return 0;
}
