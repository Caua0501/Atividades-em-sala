#include <iostream>
#include <string>

using namespace std;

int main() {
    const int NUM_PLANETAS = 8;
    string planetas[NUM_PLANETAS] = {"Mercúrio", "Vênus", "Terra", "Marte", "Júpiter", "Saturno", "Urano", "Netuno"};
    int distanciaMedia[NUM_PLANETAS] = {57, 108, 150, 228, 778, 1433, 2872, 4495};

    int distanciaMaisProxima = distanciaMedia[0];
    int distanciaMaisDistante = distanciaMedia[0];
    string planetaMaisProximo = planetas[0];
    string planetaMaisDistante = planetas[0];

    for (int i = 1; i < NUM_PLANETAS; ++i) {
        if (distanciaMedia[i] < distanciaMaisProxima) {
            distanciaMaisProxima = distanciaMedia[i];
            planetaMaisProximo = planetas[i];
        }

        if (distanciaMedia[i] > distanciaMaisDistante) {
            distanciaMaisDistante = distanciaMedia[i];
            planetaMaisDistante = planetas[i];
        }
    }

    cout << "Planeta mais próximo do Sol: " << planetaMaisProximo << " (Distância média: " << distanciaMaisProxima << " milhões de km)" << endl;
    cout << "Planeta mais distante do Sol: " << planetaMaisDistante << " (Distância média: " << distanciaMaisDistante << " milhões de km)" << endl;

    return 0;
}
