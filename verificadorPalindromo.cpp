/*
   Autores: Caua Balzaneli
   Data: //2026
   Finalidade: Leia uma string e verifique se ela é um palíndromo (igual lida de trás para frente).
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    int tamanho = palavra.size(); // quantas letras tem
    bool palindromo = true;       // assume que é palíndromo até provar o contrário

    for (int i = 0; i < tamanho / 2; i++) {
        // compara letra da frente com letra de trás
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = false; // achou diferença, não é palíndromo
            break;              // não precisa continuar comparando
        }
    }

    if (palindromo)
        cout << palavra << " é um palindromo!" << endl;
    else
        cout << palavra << " nao é um palindromo." << endl;

    return 0;
}