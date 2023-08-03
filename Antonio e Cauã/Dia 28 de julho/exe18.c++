#include <iostream>

using namespace std;

void convertToHoursMinutesSeconds(int segundos, int &horas, int &minutos, int &segundosRestantes) {
    horas = segundos / 3600;           // 1 hora = 3600 segundos
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;   // 1 minuto = 60 segundos
    segundosRestantes = segundosRestantes % 60;
}

int main() {
    int segundos, horas, minutos, segundosRestantes;

    // Solicitar ao usuário para inserir uma quantidade de tempo em segundos
    cout << "Digite a quantidade de tempo em segundos: ";
    cin >> segundos;

    // Converter para horas, minutos e segundos
    convertToHoursMinutesSeconds(segundos, horas, minutos, segundosRestantes);

    // Exibir o resultado
    cout << "O tempo é: " << horas << " horas, " << minutos << " minutos e " << segundosRestantes << " segundos." << endl;

    return 0;
}
