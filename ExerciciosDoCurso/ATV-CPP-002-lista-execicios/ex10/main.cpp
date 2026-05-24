/*
Autores: Caua Balzaneli, Valentino Hoehne
    Data: //2026
    Finalidade: Ler um nome completo.
        Exibir:
        Quantidade de vogais
        Quantidade de consoantes
        Criar funções separadas para cada contagem.
*/


#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void numeroDeVogais(string &nomeCompleto);
void numeroDeConsoantes(string &nomeCompleto);


int main() {

    string nomeCompleto;
    cout << "digite seu nome completo: ";
    getline(cin, nomeCompleto);

    numeroDeVogais(nomeCompleto);
    numeroDeConsoantes(nomeCompleto);
    return 0;
}

void numeroDeConsoantes(string &nomeCompleto) {

    int contagemDeConsoantes = 0;

    for (int i = 0; i < nomeCompleto.length(); i++) {
        char c = tolower(nomeCompleto[i]);

        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            contagemDeConsoantes++;
        }
    }

    cout << "numero de consoantes: " << contagemDeConsoantes << endl;
}

void numeroDeVogais(string &nomeCompleto) {
    int contagemDeVogais = 0;

    for (int i = 0; i < nomeCompleto.length(); i++) {
        char c = tolower(nomeCompleto[i]);

        if (isspace(c)) {
            continue;
        }

        if (nomeCompleto[i] == 'a' || nomeCompleto[i] == 'e' || nomeCompleto[i] == 'i' || nomeCompleto[i] == 'o' || nomeCompleto[i] == 'u') {
            contagemDeVogais++;
        }
    }

    cout << "numero de vogais: " << contagemDeVogais << endl;
}
