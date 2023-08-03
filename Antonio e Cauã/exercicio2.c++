#include <iostream>

int main() {
    int idade; // aqui cria a variavel numero 

    std::cout << "Digite sua idade: "; // O numero que vc escolher aqui sera referente a idade 
    std::cin >> idade;

    if (idade >= 18) {
        std::cout << "Voce e maior de idade." << std::endl; // Se o numero que vc escolher acima for maior maior ou igual a 18 mostrara a mensagem que vc e maior 
    } else {
        std::cout << "Voce e menor de idade." << std::endl; // ser nao que vc e menor
    }
    
  return 0;

}