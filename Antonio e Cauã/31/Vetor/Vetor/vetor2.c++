#include <iostream>
#include <string>

int main() {
    const int tamanhoVetor = 5;
    std::string frutas[tamanhoVetor];

    std::cout << "Digite o nome de " << tamanhoVetor << " frutas:\n";

    // Preenchendo o vetor com os nomes das frutas digitados pelo usuário
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << "Digite o nome da fruta " << i + 1 << ": ";
        std::cin >> frutas[i];
    }

    // Exibindo o nome de cada fruta em uma linha separada
    std::cout << "\nNomes das frutas:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << frutas[i] << std::endl;
    }

    return 0;
}
