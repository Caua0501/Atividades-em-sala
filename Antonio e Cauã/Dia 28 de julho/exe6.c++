#include <iostream>
using namespace std;

// Função para verificar o tipo de triângulo
string verificarTipoTriangulo(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return "Não é possível formar um triângulo com lados não positivos.";
    }

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            return "Triângulo Equilátero";
        } else if (a == b || b == c || a == c) {
            return "Triângulo Isósceles";
        } else {
            return "Triângulo Escaleno";
        }
    } else {
        return "Não é possível formar um triângulo com esses lados.";
    }
}

int main() {
    double ladoA, ladoB, ladoC;

    cout << "Digite o valor do lado A do triângulo: ";
    cin >> ladoA;

    cout << "Digite o valor do lado B do triângulo: ";
    cin >> ladoB;

    cout << "Digite o valor do lado C do triângulo: ";
    cin >> ladoC;

    string tipoTriangulo = verificarTipoTriangulo(ladoA, ladoB, ladoC);
    cout << "Resultado: " << tipoTriangulo << endl;

    return 0;
}
