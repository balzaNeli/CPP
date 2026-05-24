/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/05/2026
   Finalidade:  Ler 20 letras em um vetor.
                Contar as vogais (a, e, i, o, u)
                Armazenar em um vetor de 5 posições e exibir.
*/

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // Criação dos vetores
    vector<char> letras(20);          // Vetor para armazenar as 20 letras
    vector<int> contagemVogais(5, 0); // Vetor de 5 posições inicializado com zeros

    cout << "Digite 20 letras:" << endl;

    // Leitura e Contagem
    for (int i = 0; i < 20; i++)
    {
        cout << "Letra " << (i + 1) << ": ";
        cin >> letras[i];
        //deixar tudo minusculo
        char letraAtual = tolower(letras[i]);


        //Switch case para armazenar quantas vezes a vogal apareceu
        switch (letraAtual)
        {
        case 'a':
            contagemVogais[0]++;
            break;
        case 'e':
           contagemVogais[1]++;
            break;
        case 'i':
            contagemVogais[2]++;
            break;
        case 'o':
            contagemVogais[3]++;
            break;
        case 'u':
            contagemVogais[4]++;
            break;
        default:
            break;
        }
    }
    //Print das contagens
    cout << "\n--- Resultado da Contagem ---" << endl;
    cout << "Vogal 'A': " << contagemVogais[0] << endl;
    cout << "Vogal 'E': " << contagemVogais[1] << endl;
    cout << "Vogal 'I': " << contagemVogais[2] << endl;
    cout << "Vogal 'O': " << contagemVogais[3] << endl;
    cout << "Vogal 'U': " << contagemVogais[4] << endl;
    return 0;
}