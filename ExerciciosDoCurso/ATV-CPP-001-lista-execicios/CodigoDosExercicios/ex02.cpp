/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Calcular e exibir as potências de um número a partir do expoente 0 até um limite baseado no valor informado.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero;
    double potencia = 0;

    cout << "escreva seu numero: ";
    cin >> numero;

    do {
        double resultado = pow(numero, potencia);
        potencia++;
        cout << "\n respota é: " << resultado;

    } while (numero > potencia);

    return 0;
}
