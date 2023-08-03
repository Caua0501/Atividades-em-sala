#include <iostream>
#include <string>
using namespace std;

#define SIZE 5
int main () {
const int tamanho = 5;
string paises_vencedores[tamanho];

paises_vencedores[0] = "Estados Unidos";
paises_vencedores[1] = "Alemanha";
paises_vencedores[2] = "Noruega";
paises_vencedores[3] = "Japao";
paises_vencedores[4] = "Inglaterra";

    cout << "Paises vencedores da Copa do Mundo Feminina:" << endl;

   for (int i = 0; i < tamanho; i++) {
       cout << "- " << paises_vencedores[i] << endl;
    }

    sort(paises_vencedores, paises_vencedores + tamanho);
    cout << "paises em ordem alfabetica:" << endl;
      for (int i = 0; i < tamanho; i++) {
       cout << "- " << paises_vencedores[i] << endl;
    }
    cout << endl;

   
 return 0;
}