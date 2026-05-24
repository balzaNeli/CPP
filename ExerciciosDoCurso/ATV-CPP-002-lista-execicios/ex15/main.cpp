/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:  Ler 20 números em um vetor.
                Exibir o índice do primeiro número negativo.
*/


#include <iostream>
using namespace std;



int main() {
    //Criacao do vetor(array)
    int arr[20];


    //Laço de repetição para ler os 20 numeros
    for(int i = 0; i < 20; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    //Laço de repetição para achar o primeiro numero negativo
    for(int i = 0; i < 20; i++){
        int numero = arr[i];
        if(numero < 0){
            cout << "O indice do primeiro numero negativo eh: " << i;
        }
    }





    return 0;
}