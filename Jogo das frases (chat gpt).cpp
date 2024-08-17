#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Declara��o das frases
    string frases[] = {
        "O tempo � uma ilus�o, a vida � um jogo que n�o temos como vencer. - Anonymous",
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

    // Obt�m o tamanho do array
    int numFrases = sizeof(frases) / sizeof(frases[0]);

    // Semente aleat�ria para a fun��o rand()
    srand(time(0));

    // Seleciona uma frase aleat�ria
    int indiceFrase = rand() % numFrases;
    string fraseSelecionada = frases[indiceFrase];

    // Pede para o usu�rio adivinhar de qual jogo � a frase
    cout << "De qual jogo � esta frase: " << fraseSelecionada << endl;
    string resposta;
    getline(cin, resposta);

    // Verifica se a resposta est� correta
    if (resposta == "Bioshock") {
        cout << "Parab�ns! Voc� acertou!" << endl;
    } else {
        cout << "Ops, voc� errou. A resposta correta �: Bioshock." << endl;
    }

    return 0;
}
