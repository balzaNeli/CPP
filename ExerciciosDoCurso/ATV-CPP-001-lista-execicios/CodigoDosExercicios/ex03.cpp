/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Ler números positivos, armazená-los em um vetor, calcular sua soma e exibir os valores informados.
*/

#include <iostream>
#include <vector>
using namespace std;

class soma {
public:
    float numero;
    float resultado = 0;
    vector<float> vecNumeros;

    void calculo() {
        do {
            cout << "diga um numero: ";
            cin >> numero;
            if (numero >= 0) {
                vecNumeros.push_back(numero);
                resultado = resultado + numero;
            }
        } while (numero >= 0);

        cout << "soma dos numeros positivos: " << resultado;
        cout << "\nnumeros usados: ";
        for (int posicao : vecNumeros) {
            cout << posicao << " ";
        }
    }    
};

int main() {
    soma objCalc;
    objCalc.calculo();
    return 0;       
}
