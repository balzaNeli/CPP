/*
   Autores: Caua Balzaneli
   Data: //2026
   Finalidade: Agenda
   
*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Contato {
private:
    // atributos privados 
    string nome;
    string telefone;
    string email;

public:
    // construtor 
    
    Contato(string n, string t, string e)
        : nome(n), telefone(t), email(e) {}

    // getters
    string getNome()      { return nome; }
    string getTelefone()  { return telefone; }
    string getEmail()     { return email; }

    // exibe os dados formatados
    void exibir() {
        cout << "  Nome:      " << nome      << endl;
        cout << "  Telefone:  " << telefone  << endl;
        cout << "  Email:     " << email     << endl;
    }
};

class Agenda {
private:
    vector<Contato> contatos; // guarda todos os contatos

public:
    // --- adiciona um novo contato ao vector ---
    void adicionar() {
        string nome, telefone, email;

        cin.ignore(); // limpa o buffer antes do getline
        cout << "Nome: ";
        getline(cin, nome);
        cout << "Telefone: ";
        getline(cin, telefone);
        cout << "Email: ";
        getline(cin, email);

        // cria um Contato e empurra para o final do vector
        contatos.push_back(Contato(nome, telefone, email));
        cout << "\nContato adicionado com sucesso!" << endl;
    }

    // --- lista todos os contatos ---
    void listar() {
        if (contatos.empty()) { // .empty() retorna true se o vector tiver 0 elementos
            cout << "Agenda vazia!" << endl;
            return;
        }

        cout << "\n===== CONTATOS (" << contatos.size() << ") =====" << endl;
        for (int i = 0; i < contatos.size(); i++) {
            cout << "\n[" << i + 1 << "]" << endl;
            contatos[i].exibir(); // chama o método exibir() de cada contato
        }
    }

    // --- busca contatos pelo nome ---
    void buscar() {
        cin.ignore();
        string termo;
        cout << "Nome para buscar: ";
        getline(cin, termo);

        bool achou = false;
        for (int i = 0; i < contatos.size(); i++) {
            // .find() procura o termo dentro da string
            // se não achar, retorna string::npos (uma constante que significa "não encontrado")
            if (contatos[i].getNome().find(termo) != string::npos) {
                contatos[i].exibir();
                cout << "----------" << endl;
                achou = true;
            }
        }

        if (!achou)
            cout << "Nenhum contato encontrado." << endl;
    }

    // --- remove um contato pelo número da lista ---
    void remover() {
        listar();
        if (contatos.empty()) return;

        int indice;
        cout << "\nNumero do contato para remover: ";
        cin >> indice;

        // valida se o número digitado existe na lista
        if (indice < 1 || indice > contatos.size()) {
            cout << "Numero invalido!" << endl;
            return;
        }

        // .erase() remove o elemento no índice informado
        // begin() é um ponteiro para o início do vector
        // begin() + (indice-1) aponta para o elemento certo
        contatos.erase(contatos.begin() + (indice - 1));
        cout << "Contato removido!" << endl;
    }
};

// ============================================================
// MAIN — só cuida do menu, toda lógica está nas classes
// ============================================================
int main() {
    Agenda agenda; // cria a agenda
    int opcao;

    do {
        cout << "\n===== AGENDA =====" << endl;
        cout << "1. Adicionar contato" << endl;
        cout << "2. Listar contatos"   << endl;
        cout << "3. Buscar contato"    << endl;
        cout << "4. Remover contato"   << endl;
        cout << "0. Sair"              << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: agenda.adicionar(); break;
            case 2: agenda.listar();    break;
            case 3: agenda.buscar();    break;
            case 4: agenda.remover();   break;
            case 0: cout << "Saindo..." << endl; break;
            default: cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0); // continua até o usuário digitar 0

    return 0;
}