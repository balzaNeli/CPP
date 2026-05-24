/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Ler um número entre 50 e 100. Exibir a sequência de Fibonacci até esse número.
*/


#include <iostream>
using namespace std;



int main() {
    // Ler um numero entre 50 e 100, verificador
    int num;
    int a = 0, b = 1, proximo, i;

    do {
        cout << "Digite um numero entre 50 e 100: ";
        cin >> num;
    } while (num < 50 || num > 100);
    

    // Sequencia de Fibonacci, o proximo e a soma dos dois anteriores
    for (i = 0; i < num; i++) {
        cout << a;
        proximo = a + b;
        a = b;
        b = proximo;
        cout << "\n";
    }

    return 0;
}