/*
Autores: Caua Balzaneli, Valentino Hoehne
   Data: 22/05/2026
   Finalidade:  Ler 5 números.
                Verificar se estão:
                    Em ordem crescente
                    Em ordem decrescente
                    Não ordenados
                Criar uma função para essa análise.
*/

#include <iostream>
#include <vector>
using namespace std;

void lerNumero(float numero, vector<float> lista);

int main()
{
    vector<float> lista;
    float numero = 0;

    lerNumero(numero, lista);

    return 0;
}

void lerNumero(float numero, vector<float> lista) {
    bool crescente = true;
    bool decrescente = true;
    bool iguais = true;

    for (int i = 0; i < 5; i++){
        cout << "digite um numero: ";
        cin >> numero;

        lista.push_back(numero);
    }




    for (int i = 0; i < lista.size() - 1; i++) {
        if (lista[i] != lista[i + 1]) {
            iguais = false;
        }

        if (lista[i] > lista[i + 1]) {
            crescente = false;
        }

        if (lista[i] < lista[i + 1]) {
            decrescente = false;
        }
    }

    if (iguais == true) {
        cout << "todos os valores sao iguais";
    } else if (decrescente == true) {
        cout << "decrescente";
    } else if (crescente == true) {
        cout << "crescente";
    }else {
        cout << "n ordenado";
    }

}
