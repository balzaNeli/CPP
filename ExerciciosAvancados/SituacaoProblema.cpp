/*
    Autores: Caua Balzaneli, Valentino Chagas Hoehne
    Turma: 1C2
    Data: //2026
    Finalidade: A coordenação precisa distribuir os 240 alunos nas 8 oficinas 
    respeitando todas as regras — e quer uma solução organizada e reutilizável.
*/

#include <iostream>
#include <string>

using namespace std;

// Protótipos das funções
void FazerInscricao();
void Robotica();
void Programacao();
void DesignGames();
void Impressao3D();
void CyberSeguranca();
void IA();
void EdicaoVideo();
void RedesComp();

int main() {
    int respostaUsuario;
    
    do {
        cout << "\n===== Situacao-Problema =====" << endl;
        cout << "1. Fazer Inscricao" << endl;
        cout << "0. Sair" << endl;
        cout << "\n=======================" << endl;
        cout << "Opcao: ";
        cin >> respostaUsuario;

        switch (respostaUsuario) {
            case 1: 
                FazerInscricao(); 
                break;
            case 0: 
                cout << "Saindo..." << endl; 
                break;
            default: 
                cout << "Opcao invalida!" << endl;
        }
    } while (respostaUsuario != 0);

    return 0;
}

void FazerInscricao() {
    int respostaUsuario;
    
    do {
        cout << "\n===== Inscricao =====" << endl;
        cout << "Escolha a OFICINA" << endl;
        cout << "1. Robotica" << endl;
        cout << "2. Programacao" << endl;
        cout << "3. Design de Games" << endl;
        cout << "4. Impressao 3D" << endl;
        cout << "5. CyberSeguranca" << endl;
        cout << "6. IA" << endl;
        cout << "7. Edicao de Video" << endl;
        cout << "8. Redes de Computadores" << endl;
        cout << "0. Voltar ao Menu Principal" << endl;
        cout << "\n=======================" << endl;
        cout << "Opcao: ";
        cin >> respostaUsuario;

        switch (respostaUsuario) {
            case 1: Robotica(); break;
            case 2: Programacao(); break;
            case 3: DesignGames(); break;
            case 4: Impressao3D(); break;
            case 5: CyberSeguranca(); break;
            case 6: IA(); break;
            case 7: EdicaoVideo(); break;
            case 8: RedesComp(); break;
            case 0: cout << "Voltando..." << endl; break;
            default: cout << "Opcao invalida!" << endl;
        }
    } while (respostaUsuario != 0);
}

void Robotica() {
    static int vagas = 40; // Preserva o número de vagas entre as chamadas da função
    string nome;
    
    if (vagas <= 0) {
        cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
        return;
    }

    cout << "Digite o nome para inscricao: ";
    cin.ignore(); 
    getline(cin, nome);

    vagas--; 
    
    cout << "\n--- Inscricao Confirmada ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Oficina: Robotica" << endl;
    cout << "Vagas restantes: " << vagas << endl;
}

// Implementações restantes (podem ser desenvolvidas de forma similar à Robotica)
void Programacao() {
  static int vagas = 50; // Preserva o número de vagas entre as chamadas da função
    string nome;
    
    if (vagas <= 0) {
        cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
        return;
    }

    cout << "Digite o nome para inscricao: ";
    cin.ignore(); 
    getline(cin, nome);

    vagas--; 
    
    cout << "\n--- Inscricao Confirmada ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Oficina: Programacao" << endl;
    cout << "Vagas restantes: " << vagas << endl;
}
void DesignGames() {
  static int vagas = 30; // Preserva o número de vagas entre as chamadas da função
    string nome;
    
    if (vagas <= 0) {
        cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
        return;
    }

    cout << "Digite o nome para inscricao: ";
    cin.ignore(); 
    getline(cin, nome);

    vagas--; 
    
    cout << "\n--- Inscricao Confirmada ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Oficina: Design de Games" << endl;
    cout << "Vagas restantes: " << vagas << endl;
}
void Impressao3D() {
  static int vagas = 20; // Preserva o número de vagas entre as chamadas da função
    string nome;
    
    if (vagas <= 0) {
        cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
        return;
    }

    cout << "Digite o nome para inscricao: ";
    cin.ignore(); 
    getline(cin, nome);

    vagas--; 
    
    cout << "\n--- Inscricao Confirmada ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Oficina: Impressao 3D" << endl;
    cout << "Vagas restantes: " << vagas << endl;
}
void CyberSeguranca() {
  static int vagas = 25; // Preserva o número de vagas entre as chamadas da função
    string nome;
    
    if (vagas <= 0) {
        cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
        return;
    }

    cout << "Digite o nome para inscricao: ";
    cin.ignore(); 
    getline(cin, nome);

    vagas--; 
    
    cout << "\n--- Inscricao Confirmada ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Oficina: CyberSeguranca" << endl;
    cout << "Vagas restantes: " << vagas << endl;
}
void IA() {
  static int vagas = 35; // Preserva o número de vagas entre as chamadas da função
    string nome;
    
    if (vagas <= 0) {
        cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
        return;
    }

    cout << "Digite o nome para inscricao: ";
    cin.ignore(); 
    getline(cin, nome);

    vagas--; 
    
    cout << "\n--- Inscricao Confirmada ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Oficina: I.A" << endl;
    cout << "Vagas restantes: " << vagas << endl;
}
void EdicaoVideo() {
  static int vagas = 20; // Preserva o número de vagas entre as chamadas da função
    string nome;
    
    if (vagas <= 0) {
        cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
        return;
    }

    cout << "Digite o nome para inscricao: ";
    cin.ignore(); 
    getline(cin, nome);

    vagas--; 
    
    cout << "\n--- Inscricao Confirmada ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Oficina: Edicao de Video" << endl;
    cout << "Vagas restantes: " << vagas << endl;
}
void RedesComp() {
  static int vagas = 20; // Preserva o número de vagas entre as chamadas da função
    string nome;
    
    if (vagas <= 0) {
        cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
        return;
    }

    cout << "Digite o nome para inscricao: ";
    cin.ignore(); 
    getline(cin, nome);

    vagas--; 
    
    cout << "\n--- Inscricao Confirmada ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Oficina: Edicao de Video" << endl;
    cout << "Vagas restantes: " << vagas << endl;
}
