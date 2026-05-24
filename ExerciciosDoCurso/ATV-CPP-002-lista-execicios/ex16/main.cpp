/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:  Ler 15 números em um vetor.
                Exibir o índice:
                    Do menor valor
                    Do maior valor 
*/


#include <iostream>
using namespace std;



int main() {
    //Criacao do vetor (array) e variaveis
    int indiceMenor = 0;
    int indiceMaior = 0;
    int arr[15];

    //Laço de repetição para ler os 15 numeros
    for(int i = 0; i < 15; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Laço de repetição para verificar o menor e maior numero
    for(int i = 1; i < 15; i++){
        if(arr[i] < arr[indiceMenor]){
            indiceMenor = i;
        }
        if(arr[i] > arr[indiceMaior]){
            indiceMaior = i;
        }
    }

    // Cout nos indices
    cout << "O indice do menor valor eh: " << indiceMenor << " (valor: " << arr[indiceMenor] << ")" << endl;
    cout << "O indice do maior valor eh: " << indiceMaior << " (valor: " << arr[indiceMaior] << ")" << endl;

    return 0;
}