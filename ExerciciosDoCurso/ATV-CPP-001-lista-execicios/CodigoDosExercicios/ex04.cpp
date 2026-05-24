/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Ler 10 números, armazená-los em um vetor e identificar o maior e o menor valor.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vecNumeros;
    int numero;
    int i = 0;

    do {
        cout << "digite um numero: ";
        cin >> numero;
        vecNumeros.push_back(numero);
        i++;
    } while (i < 10);

    int menor = vecNumeros[0];
    int maior = vecNumeros[0];

    for (float n : vecNumeros) {
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
    }

    cout << "maior: " << maior << endl;
    cout << "menor: " << menor << endl;

    return 0;
}
