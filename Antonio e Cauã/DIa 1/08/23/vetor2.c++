#include <iostream>
#include <string>

int main() {
    const int NUM_PAISES = 8;
    std::string paises[NUM_PAISES] = {"Brasil", "Estados Unidos", "Alemanha", "Noruega", "Suécia", "Japão", "Itália", "China"};
    int titulos[NUM_PAISES];

    // Leitura da quantidade de títulos de cada país
    for (int i = 0; i < NUM_PAISES; ++i) {
        std::cout << "Digite a quantidade de títulos da seleção " << paises[i] << ": ";
        std::cin >> titulos[i];
    }

    // Exibição dos países que não ganharam nenhuma copa
    std::cout << "\nPaíses que não ganharam nenhuma Copa do Mundo Feminina:\n";
    bool nenhumTitulo = true;

    for (int i = 0; i < NUM_PAISES; ++i) {
        if (titulos[i] == 0) {
            std::cout << paises[i] << std::endl;
            nenhumTitulo = false;
        }
    }

    if (nenhumTitulo) {
        std::cout << "Todos os países ganharam pelo menos um título." << std::endl;
    }

    return 0;
}
