/*
Autores: Caua Balzaneli, Valentino Hoehne
   Data: 28/05/2026
   Finalidade: Casino Number Game
*/

#include <windows.h> // deixar o terminal bonitinho
#include <iostream> // para cout, cin e etc
#include <random>
#include <algorithm> // necessário para usar ordenar
using namespace std; // para evitar ficar usando std::

int Jogo();

int Jogo(int saldo);

int main() {
   SetConsoleOutputCP(CP_UTF8);
   int respostaUsuario;
   int saldo = 1000;
   do {
      cout << "\n╔═══════════════CASINO═══════════════╗" << endl;
      cout << "║                                    ║"   << endl;
      printf("║►            Saldo: %-2d$           ║", saldo);
      cout << "║                                    ║"   << endl;
      cout << "║                                    ║"   << endl;
      cout << "║► 1. Deseja jogar o jogo?           ║"   << endl;
      cout << "║► 0. Sair                           ║"   << endl;
      cout << "╚════════════════════════════════════╝"   << endl;
      cout << "Opcao: ";
      cin >> respostaUsuario;

      switch (respostaUsuario) {
         case 1: Jogo(saldo);                 break;
         case 0: cout << "Saindo..." << endl; break;
         default: cout << "Opcao invalida!" << endl;
      }
   } while (respostaUsuario != 0);

   return 0;
}

int Jogo(int saldo) {
   //Variaveis
   int aposta;

   //Definindo sistemas
   system("cls");
   random_device rd;
   mt19937 gen(rd());

   // Define o intervalo fechado [1, 9]
   uniform_int_distribution<int> distrib(1, 9);

   // Sorteia e imprime os numeros
   int num1 = distrib(gen);
   int num2 = distrib(gen);
   int num3 = distrib(gen);

   cout << "Saldo atual: " << saldo << "$" << endl;
   cout << "Quanto deseja apostar? (max: " << saldo << "$): ";
   cin >> aposta;
   if (aposta <= 0 || aposta > saldo)
   {
      cout << "Aposta invalida! Voltando ao menu." << endl;
      return saldo;
   }
   else
   {
      saldo -= aposta;
   }
   if (num1 == num2) {
      cout << "Parabéns você ganhou 2x!";

   }
   system("cls");
   cout << "O numero sorteado foi: " << num1 << num2 << num3 << endl;
   return saldo;
}