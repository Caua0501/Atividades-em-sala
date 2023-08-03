#include <iostream>
#include <string>

using namespace std;

int main() {

const int ALTURA_JOGADORAS = 6;
string jogadoras[ALTURA_JOGADORAS] = {"jogadora 1," "jogadora 2", "jogagora 3", "jogadora 4", "jogadora 5", "jogadora 6"};
float altura[ALTURA_JOGADORAS];

for (int i = 0; i < ALTURA_JOGADORAS; ++i) { // o comando for solicita que o usuário digite a idade de cada jogadora 
       cout << "Digite a altura da jogadora " << jogadoras[i] << ": "; // Depois é armazenada no array e somada por causa da variável soma idade
        cin >> altura[i];


     }
     float alturaMaior = altura[0];
     float alturaMenor = altura[0];
  for (int i = 1; i < ALTURA_JOGADORAS; ++i) {
        if (altura[i] > alturaMaior) {
            alturaMaior = altura[i];
        }
        if (altura[i] < alturaMenor) {
            alturaMenor = altura[i];
        }
    }

    // Exibindo o resultado
    cout << "Maior altura das jogadoras: " << alturaMaior << " metros" << endl;
    cout << "Menor altura das jogadoras: " << alturaMenor << " metros" << endl;

    return 0;
}   

