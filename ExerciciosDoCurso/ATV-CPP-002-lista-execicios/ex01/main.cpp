/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade: Ler o sexo e a altura.
               Calcular o peso ideal:
                  Masculino: 72,7 × altura - 58
                  Feminino: 62,1 × altura - 44,7
               Criar uma função para cada caso.
*/

#include <iostream>

using namespace std;

bool isImpar(int num2);

int main(){
    int num, somaImpar = 0;
    cout << "Digite um numero: ";
    cin >> num;
    
    
    
    for(int i = 0; i <= num; i++){
        if(i % 2 != 0)
        somaImpar += i;
        cout << "o numero: " << i << " é: "<< boolalpha;
        cout << isImpar(i) << endl;

        
        
    }

    cout << "A soma dos impar é: " << somaImpar;

    
    
    return 0;
}

bool isImpar(int num2){
    if(num2 % 2 != 0){
        return true;
    } else {
        return false;
    }
}
