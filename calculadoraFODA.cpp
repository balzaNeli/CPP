/*
   Autores: Caua Balzaneli
   Data: 25/04/2026
   Finalidade: calculadora foda
*/

#include <iostream>
using namespace std;

void adicao() {
    int qtdNum;
    cout << "Quantos numeros?: ";
    cin >> qtdNum;

    double soma = 0;

    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    for (int i = 0; i < qtdNum; i++) {
        double num;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num;

        soma += num;
   
    }            



    cout << "\n===== RESULTADO =====" << endl;
    cout << "Soma:   " << soma   << endl;
}

int main() {
    int respostaUsuario;
    do 
    {
        cout << "\n===== CALCULADORA =====" << endl;
        cout << "1. Adicao" << endl;
        cout << "2. Subtracao"   << endl;
        cout << "3. Divisao"    << endl;
        cout << "4. Multiplicacao"   << endl;
        cout << "0. Sair"              << endl;
        cout << "Opcao: ";
        cin >> respostaUsuario;

        switch (respostaUsuario) {
            case 1: adicao(); break;
            case 0: cout << "Saindo..." << endl; break;
            default: cout << "Opcao invalida!" << endl;
        }
    }while (respostaUsuario != 0);
    
    


    return 0;    
}