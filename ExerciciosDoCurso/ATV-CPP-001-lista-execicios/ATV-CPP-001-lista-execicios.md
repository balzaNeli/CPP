# 🧠 Exercícios em C++

Coleção de exercícios básicos em C++ focados em lógica de programação.

---

## 📌 Exercício 1 — Verificador de Número Primo

### 💻 Código

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Verificar se um número inteiro é primo contando a quantidade de divisores.
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int divido = 0;

    cout << "seu numero inteiro: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "n é primo";
    } else {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divido++;
            }
        }

        if (divido == 2) {
            cout << "primo";
        } else {
            cout << "n é primo";
        }
    }
}
```

---

## 📌 Exercício 2 — Potências de um Número

### 💻 Código

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Calcular e exibir as potências de um número a partir do expoente 0 até um limite baseado no valor informado.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero;
    double potencia = 0;
    
    cout << "escreva seu numero: ";
    cin >> numero;
    
    do {
        double resultado = pow(numero, potencia);
        potencia++;
        cout << "\n respota é: " << resultado;
        
    } while (numero > potencia);
    
    return 0;
}
```

---

## 📌 Exercício 3 — Soma de Números Positivos com Classe

### 💻 Código

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Ler números positivos, armazená-los em um vetor, calcular sua soma e exibir os valores informados.
*/

#include <iostream>
#include <vector>
using namespace std;

class soma {
public:
    float numero;
    float resultado = 0;
    vector<float> vecNumeros;
    
    void calculo() {
        do {
            cout << "diga um numero: ";
            cin >> numero;
            if (numero >= 0) {
                vecNumeros.push_back(numero);
                resultado = resultado + numero;
            }
        } while (numero >= 0);

        cout << "soma dos numeros positivos: " << resultado;
        cout << "\nnumeros usados: ";
        for (int posicao : vecNumeros) {
            cout << posicao << " ";
        }
    }    
};

int main() {
    soma objCalc;
    objCalc.calculo();
    return 0;       
}
```

---

## 📌 Exercício 4 — Maior e Menor Valor em um Vetor

### 💻 Código

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Ler 10 números, armazená-los em um vetor e identificar o maior e o menor valor.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vecNumeros;
    int numero;
    int i = 0;

    do {
        cout << "digite um numero: ";
        cin >> numero;
        vecNumeros.push_back(numero);
        i++;
    } while (i < 10);

    int menor = vecNumeros[0];
    int maior = vecNumeros[0];
    
    for (float n : vecNumeros) {
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
    }
        
    cout << "maior: " << maior << endl;
    cout << "menor: " << menor << endl;
    
    return 0;
}
```

---

## 📌 Exercício 5 — Múltiplos de um Número

### 💻 Código

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Gerar e exibir os múltiplos de um número até um limite informado pelo usuário.
*/

#include <iostream>
using namespace std;

int main() {
    int numeroFinal;
    int multiplo;
    int resultado;
        
    cout << "fala a parada final: ";
    cin >> numeroFinal;
    cout << "um multiplo agr: ";
    cin >> multiplo;
    
    for (int i = 1; i < numeroFinal; i++) {
        resultado = multiplo * i;
        cout << resultado << " ";
    }
    
    return 0;
}
```

---

# Exercício 6
### Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos.

```C++
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos.
*/

#include <iostream>
using namespace std;

int main() {
    int num, soma = 0, multiplicacao = 1;
    
    do {
        cout << "Digite um número: ";
        cin >> num;
        soma += num;
        multiplicacao *= num;
    } while (soma <= 100);
    
    cout << "A multiplicação dos números lidos é: " << multiplicacao << endl;
    
    return 0;
}
```

# Exercício 7
### Ler a quantidade de pessoas e ler a altura dessas pessoas. Calcular e exibir a altura média de todas as pessoas.

```C++
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler a quantidade de pessoas e ler a altura dessas pessoas. Calcular e exibir a altura média de todas as pessoas.


*/

#include <iostream>
using namespace std;

int main() {
    int quantidadePessoas;
    float altura, somaAltura = 0.0, alturaMedia;
    cout << "Digite a quantidade de pessoas: ";
    cin >> quantidadePessoas;
    for (int i = 1; i <= quantidadePessoas; i++){
        cout << "Digite a altura da pessoa" << i << ": " << endl;
        cin >> altura;
        somaAltura += altura;
    }
    alturaMedia = somaAltura / quantidadePessoas;
    cout << "A altura média das pessoas é: " << alturaMedia << endl;
    return 0;
}

```
# Exercício 8
### Ler um número. Exiba a soma de todos os números pares e ímpares de zero até o número lido.

```C++
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Ler um número. Exiba a soma de todos os números pares e ímpares de zero até o número lido.
*/


#include <iostream>
using namespace std;



int main() {
    int num;
    int somaPares = 0;
    int somaImpares = 0;
    
    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            somaImpares += i;
        }
    }

    cout << "Soma dos pares:   " << somaPares   << endl;
    cout << "Soma dos impares: " << somaImpares << endl;
    return 0;
}

```
---

# Exercício 9
### Ler um número entre 50 e 100. Exibir a sequência de Fibonacci até esse número.


```C++
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Ler um número entre 50 e 100. Exibir a sequência de Fibonacci até esse número.
*/


#include <iostream>
using namespace std;



int main() {
    // Ler um numero entre 50 e 100, verificador
    int num;
    int a = 0, b = 1, proximo, i;

    do {
        cout << "Digite um numero entre 50 e 100: ";
        cin >> num;
    } while (num < 50 || num > 100);
    

    // Sequencia de Fibonacci, o proximo e a soma dos dois anteriores
    for (i = 0; i < num; i++) {
        cout << a;
        proximo = a + b;
        a = b;
        b = proximo;
        cout << "\n";
    }

    return 0;
}


```
---
# Exercício 10
### Simular um jogo de adivinhação. O programa gera um número aleatório e o jogador precisa acertá-lo. A cada tentativa, o programa informa se o palpite é muito alto, muito baixo ou correto. Quando acertar, exibe a quantidade de palpites.

```C++
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Simular um jogo de adivinhação. O programa gera um número
   aleatório e o jogador precisa acertá-lo. A cada tentativa, o programa
   informa se o palpite é muito alto, muito baixo ou correto. Quando acertar,
   exibe a quantidade de palpites.
*/

#include <iostream>
#include <random>

using namespace std;

int main() {
    //Definindo variaveis
    int qtdPalpites = 0;
    int palpite, quanto, emQuanto;
    
    cout << "Numero base 0: ";
    cout << "\nNumero limite: ";
    cin >> emQuanto;     
	
	do {
		cout << "Favor digitar um numero maior: ";
    	cin >> emQuanto; 
		
	} while(emQuanto < 0);
	

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(0, emQuanto);
	int num = dist(gen);



    

    do {
        cout << "Digite um palpite: ";
        cin >> palpite;

        qtdPalpites++;

        if (palpite < num) {
            cout << "Palpite muito baixo." << endl;
        }
        else if (palpite > num) {
            cout << "Palpite muito alto." << endl;
        }
        else {
            cout << "Palpite correto! Voce acertou em "
                 << qtdPalpites << " tentativas." << endl;
        }
	
    } while (palpite != num);
		cout << "O numero sorteado foi:" << num;
	
    return 1;
}


```


---
