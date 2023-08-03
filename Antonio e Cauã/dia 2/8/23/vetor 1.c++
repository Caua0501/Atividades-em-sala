#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int NUM_PLANETAS = 5;
    string planetas[NUM_PLANETAS] = {"Vênus", "Marte", "Terra", "Mercúrio", "Júpiter"};

    // Ordenar os planetas em ordem alfabética
    sort(planetas, planetas + NUM_PLANETAS);

    // Exibir os planetas em ordem alfabética
    cout << "Os planetas em ordem alfabética são:" << endl;
    for (int i = 0; i < NUM_PLANETAS; ++i) {
        cout << planetas[i] << endl;
    }

    return 0;
}

