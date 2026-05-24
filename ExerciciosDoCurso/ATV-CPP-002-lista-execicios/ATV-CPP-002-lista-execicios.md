# Exercício 1
### Ler um número inteiro, exibir a soma dos números ímpares até o número lido e criar uma função que retorne verdadeiro para números ímpares.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade: Ler um número. Exiba a soma de ímpares de zero até o número lido. Criar uma função que retorne verdadeiro para números ímpares.
*/
#include <iostream>
using namespace std;
bool isImpar(int num2);
int main(){
    int num, somaImpar = 0;
    cout << "Digite um numero: ";
    cin >> num;
    
    for(int i = 0; i <= num; i++){
        if(i % 2 != 0)
        somaImpar += i;
        cout << "o numero: " << i << " é: "<< boolalpha;
        cout << isImpar(i) << endl;
    }
    cout << "A soma dos impar é: " << somaImpar;
    
    return 0;
}
bool isImpar(int num2){
    if(num2 % 2 != 0){
        return true;
    } else {
        return false;
    }
}
```

---

# Exercício 2
### Calcular a potência usando repetição e criar uma função para o cálculo.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Calcular a potência usando repetição.
               Criar uma função para o cálculo.
*/
#include <iostream>
#include <cmath>
using namespace std;
int pot();
int main(){
    pot();
}
int pot(){
    int base;
    int expoente;
    int atequal;
    int resultado;
    
    cout << "base: ";
    cin >> base;
    
    cout << "expoente: ";
    cin >> expoente;
    
    for(int i = 1; i <= expoente; i++){
        resultado = pow(base, i);
        cout << base << " ** "<< i << " = "<< resultado << endl;
    }
    
    return 0;
}
```

---

# Exercício 3
### Ler o sexo e a altura. Calcular o peso ideal: Masculino: 72,7 × altura - 58 / Feminino: 62,1 × altura - 44,7. Criar uma função para cada caso.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 12/05/2026
   Finalidade: Ler o sexo e a altura.
               Calcular o peso ideal:
                 Masculino: 72,7 × altura - 58
                 Feminino: 62,1 × altura - 44,7
               Criar uma função para cada caso.
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
```

---

# Exercício 4
### Ler dois números inteiros e calcular: Adição, Subtração, Multiplicação, Divisão. Criar uma função para cada operação.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler dois números inteiros e calcular:
                Adição
                Subtração
                Multiplicação
                Divisão
                Criar uma função para cada operação.
*/

#include <iostream>
using namespace std; 

//assinaturas
void soma(float numero, float numeroOperador);
void divisao(float numero, float numeroOperador);
void subtracao(float numero, float numeroOperador);
void multiplicacao(float numero, float numeroOperador);

int main() {
    
    float numero;
    float numeroOperador;
    
    cout << "digite um numero: ";
    cin >> numero;
    
    cout << "digite o outro da operação: ";
    cin >> numeroOperador;
    
    soma(numero, numeroOperador);
    divisao(numero, numeroOperador);
    subtracao(numero, numeroOperador);
    multiplicacao(numero, numeroOperador);   
    
    return 0;
}

void soma(float numero, float numeroOperador){
    int soma = numero + numeroOperador;
    cout << "soma: " << soma << endl;
}

void subtracao(float numero, float numeroOperador){
    int soma = numero - numeroOperador;
    cout << "subtracao: " << soma << endl;
}

void divisao(float numero, float numeroOperador){
    int soma = numero / numeroOperador;
    cout << "divisao: " << soma << endl;
}

void multiplicacao(float numero, float numeroOperador){
    int soma = numero * numeroOperador;
    cout << "multiplicacao: " << soma << endl;
}
```

---

# Exercício 5
### Ler uma palavra. Verificar se é palíndromo. Criar uma função que retorne verdadeiro ou falso.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:  Ler uma palavra.
                Verificar se é palíndromo.
                Criar uma função que retorne verdadeiro ou falso.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//assinaturas
bool verif(string palavra, string palavraInvertida);

