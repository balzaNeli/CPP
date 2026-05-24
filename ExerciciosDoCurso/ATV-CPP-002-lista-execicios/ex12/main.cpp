/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade:  Ler 15 números em um vetor.
                Contar e exibir:

                Quantidade de pares
                Quantidade de ímpares
*/


#include <iostream>
using namespace std;



int main() {
    //Declaracao de variaveis/vetor
    int nums[15];
    int entrada;
    int somaPar = 0, somaImpar = 0;

    //Laço de repeticao para ler os 15 numeros e guardar em um vetor
    for(int i = 0; i < 15; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> entrada;

        nums[i] = entrada;
    }
    //Laço de repeticao para Contar e exibir: quantidade de pares e quantidade de ímpares
    for (int i = 0; i < 15; i++)
    {
        if(nums[i] % 2 == 0){
            somaPar += 1;
        }else{
            somaImpar += 1;
        }
    }
    // Cout nas somas
    cout << "São " << somaImpar << "numeros impares" << endl;
    cout << "São " << somaPar << "numeros pares" << endl;
    return 0;
}