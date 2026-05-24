/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 23/04/2026
   Finalidade: Ler a quantidade de pessoas e ler a altura dessas pessoas. Calcular e exibir a altura média de todas as pessoas.


*/


#include <iostream>
using namespace std;



int main() {
    int quantidadePessoas;
    float altura, somaAltura = 0.0, alturaMedia;
    cout << "Digite a quantidade de pessoas: ";
    cin >> quantidadePessoas;
    for (int i = 1; i <= quantidadePessoas; i++){
        cout << "Digite a altura da pessoa" << i << ": " << endl;
        cin >> altura;
        somaAltura += altura;
    }
    alturaMedia = somaAltura / quantidadePessoas;
    cout << "A altura média das pessoas é: " << alturaMedia << endl;
    return 0;
}