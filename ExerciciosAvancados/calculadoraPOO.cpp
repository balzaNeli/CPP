/*
   Autores: Caua Balzaneli
   Data: 25/04/2026
   Finalidade: calculadora POO (PROGRAMACAO ORIENTADA A OBJETOS)
*/


#include <iostream>
#include <string>
using namespace std;

class Calculadora {
public:
    void adicao();
    void subtracao();
    void divisao();
    void multiplicacao();
    void isPrimo();
    string primo(int divisores);
};

int main() {
    int respostaUsuario;
    Calculadora calc;
    do {
        cout << "\n===== CALCULADORA =====" << endl;
        cout << "1. Adicao"        << endl;
        cout << "2. Subtracao"     << endl;
        cout << "3. Divisao"       << endl;
        cout << "4. Multiplicacao" << endl;
        cout << "5. Verificador de Primo"<< endl;
        cout << "0. Sair"          << endl;
        cout << "\n=======================" << endl;
        cout << "Opcao: ";
        cin >> respostaUsuario;

        switch (respostaUsuario) {
            case 1: calc.adicao();          break;
            case 2: calc.subtracao();       break;
            case 3: calc.divisao();         break;
            case 4: calc.multiplicacao();   break;
            case 5: calc.isPrimo();         break;
            case 0: cout << "Saindo..." << endl; break;
            default: cout << "Opcao invalida!" << endl;
        }
    } while (respostaUsuario != 0);

    return 0;
}

void Calculadora::adicao() {
    int qtdNum;
    cout << "Quantos numeros?: ";
    cin >> qtdNum;
    //verificador de erros
    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    double soma = 0;
    //faz a operacao
    for (int i = 0; i < qtdNum; i++) {
        double num;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num;
        soma += num;
    }

    cout << "\n===== RESULTADO =====" << endl;
    cout << "Soma: " << soma << endl;
}


void Calculadora::subtracao() {
    int qtdNum;
    cout << "Quantos numeros?: ";
    cin >> qtdNum;
    //verificador de erros
    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    double resultado;
    //faz a operacao
    for (int i = 0; i < qtdNum; i++) {
        double num;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num;

        if (i == 0)
            resultado = num;      
        else
            resultado -= num;     
    }

    cout << "\n===== RESULTADO =====" << endl;
    cout << "Subtracao: " << resultado << endl;
}

void Calculadora::divisao() {
    int qtdNum;
    
    cout << "Quantos numeros?: ";
    cin >> qtdNum;
    //verificador de erros
    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    double resultado;
    //faz a operacao
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

void Calculadora::multiplicacao() {
    int qtdNum;
    cout << "Quantos numeros?: ";
    cin >> qtdNum;
    //verificador de erros
    if (qtdNum <= 0) {
        cout << "Quantidade invalida!" << endl;
        return;
    }

    double mul = 1;  
    //faz a operacao            
    for (int i = 0; i < qtdNum; i++) {
        double num;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num;
        mul *= num;
    }

    cout << "\n===== RESULTADO =====" << endl;
    cout << "Multiplicacao: " << mul << endl;
}

string Calculadora::primo(int divisores) {
    if (divisores == 2) {
        return "O numero EH primo.";
    } else {
        return "O numero NAO eh primo.";
    }
    
}

void Calculadora::isPrimo(){
    int num, divisores = 0;
    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 1; i <= num; i++){
        if(num % i == 0){
            divisores++;
        }
    }

    cout << "========VERIFICADOR DE PRIMO========" << endl;
    cout << "A quantidade de divisores eh: " << divisores << endl;
    cout << primo(divisores) << endl;
    cout << "\n========SAINDO..............========";
    
}