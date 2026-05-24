/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade: Ler um número.
               Exibir o dia da semana correspondente.
               Criar uma função para essa verificação.


*/


#include <iostream>
using namespace std;

//assinaturas
void verifDias();


int main() {

    
    verifDias();
    
    return 0;
}

void verifDias(){
    int dia;
    int verif;
    int diaDHj;
    bool divido = false;
    
    cout << "q dia é hj: ";
    cin >> diaDHj;
    cout << "dia q vc quer: ";
    cin >> dia;
    

      
        if ((diaDHj + dia) % 7 == 0){
            cout << "segunda" << endl;
            divido = true;
            
        }else if ((diaDHj + dia) % 7 == 1){
            cout << "terca" << endl;
            divido = true;
        }else if ((diaDHj + dia) % 7 == 2){
            cout << "quarta" << endl;
            divido = true;
        }else if ((diaDHj + dia) % 7 == 3){
            cout << "quinta" << endl;
            divido = true;
        
        }else if ((diaDHj + dia) % 7 == 4){
            cout << "sexta" << endl;
            divido = true;
        }else if ((diaDHj + dia) % 7 == 5){
            cout << "sabado" << endl;
            divido = true;
        
        }else if ((diaDHj + dia) % 7 == 6){
            cout << "domingo" << endl;
        } 
}
