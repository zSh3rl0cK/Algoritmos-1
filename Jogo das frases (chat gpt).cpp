#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Declaração das frases
    string frases[] = {
        "O tempo é uma ilusão, a vida é um jogo que não temos como vencer. - Anonymous",
        "War. War never changes. - Fallout",
        "Wake up and smell the ashes. - Bioshock",
        "It's dangerous to go alone! Take this. - The Legend of Zelda",
        "A man chooses, a slave obeys. - Bioshock",
        "Do a barrel roll! - Star Fox",
        "All your base are belong to us. - Zero Wing",
        "I used to be an adventurer like you, then I took an arrow in the knee. - Skyrim",
        "The cake is a lie. - Portal",
        "Would you kindly? - Bioshock"
    };

    // Obtém o tamanho do array
    int numFrases = sizeof(frases) / sizeof(frases[0]);

    // Semente aleatória para a função rand()
    srand(time(0));

    // Seleciona uma frase aleatória
    int indiceFrase = rand() % numFrases;
    string fraseSelecionada = frases[indiceFrase];

    // Pede para o usuário adivinhar de qual jogo é a frase
    cout << "De qual jogo é esta frase: " << fraseSelecionada << endl;
    string resposta;
    getline(cin, resposta);

    // Verifica se a resposta está correta
    if (resposta == "Bioshock") {
        cout << "Parabéns! Você acertou!" << endl;
    } else {
        cout << "Ops, você errou. A resposta correta é: Bioshock." << endl;
    }

    return 0;
}
