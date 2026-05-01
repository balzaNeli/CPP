/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 23/04/2026
   Finalidade: Ler um número para a parada final e outro número que representa um múltiplo. Exibir os múltiplos do número lido de 1 até o número final lido.
*/


#include <iostream>
using namespace std;



int main() {
    int numeroFinal, multiplo;
    cout << "Digite o número para a parada final: ";
    cin >> numeroFinal;
    cout << "Digite o número que representa um múltiplo: ";
    cin >> multiplo;

    for(int i = 1; i <= numeroFinal; i++) {
        if(i % multiplo == 0) {
            cout << i << "\n";
        }
    }



    return 0;
}