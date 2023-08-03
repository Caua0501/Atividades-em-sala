#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrome(const std::string& input_string) {
    std::string clean_string;
    
    // Remover espaços em branco e converter para letras minúsculas
    for (char c : input_string) {
        if (std::isalnum(c)) {
            clean_string.push_back(std::tolower(c));
        }
    }
    
    // Verificar se a string limpa é igual à sua reversa
    return clean_string == std::string(clean_string.rbegin(), clean_string.rend());
}

int main() {
    std::string user_input;
    std::cout << "Digite uma palavra ou frase: ";
    std::getline(std::cin, user_input);
    
    if (isPalindrome(user_input)) {
        std::cout << "É um palíndromo!" << std::endl;
    } else {
        std::cout << "Não é um palíndromo!" << std::endl;
    }

    return 0;
}
