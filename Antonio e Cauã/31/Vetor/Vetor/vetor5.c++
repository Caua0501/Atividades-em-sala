#include <iostream>
#include <limits> // Para usar o valor máximo e mínimo dos floats

int main() {
    const int tamanhoVetor = 7;
    float vetor[tamanhoVetor];

    std::cout << "Digite " << tamanhoVetor << " números reais:\n";

    // Preenchendo o vetor com valores digitados pelo usuário
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << "Digite o elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    // Inicializando as variáveis para armazenar o maior e o menor valor
    float maiorValor = std::numeric_limits<float>::min();
    float menorValor = std::numeric_limits<float>::max();

    // Encontrando o maior e o menor valor no vetor
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
        if (vetor[i] < menorValor) {
            menorValor = vetor[i];
        }
    }

    // Exibindo o maior e o menor valor presente no vetor
    std::cout << "\nMaior valor: " << maiorValor << std::endl;
    std::cout << "Menor valor: " << menorValor << std::endl;

    return 0;
}
