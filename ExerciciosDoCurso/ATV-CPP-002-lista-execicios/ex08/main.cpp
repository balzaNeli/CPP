/*
Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
    Finalidade:Ler o raio de 5 círculos.
               Calcular e exibir a soma das áreas.
               Criar uma função para calcular a área do círculo.
*/


#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

//assinaturas
void areaCirculo(vector <double> &circulo);

int main() {
    double raio;
    vector <double> circulo;

    for (int i = 0; i < 5; i++) {
        cout << "digite o raio de um circulo: ";
        cin >> raio;
        circulo.push_back(raio);
    }

    areaCirculo(circulo);
    return 0;
}

void areaCirculo(vector <double> &circulo) {
    double area;
    vector <double> areasArmazenadas;

        for (int i; i < circulo.size(); i++) {
            area = 3.14 * (circulo[i] * circulo[i]);
            areasArmazenadas.push_back(area);
        }

        double somaDasAreas = accumulate(areasArmazenadas.begin(), areasArmazenadas.end(), 0.0);
        cout << "soma das areas dos circulos digitados: " << somaDasAreas << "" << endl;

}
