/*
   Autores: Caua Balzaneli
   Data: 25/04/2026
   Finalidade: Peça um número ao usuário e exiba a tabuada completa (de 1 a 10).
*/


#include <iostream>
using namespace std;



int main() {
    int num, tabuada;

    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 1; i < 11; i++)
    {
        tabuada = num * i;
        cout << tabuada << "\t";
        tabuada = num;
    }
    
    return 0;
}