#include <iostream>
#include <string>

using namespace std;

int main() {
    const int NUM_PAISES = 7; // constante que representa o tanto de países que sediaram a copa do mundo 
    string paises[NUM_PAISES] = {"BRA", "USA", "SWE", "CHN", "GER", "FRA", "CAN"};
    string sigla; // declara variável para armazenar a sigla

    cout << "Digite a sigla do país que sediou a Copa do Mundo Feminina: ";
    cin >> sigla; // FAz co que o usuário digite a sigla de um país

    bool encontrou = false; // Declara uma variável para indicar se a sigla foi encontrada

    for (int i = 0; i < NUM_PAISES; ++i) {
        if (paises[i] == sigla) {
            encontrou = true;
            break;
        }
    }

    if (encontrou) {
        cout << "Sim, a sigla está presente na lista de países sediadores da Copa do Mundo Feminina." << endl;
    } else {
        cout << "Não, a sigla não está presente na lista de países sediadores da Copa do Mundo Feminina." << endl;
    }

    return 0;
}
