/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 12/05/2026
   Finalidade:  Ler 20 letras em um vetor.
                Ler uma letra e contar quantas vezes ela aparece.
*/


#include <iostream>
#include <string>
using namespace std;



int main() {
    //Definindo variaveis e arrays
    char arr[20];
    int qntsVezes;
    char letra;
    // Laço de repetição para ler as letras no array
    for(int i = 0; i < 20; i++){
        cout << "Digite a letra " << i+1 << ": ";
        cin >> arr[i];
    }
    //Ler a letra para contar
    cout << "Digite a letra para contar: ";
    cin >> letra;
    
    //Laço de repetição para contar quantas vezes a letra aparece
    for (int i = 0; i < 20; i++) {
        if (arr[i] == letra) {
            qntsVezes++;
        }
    }
    cout << "";
    return 0;
}
