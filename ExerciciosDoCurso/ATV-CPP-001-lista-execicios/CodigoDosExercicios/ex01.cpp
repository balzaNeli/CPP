/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Verificar se um número inteiro é primo contando a quantidade de divisores.
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int divido = 0;

    cout << "seu numero inteiro: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "n é primo";
    } else {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divido++;
            }
        }

        if (divido == 2) {
            cout << "primo";
        } else {
            cout << "n é primo";
        }
    }
}
