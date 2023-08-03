#include <iostream>
#include <string>


using namespace std;

int main() {
    const int NUM_JOGADORAS = 10; // Armazena o  número de jogadoras
   string jogadoras[NUM_JOGADORAS] = {"Marta", "Debinha", "Formiga", "Andressa Alves", "Luana", "Ana Vitoria", "Adriana", "Duda Sampaio" , "Bruninha", "Tainara"}; // Declaração de arrays que armazena o número de jogadoras
    int idade[NUM_JOGADORAS];
    int somaIdade = 0; // variável para acumular a soma das idades 
    // Leitura da quantidade de títulos de cada país
    for (int i = 0; i < NUM_JOGADORAS; ++i) { // o comando for solicita que o usuário digite a idade de cada jogadora 
       cout << "Digite a idade da jogadora " << jogadoras[i] << ": "; // Depois é armazenada no array e somada por causa da variável soma idade
        cin >> idade[i];
        somaIdade += idade[i];

     }
       float mediaIdade = static_cast<float>(somaIdade) / NUM_JOGADORAS; // A média é calculada

    // Exibindo o resultado
    cout << "A media da idade das jogadoras e: " << mediaIdade << " anos." << endl; // Exibe a média

   
        return 0;
   }
    
