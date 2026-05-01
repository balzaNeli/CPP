/*
   Autores: Caua Balzaneli
   Data: 01/05/2026
   Finalidade: Verificar se um número inteiro é primo contando a quantidade de divisores.
*/


#include <iostream>
using namespace std;
#include <string>

//=====ASSINATURAS=====
void isPrimo(int divisores);



int main() {
    int num, divisores = 0;

    cout << "Digite um numero: ";
    cin >> num;

    
    

    for (int i = 1; i < num; i++){
        if(num % i == 0){
            divisores++;
        }
    }



    cout << "========VERIFICADOR DE PRIMO========" << endl;
    cout << "A quantidade de divisores eh: " << divisores << endl;
    isPrimo(num);
    cout << "\n========SAINDO..............========";


    return 0;
}


void isPrimo(int divisores){

    if(divisores <= 1){
        cout << "O numero eh primo";
    }else if (divisores % 2 == 0)
    {
        cout << "O numero nao eh primo";
    }else{
        cout << "O numero nao eh primo";
    }
}
