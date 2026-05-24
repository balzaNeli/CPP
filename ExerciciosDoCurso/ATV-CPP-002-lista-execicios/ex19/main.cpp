/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/05/2026
   Finalidade:  Ler 10 números.
                    Separar:
                        Pares em um vetor
                        Ímpares em outro vetor
                Ordenar os dois vetores.
                Somar os elementos e armazenar em um terceiro vetor.
                Exibir todos os vetores.
*/

#include <iostream>  // para cout, cin e etc
#include <vector>    // para usar vetores
#include <algorithm> // necessário para usar ordenar
using namespace std; // para evitar ficar usando std::

int main()
{
    // Definindo vetores:

    vector<int> temp(10);
    vector<int> pares;
    vector<int> impares;
    vector<int> soma;

    // Lendo 10 numeros:

    cout << "Digite os numeros: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> temp[i];
    }

    // Separando em par e impar:

    for (int i = 0; i < 10; i++)
    {
        if (temp[i] % 2 == 0)
        {
            pares.push_back(temp[i]);
        }
        else
        {
            impares.push_back(temp[i]);
        }
    }

    // Ordenando os vetores:

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end());

    // Somando em um terceiro vetor:
    int limite = min(pares.size(), impares.size());

    for (int i = 0; i < limite; i++)
    {
        soma.push_back(pares[i] + impares[i]);
    }
    // Exibindo vetores:

    cout << "VETOR DOS PARES: " ;
    for (int numero : pares)
    {
        cout << numero << ", ";
    }
    cout << "\n";
    cout << "VETOR DOS IMPARES: " ;
    for (int numero : impares)
    {
        cout << numero << ", " ;
    }
    cout << "\n";
    cout << "VETOR SOMADO: " ;
    for (int numero : soma)
    {
        cout << numero << ", ";
    }
    return 0;
}