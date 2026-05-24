
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 12/05/2026
   Finalidade: Ler o sexo e a altura.
               Calcular o peso ideal:
                 Masculino: 72,7 × altura - 58
    '            Feminino: 62,1 × altura - 44,7
               ➡️ Criar uma função para cada caso.
*/

#include <iostream>
#include <string>
using namespace std;

int pesoIdealHomem(float altura);
int pesoIdealMulher(float altura);


int main() {
    
    string sexo;
    int peso;
    float altura;        

    do {
        cout << "Digite seu sexo (homem ou mulher): ";
        cin >> sexo;
    } while (sexo != "homem" && sexo != "mulher");
    
    cout << "altura (em cm): ";
    cin >> altura;
    
    cout << "seu peso: ";
    cin >> peso;
    
    if(sexo == "homem"){
        cout << "peso ideal: " << pesoIdealHomem(altura);
    } else if (sexo == "mulher"){
        cout << "peso ideal: " << pesoIdealMulher(altura);
    }
    


    return 0;
}

int pesoIdealHomem(float altura) {
    float pesoIdeal = (72.7 * (altura / 100.0) - 58);
    return pesoIdeal;
}

int pesoIdealMulher(float altura) {
    float pesoIdealMulher = (62.1 * (altura / 100) - 44.7);
    return pesoIdealMulher;
}