int main() {	
    string palavra;
    string palavraInvertida;
    cout << "digite uma palavra (NAO PODE FRASE): ";
    cin >> palavra;
        
    palavraInvertida = palavra;	
    reverse(palavraInvertida.begin(), palavraInvertida.end());
    
    if (verif(palavra, palavraInvertida) == true){
        cout << "eh um palindromo";
    } else if (verif(palavra, palavraInvertida) == false){
        cout << "n eh um palindromo";
    }

    return 0;	
}

bool verif(string palavra, string palavraInvertida){
    if (palavra == palavraInvertida){
        return true;
    } else {
        return false;
    }
}
```

---

# Exercício 6
### Ler um número. Exibir o dia da semana correspondente. Criar uma função para essa verificação.

```cpp
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
    } else if ((diaDHj + dia) % 7 == 1){
        cout << "terca" << endl;
        divido = true;
    } else if ((diaDHj + dia) % 7 == 2){
        cout << "quarta" << endl;
        divido = true;
    } else if ((diaDHj + dia) % 7 == 3){
        cout << "quinta" << endl;
        divido = true;
    } else if ((diaDHj + dia) % 7 == 4){
        cout << "sexta" << endl;
        divido = true;
    } else if ((diaDHj + dia) % 7 == 5){
        cout << "sabado" << endl;
        divido = true;
    } else if ((diaDHj + dia) % 7 == 6){
        cout << "domingo" << endl;
    } 
}
```

---

# Exercício 7
### Ler 5 números. Verificar se estão em ordem crescente, decrescente ou não ordenados. Criar uma função para essa análise.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 22/05/2026
   Finalidade:  Ler 5 números.
                Verificar se estão:
                    Em ordem crescente
                    Em ordem decrescente
                    Não ordenados
                Criar uma função para essa análise.
*/

#include <iostream>
#include <vector>
using namespace std;

void lerNumero(float numero, vector<float> lista);

int main()
{
    vector<float> lista;
    float numero = 0;

    lerNumero(numero, lista);

    return 0;
}

void lerNumero(float numero, vector<float> lista) {
    bool crescente = true;
    bool decrescente = true;
    bool iguais = true;

    for (int i = 0; i < 5; i++){
        cout << "digite um numero: ";
        cin >> numero;
        lista.push_back(numero);
    }

    for (int i = 0; i < lista.size() - 1; i++) {
        if (lista[i] != lista[i + 1]) {
            iguais = false;
        }
        if (lista[i] > lista[i + 1]) {
            crescente = false;
        }
        if (lista[i] < lista[i + 1]) {
            decrescente = false;
        }
    }

    if (iguais == true) {
        cout << "todos os valores sao iguais";
    } else if (decrescente == true) {
        cout << "decrescente";
    } else if (crescente == true) {
        cout << "crescente";
    } else {
        cout << "n ordenado";
    }
}
```

---

# Exercício 8
### Ler o raio de 5 círculos. Calcular e exibir a soma das áreas. Criar uma função para calcular a área do círculo.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler o raio de 5 círculos.
               Calcular e exibir a soma das áreas.
               Criar uma função para calcular a área do círculo.
*/

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

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
```

---

# Exercício 9
### Ler uma palavra. Substituir todas as vogais por *. Criar uma função para realizar a substituição.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler uma palavra.
               Substituir todas as vogais por *.
               Criar uma função para realizar a substituição.
*/

#include <iostream>
using namespace std;

void substituicaoDeVogais(string &palavra);

int main() {
    string palavra;

    cout << "Digite Uma Palavra: ";
    cin >> palavra;
    substituicaoDeVogais(palavra);
    cout << palavra;
}

void substituicaoDeVogais(string &palavra) {
    for (int i = 0; i < palavra.length(); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            palavra[i] = '*';
        }
    }
}
```

---

# Exercício 10
### Ler um nome completo. Exibir a quantidade de vogais e de consoantes. Criar funções separadas para cada contagem.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler um nome completo.
               Exibir:
                   Quantidade de vogais
                   Quantidade de consoantes
               Criar funções separadas para cada contagem.
*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void numeroDeVogais(string &nomeCompleto);
void numeroDeConsoantes(string &nomeCompleto);

int main() {
    string nomeCompleto;
    cout << "digite seu nome completo: ";
    getline(cin, nomeCompleto);

    numeroDeVogais(nomeCompleto);
    numeroDeConsoantes(nomeCompleto);
    return 0;
}

