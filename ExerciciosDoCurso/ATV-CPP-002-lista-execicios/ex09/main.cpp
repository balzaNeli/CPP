/*
Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade:Ler uma palavra.
              Substituir todas as vogais por *.
              Criar uma função para realizar a substituição.
*/


#include <iostream>
using namespace std;

//assinaturas
void substituicaoDeVogais(string &palavra);


int main() {
    string palavra;

    cout << "Digite Uma Palavra: ";
    cin >> palavra;
    substituicaoDeVogais(palavra);
    cout << palavra;

}


void substituicaoDeVogais(string &palavra) {

    for (int i = 0;i < palavra.length(); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            palavra[i] = '*';
        }
    }
}
