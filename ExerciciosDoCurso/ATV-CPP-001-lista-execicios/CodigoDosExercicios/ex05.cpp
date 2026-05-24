/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Gerar e exibir os múltiplos de um número até um limite informado pelo usuário.
*/

#include <iostream>
using namespace std;

int main() {
    int numeroFinal;
    int multiplo;
    int resultado;

    cout << "fala a parada final: ";
    cin >> numeroFinal;
    cout << "um multiplo agr: ";
    cin >> multiplo;

    for (int i = 1; i < numeroFinal; i++) {
        resultado = multiplo * i;
        cout << resultado << " ";
    }

    return 0;
}
