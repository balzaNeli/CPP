/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Calcular a potência usando repetição.
               Criar uma função para o cálculo.


*/

#include <iostream>
#include <cmath>
using namespace std;

int pot();


int main(){
    pot();
}

int pot(){
    int base;
    int expoente;
    int atequal;
    int resultado;
    
    cout << "base: ";
    cin >> base;
    
    cout << "expoente: ";
    cin >> expoente;
    
    
    for(int i = 1; i <= expoente; i++){
        resultado = pow(base, i);
        cout << base << " ** "<< i << " = "<< resultado << endl;

    }
    

    return 0;
}
