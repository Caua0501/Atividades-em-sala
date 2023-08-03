#include <iostream>
#include <string>

int main() {
    std::string nome; // Declaração de uma string

    nome = "Jhon"; //Atribuição de valor a uma string

    std::string sobrenome = "Doe"; // Declaração e inicialização de uma string

    std::string nomeCompleto = nome = " " + sobrenome; // Concatenação de strigs

    std::cout << "Nome completo: " << nomeCompleto << std::endl; // Exibição de uma string

    return 0;
}
