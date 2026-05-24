#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data:21/05/2026
   Finalidade:  Ler uma palavra.
				Verificar se é palíndromo.
				Criar uma função que retorne verdadeiro ou falso.
*/


//assinaturas
bool verif(string palavra, string palavraInvertida);
//




int main() {	
	string palavra;
	string palavraInvertida;
	cout << "digite uma palavra (NAO PODE FRASE): ";
	cin >> palavra;
			
	palavraInvertida = palavra;	
	reverse(palavraInvertida.begin(), palavraInvertida.end());
	
	
	if (verif(palavra, palavraInvertida) == true){
		cout << "eh um palindromo";
	} else if (	verif(palavra, palavraInvertida) == false){
		cout << "n eh um palindromo";
	}

 return 0;	
}

bool verif(string palavra, string palavraInvertida){
	if (palavra == palavraInvertida){
    	return true;
    } else {
    	return false;
    }
}
