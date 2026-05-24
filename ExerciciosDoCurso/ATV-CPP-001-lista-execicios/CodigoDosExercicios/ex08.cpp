/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Ler um número. Exiba a soma de todos os números pares e ímpares de zero até o número lido.
*/


#include <iostream>
using namespace std;



int main() {
    int num;
    int somaPares = 0;
    int somaImpares = 0;
    
    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            somaImpares += i;
        }
    }

    cout << "Soma dos pares:   " << somaPares   << endl;
    cout << "Soma dos impares: " << somaImpares << endl;
    return 0;
}