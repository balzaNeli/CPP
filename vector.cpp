/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Crie um vetor de 10 inteiros lidos pelo usuário e encontre o maior e o menor valor.
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Quantos numeros? ";
    cin >> n;

    vector<int> numeros(n);

    // leitura
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // inicializa com o primeiro elemento
    int maior = numeros[0];
    int menor = numeros[0];

    // percorre a partir do segundo (índice 1)
    for (int i = 1; i < n; i++) {
        if (numeros[i] > maior) maior = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}