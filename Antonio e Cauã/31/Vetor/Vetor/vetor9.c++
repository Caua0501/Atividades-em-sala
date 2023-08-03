#include <iostream>

using namespace std;

int main() {
    const int tamanhoVetor = 5;
    int vetor1[tamanhoVetor];
    int vetor2[tamanhoVetor];
    int vetorSoma[tamanhoVetor];

    cout << "Insira os valores do primeiro vetor:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite o " << i + 1 << " valor: ";
        cin >> vetor1[i];
    }


    cout << "Insira os valores do segundo vetor:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite o " << i + 1 << " valor: ";
        cin >> vetor2[i];
    }

    for (int i = 0; i < tamanhoVetor; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }

    cout << "Conteudo do terceiro vetor (soma dos dois vetores):" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetorSoma[i] << " ";
    }
    cout << endl;

    return 0;
}