void numeroDeConsoantes(string &nomeCompleto) {
    int contagemDeConsoantes = 0;

    for (int i = 0; i < nomeCompleto.length(); i++) {
        char c = tolower(nomeCompleto[i]);

        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            contagemDeConsoantes++;
        }
    }

    cout << "numero de consoantes: " << contagemDeConsoantes << endl;
}

void numeroDeVogais(string &nomeCompleto) {
    int contagemDeVogais = 0;

    for (int i = 0; i < nomeCompleto.length(); i++) {
        char c = tolower(nomeCompleto[i]);

        if (isspace(c)) {
            continue;
        }

        if (nomeCompleto[i] == 'a' || nomeCompleto[i] == 'e' || nomeCompleto[i] == 'i' || nomeCompleto[i] == 'o' || nomeCompleto[i] == 'u') {
            contagemDeVogais++;
        }
    }

    cout << "numero de vogais: " << contagemDeVogais << endl;
}
```

---

# Exercício 11
### Ler 10 números em um vetor. Substituir números negativos por zero e exibir o vetor.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade:  Ler 10 números em um vetor.
                Substituir números negativos por zero.
                Exibir o vetor.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nums[10];
    int entrada;

    for(int i = 0; i < 10; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> entrada;
        nums[i] = entrada;
    }

    for (int i = 0; i < 10; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }

    cout << "\nVetor final: ";
    for (int i = 0; i < 10; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
```

---

# Exercício 12
### Ler 15 números em um vetor. Contar e exibir: quantidade de pares, quantidade de ímpares.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade:  Ler 15 números em um vetor.
                Contar e exibir:
                Quantidade de pares
                Quantidade de ímpares
*/

#include <iostream>
using namespace std;

int main() {
    int nums[15];
    int entrada;
    int somaPar = 0, somaImpar = 0;

    for(int i = 0; i < 15; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> entrada;
        nums[i] = entrada;
    }

    for (int i = 0; i < 15; i++) {
        if(nums[i] % 2 == 0){
            somaPar += 1;
        } else {
            somaImpar += 1;
        }
    }

    cout << "São " << somaImpar << " numeros impares" << endl;
    cout << "São " << somaPar << " numeros pares" << endl;
    return 0;
}
```

---

# Exercício 13
### Ler 20 letras em um vetor. Ler uma letra e contar quantas vezes ela aparece.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 12/05/2026
   Finalidade:  Ler 20 letras em um vetor.
                Ler uma letra e contar quantas vezes ela aparece.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    char arr[20];
    int qntsVezes;
    char letra;

    for(int i = 0; i < 20; i++){
        cout << "Digite a letra " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Digite a letra para contar: ";
    cin >> letra;

    for (int i = 0; i < 20; i++) {
        if (arr[i] == letra) {
            qntsVezes++;
        }
    }

    cout << "";
    return 0;
}
```

---

# Exercício 14
### Ler 10 nomes em um vetor. Ordenar em ordem decrescente e exibir em ordem crescente.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:  Ler 10 nomes em um vetor.
                Ordenar em ordem decrescente e exibir em ordem crescente.
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string nomes[10];

    for(int i = 0; i < 10; i++){
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    sort(nomes, nomes + 10, greater<string>());

    for(int i = 9; i >= 0; i--){
        cout << nomes[i] << endl;
    }

    return 0;
}
```

---

# Exercício 15
### Ler 20 números em um vetor. Exibir o índice do primeiro número negativo.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:  Ler 20 números em um vetor.
                Exibir o índice do primeiro número negativo.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[20];

    for(int i = 0; i < 20; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i < 20; i++){
        int numero = arr[i];
        if(numero < 0){
            cout << "O indice do primeiro numero negativo eh: " << i;
        }
    }

    return 0;
}
```

---

# Exercício 16
### Ler 15 números em um vetor. Exibir o índice do menor valor e do maior valor.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:  Ler 15 números em um vetor.
                Exibir o índice:
                    Do menor valor
                    Do maior valor 
*/

#include <iostream>
using namespace std;

