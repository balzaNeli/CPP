/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade:  Ler 10 números em um vetor.
                Substituir números negativos por zero.
                Exibir o vetor.
*/


#include <iostream>
#include <vector>
using namespace std;



int main() {
    //Declaracao de variaveis/vetor
    int nums[10];
    int entrada;


    //Laço de repeticao para ler os 10 numeros e guardar em um vetor
    for(int i = 0; i < 10; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> entrada;

        nums[i] = entrada;
    }
    //Laço de repeticao para verificar se é negativo
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] < 0)
        {
            nums[i] = 0;
        }
        
    }
    
    //Laço de repeticao para printar o vetor
    cout << "\nVetor final: ";
    for (int i = 0; i < 10; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;





    return 0;
}