
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler dois números inteiros e calcular:
                Adição
                Subtração
                Multiplicação
                Divisão
                Criar uma função para cada operação.

 
*/

#include <iostream>
using namespace std; 

//assinaturas

void soma(float numero, float numeroOperador);
void divisao(float numero, float numeroOperador);
void subtracao(float numero, float numeroOperador);
void multiplicacao(float numero, float numeroOperador);

int main() {
    
    float numero;
    float numeroOperador;
    
    cout << "digite um numero: ";
    cin >> numero;
    
    cout << "digite o outro da operação: ";
    cin >> numeroOperador;
    
    
    soma(numero, numeroOperador);
    divisao(numero, numeroOperador);
    subtracao(numero, numeroOperador);
    multiplicacao(numero, numeroOperador);   
    
    return 0;
}



void soma(float numero, float numeroOperador ){

    
    int soma = numero + numeroOperador;
    
    cout << "soma: " << soma << endl;

}


void subtracao(float numero, float numeroOperador ){

    
    int soma = numero - numeroOperador;
    
    cout << "subtracao: " << soma << endl;

}


void divisao(float numero, float numeroOperador ){

    
    int soma = numero / numeroOperador;
    
    cout << "divisao: " << soma << endl;
}

void multiplicacao(float numero, float numeroOperador ){

    
    int soma = numero * numeroOperador;
    
    cout << "multiplicacao: " << soma << endl;

}
