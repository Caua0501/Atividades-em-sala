#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Digite a temperatura em graus Fahrenheit: ";
    cin >> fahrenheit;

    // Fórmula de conversão
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "A temperatura em graus Celsius é: " << celsius << "°C" << endl;

    return 0;
}
