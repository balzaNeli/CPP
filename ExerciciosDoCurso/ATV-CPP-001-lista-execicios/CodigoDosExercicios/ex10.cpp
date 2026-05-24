/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Simular um jogo de adivinhação. O programa gera um número
   aleatório e o jogador precisa acertá-lo. A cada tentativa, o programa
   informa se o palpite é muito alto, muito baixo ou correto. Quando acertar,
   exibe a quantidade de palpites.
*/

#include <iostream>
#include <random>

using namespace std;

int main() {
    //Definindo variaveis
    int qtdPalpites = 0;
    int palpite, quanto, emQuanto;
    
    cout << "Numero base 0: ";
    cout << "\nNumero limite: ";
    cin >> emQuanto;     
	
	do {
		cout << "Favor digitar um numero maior: ";
    	cin >> emQuanto; 
		
	} while(emQuanto < 0);
	

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(0, emQuanto);
	int num = dist(gen);



    

    do {
        cout << "Digite um palpite: ";
        cin >> palpite;

        qtdPalpites++;

        if (palpite < num) {
            cout << "Palpite muito baixo." << endl;
        }
        else if (palpite > num) {
            cout << "Palpite muito alto." << endl;
        }
        else {
            cout << "Palpite correto! Voce acertou em "
                 << qtdPalpites << " tentativas." << endl;
        }
	
    } while (palpite != num);
		cout << "O numero sorteado foi:" << num;
	
    return 1;
}
