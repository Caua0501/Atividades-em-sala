#include <iostream>

bool isPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    // Verifica se o número é divisível por algum valor entre 2 e a raiz quadrada do número.
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero; // Cria uma variável numero 

    std::cout << "Digite um número inteiro: "; // Faz aparecer essa mensagem 
    std::cin >> numero;

    if (isPrimo(numero)) {   // Faz com que o comando só executa se o número for primo 
        std::cout << numero << " é um número primo." << std::endl;
    } else {
        std::cout << numero << " não é um número primo." << std::endl;
    }

    return 0;
}
