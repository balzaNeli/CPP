/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:	Ler 10 nomes em um vetor.
				Ordenar em ordem decrescente e exibir em ordem crescente.
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	//Definindo o array
	string nomes[10];
	
	// Laço de repetição para ler os nomes
	for(int i = 0; i < 10; i++){
		cout << "Digite o nome " << i + 1 << ": ";
		cin >> nomes[i];
		
	}
	//Sort para ordenar a array
	sort(nomes, nomes + 10, greater<string>());

	//Laço de repetição para mostrar cada elemento do array na ordem
	for(int i = 9; i >= 0; i--){
	    cout <<  nomes[i] << endl;
	}
	
	
    return 0;
}
