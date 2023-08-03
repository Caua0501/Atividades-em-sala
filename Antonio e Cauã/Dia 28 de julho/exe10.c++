#include <iostream>
#include <cstdlib> // Biblioteca para geração de números aleatórios
#include <ctime>   // Biblioteca para obter o tempo atual

using namespace std;

int main() {
    srand(time(0)); // Inicializa a semente para geração de números aleatórios

    int lancamentos = 0;
    int resultado;

    do {
        resultado = rand() % 6 + 1; // Gera um número aleatório entre 1 e 6
        lancamentos++;
    } while (resultado != 6);

    cout << "O jogador obteve o resultado 6 após " << lancamentos << " lançamentos." << endl;

    return 0;
}