int main() {
    int indiceMenor = 0;
    int indiceMaior = 0;
    int arr[15];

    for(int i = 0; i < 15; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    for(int i = 1; i < 15; i++){
        if(arr[i] < arr[indiceMenor]){
            indiceMenor = i;
        }
        if(arr[i] > arr[indiceMaior]){
            indiceMaior = i;
        }
    }

    cout << "O indice do menor valor eh: " << indiceMenor << " (valor: " << arr[indiceMenor] << ")" << endl;
    cout << "O indice do maior valor eh: " << indiceMaior << " (valor: " << arr[indiceMaior] << ")" << endl;

    return 0;
}
```

---

# Exercício 17
### Ler 10 números em um vetor. Criar outro vetor com os sinais invertidos. Exibir a soma dos valores positivos dos dois vetores.

```cpp
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
    int num[10];
    int numinvertido[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "digite o numero " << i + 1 << ": ";
        cin >> num[i];
    }

    for (int i = 0; i < 10; i++) {
        numinvertido[i] = num[i] * -1;
    }

    cout << "Vetor original: ";
    for (int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "Vetor invertido: ";
    for (int i = 0; i < 10; i++) {
        cout << numinvertido[i] << " ";
    }
    cout << endl;

    cout << "Vetor padrao: ";
    for (int i = 0; i < 10; i++) {
        cout << num[i] << ", ";
    }
    cout << "Vetor invertido: ";
    for (int i = 0; i < 10; i++) {
        cout << numinvertido[i] << ", ";
    }

    for (int i = 0; i < 10; i++) {
        if (num[i] > 0) {
            soma += num[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (numinvertido[i] > 0) {
            soma += numinvertido[i];
        }
    }

    cout << "A soma dos numeros positivos eh: " << soma << endl << endl;
    return 0;
}
```

---

# Exercício 18
### Ler 20 letras em um vetor. Contar as vogais (a, e, i, o, u). Armazenar em um vetor de 5 posições e exibir.

```cpp
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
    vector<char> letras(20);
    vector<int> contagemVogais(5, 0);

    cout << "Digite 20 letras:" << endl;

    for (int i = 0; i < 20; i++) {
        cout << "Letra " << (i + 1) << ": ";
        cin >> letras[i];
        char letraAtual = tolower(letras[i]);

        switch (letraAtual) {
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

    cout << "\n--- Resultado da Contagem ---" << endl;
    cout << "Vogal 'A': " << contagemVogais[0] << endl;
    cout << "Vogal 'E': " << contagemVogais[1] << endl;
    cout << "Vogal 'I': " << contagemVogais[2] << endl;
    cout << "Vogal 'O': " << contagemVogais[3] << endl;
    cout << "Vogal 'U': " << contagemVogais[4] << endl;
    return 0;
}
```

---

# Exercício 19
### Ler 10 números. Separar pares e ímpares em vetores distintos. Ordenar os dois vetores. Somar os elementos e armazenar em um terceiro vetor. Exibir todos os vetores.

```cpp
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

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> temp(10);
    vector<int> pares;
    vector<int> impares;
    vector<int> soma;

    cout << "Digite os numeros: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> temp[i];
    }

    for (int i = 0; i < 10; i++) {
        if (temp[i] % 2 == 0) {
            pares.push_back(temp[i]);
        } else {
            impares.push_back(temp[i]);
        }
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end());

    int limite = min(pares.size(), impares.size());

    for (int i = 0; i < limite; i++) {
        soma.push_back(pares[i] + impares[i]);
    }

    cout << "VETOR DOS PARES: ";
    for (int numero : pares) {
        cout << numero << ", ";
    }
    cout << "\n";
    cout << "VETOR DOS IMPARES: ";
    for (int numero : impares) {
        cout << numero << ", ";
    }
    cout << "\n";
    cout << "VETOR SOMADO: ";
    for (int numero : soma) {
        cout << numero << ", ";
    }
    return 0;
}
```

---

# Exercício 20
### Ler 10 números em um vetor. Exibir o terceiro menor valor.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/05/2026
   Finalidade:  Ler 10 números em um vetor.
                Exibir o terceiro menor valor. 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros(10);

    cout << "Digite os numeros: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

    cout << "O terceiro numero menor eh: " << numeros[2];
    
    return 0;
}
```