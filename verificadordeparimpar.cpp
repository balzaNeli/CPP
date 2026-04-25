/*
   Autores: Caua Balzaneli
   Data: 24/05/2026
   Finalidade: Leia vários números (até o usuário digitar 0) e diga se cada um é par ou ímpar. 
*/


#include <iostream>
using namespace std;



int main() {
    int num;
    
    while (num != 0)
    {
        cout << "Digite um numero: ";
        cin >> num;
        if (num % 2 == 0)
        {
            cout << "Esse numero e par" << endl;
        }else{
            cout << "Esse numero e impar" << endl;
        }
        
    }
    



    return 0;
}