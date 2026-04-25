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

    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    double soma = 0;
    for (int i = 0; i < qtdNum; i++) {
        double num;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num;
        soma += num;
    }

    cout << "\n===== RESULTADO =====" << endl;
    cout << "Soma: " << soma << endl;
}

void subtracao() {
    int qtdNum;
    cout << "Quantos numeros?: ";
    cin >> qtdNum;

    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    double resultado;
    for (int i = 0; i < qtdNum; i++) {
        double num;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num;

        if (i == 0)
            resultado = num;      // primeiro numero e o valor inicial
        else
            resultado -= num;     // subtrai os demais
    }

    cout << "\n===== RESULTADO =====" << endl;
    cout << "Subtracao: " << resultado << endl;
}

void divisao() {
    int qtdNum;
    cout << "Quantos numeros?: ";
    cin >> qtdNum;

    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    double resultado;
    for (int i = 0; i < qtdNum; i++) {
        double num;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num;

        if (i == 0) {
            resultado = num;      
        } else {
            if (num == 0) {       
                cout << "Erro: divisao por zero!" << endl;
                return;
            }
            resultado /= num;
        }
    }

    cout << "\n===== RESULTADO =====" << endl;
    cout << "Divisao: " << resultado << endl;
}

void multiplicacao() {
    int qtdNum;
    cout << "Quantos numeros?: ";
    cin >> qtdNum;

    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    double mul = 1;              // começa em 1, nao em 0
    for (int i = 0; i < qtdNum; i++) {
        double num;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num;
        mul *= num;
    }

    cout << "\n===== RESULTADO =====" << endl;
    cout << "Multiplicacao: " << mul << endl;
}

int main() {
    int respostaUsuario;
    do {
        cout << "\n===== CALCULADORA =====" << endl;
        cout << "1. Adicao"        << endl;
        cout << "2. Subtracao"     << endl;
        cout << "3. Divisao"       << endl;
        cout << "4. Multiplicacao" << endl;
        cout << "0. Sair"          << endl;
        cout << "\n=======================" << endl;
        cout << "Opcao: ";
        cin >> respostaUsuario;

        switch (respostaUsuario) {
            case 1: adicao();        break;
            case 2: subtracao();     break;
            case 3: divisao();       break;
            case 4: multiplicacao(); break;
            case 0: cout << "Saindo..." << endl; break;
            default: cout << "Opcao invalida!" << endl;
        }
    } while (respostaUsuario != 0);

    return 0;
}