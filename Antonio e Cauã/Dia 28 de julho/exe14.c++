#include <iostream>

using namespace std;

int main() {
    int numero, soma = 0;

    // Solicitar ao usuário para inserir um número inteiro positivo
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verificar se o número é positivo
    if (numero <= 0) {
        cout << "O número inserido não é válido. Por favor, insira um número inteiro positivo." << endl;
        return 1; // Encerra o programa com erro
    }

    // Calcular a soma dos dígitos
    while (numero > 0) {
        int digito = numero % 10; // Obtém o último dígito do número
        soma += digito; // Adiciona o dígito à soma
        numero /= 10; // Remove o último dígito do número
    }

    // Exibir o resultado
    cout << "A soma dos dígitos do número é: " << soma << endl;

    return 0; // Encerra o programa com sucesso
}
