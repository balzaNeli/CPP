/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 23/04/2026
   Finalidade: Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos.
*/


#include <iostream>
using namespace std;



int main() {
    int num, soma = 0, multiplicacao = 1;
    
    do {
        cout << "Digite um número: ";
        cin >> num;
        soma += num;
        multiplicacao *= num;
    } while (soma <= 100);
    
    cout << "A multiplicação dos números lidos é: " << multiplicacao << endl;
    
    return 0;
}