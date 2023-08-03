#include <iostream>

unsigned long long calcularFatorial(int n) { // Esse comando serve para calcular o fatorial 
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int numero;

    std::cout << "Digite um número inteiro: "; // Faz aparecer essa mensagem 
    std::cin >> numero;

    if (numero < 0) { //Faz com que o comando não execute se o número for menor que 0
        std::cout << "O fatorial não está definido para números negativos." << std::endl;
    } else {
        unsigned long long fatorial = calcularFatorial(numero);
        std::cout << "O fatorial de " << numero << " é: " << fatorial << std::endl;
    }

    return 0;
}
