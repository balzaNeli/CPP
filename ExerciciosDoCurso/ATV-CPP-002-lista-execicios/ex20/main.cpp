/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/05/2026
   Finalidade:  Ler 10 números em um vetor.
                Exibir o terceiro menor valor. 
*/


#include <iostream> // para cout, cin e etc
#include <vector>    // para usar vetores
#include <algorithm> // necessário para usar ordenar
using namespace std; // para evitar ficar usando std::



int main() {
    //Definindo vetores:
    vector<int> numeros(10);

    // Lendo 10 numeros no vetor:

    cout << "Digite os numeros: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    //Ordenando em ordem crescente para ficar mais facil de achar o terceiro menor:

    sort(numeros.begin(), numeros.end());

    //Exibindo terceiro menor valor:
    cout << "O terceiro numero menor eh: " << numeros[2];
    
    return 0;
}