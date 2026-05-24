/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/05/2026
   Finalidade:  Ler 10 números em um vetor.
                Criar outro vetor com os sinais invertidos.
                Exibir a soma dos valores positivos dos dois vetores.
*/

#include <iostream>
using namespace std;

int main()
{
    // definindo vetor e variaveis
    int num[10];
    int numinvertido[10];
    int soma = 0;

    // laço de repetição para ler 10 numeros em um vetor
    for (int i = 0; i < 10; i++)
    {
        cout << "digite o numero " << i + 1 << ": ";
        cin >> num[i];
    }


    // laço de repetição para criar outro vetor com sinais invertidos
    for (int i = 0; i < 10; i++)
    {
        numinvertido[i] = num[i] * -1;
    }

    // exibindo o vetor original
    cout << "Vetor original: ";
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    // exibindo o vetor com sinais invertidos
    cout << "Vetor invertido: ";
    for (int i = 0; i < 10; i++)
    {
        cout << numinvertido[i] << " ";
    }
    cout << endl;


    //2 laços de repetição para mostrar os vetores ao usuario
    cout << "Vetor padrao: ";
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << ", ";
        
    }
    cout << "Vetor invertido: ";
    for (int i = 0; i < 10; i++)
    {
        cout << numinvertido[i] << ", ";
        
    }


    // dois laços de repetição para verificar quantos
    for (int i = 0; i < 10; i++)
    {

        if (num[i] > 0)
        {
            soma += num[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (numinvertido[i] > 0)
        {
            soma += numinvertido[i];
        }
    }



    cout << "A soma dos numeros positivos eh: " << soma << endl << endl;
    return 0;
}