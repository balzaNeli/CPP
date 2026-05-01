/*
   Autores: Caua Balzaneli
   Data: 25/04/2026
   Finalidade: Calculadora
*/


#include <iostream>
using namespace std;



int main() {
    int num, num2, numFinal;
    char operador;
    cout << "Qual operador? (+, -, *, /): ";
    cin >> operador;
    cout << "Digite dois numeros: ";
    cin >> num >> num2;



    switch (operador)
    {
    case '+':
        numFinal = num + num2;
        break;
    case '-':
        numFinal = num - num2;

        break;
    case '*':
        numFinal = num * num2;

        break;

    case '/':
        if (num2 == 0)
        {
           cout << "Erro: divisao por zero!" << endl;
            return 1;
        }
        
        numFinal = num / num2;

        break;

    default:
        cout << "Operador invalido!";
        return 1;
        
    }

    cout << "Valor final da operacao: " << numFinal << endl;

    return 0;
}