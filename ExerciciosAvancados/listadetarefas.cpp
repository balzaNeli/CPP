/*
   Autores: Caua Balzaneli
      Data: 25/05/2026
      Finalidade: Lista de tarefas
*/

#include <iostream> //para cout, cin e etc
#include <string> //para usar o tipo string
#include <utility>
#include <vector> //para usar vetores
using namespace std; //para nao ter que usar std::

// Definindo a classe das Tarefas
class Tarefa {
//Atributos privados da classe, so podem ser acessados ou alterados pelos próprios métodos da classe em que foram criados.
private:
    string nome;
    bool concluida;
    int id;

//Atributos publicos da classe, são variáveis acessíveis de qualquer lugar (dentro ou fora da classe)
public:
    //Assinaturas
    Tarefa(int id, string nome, bool concluida);
    void marcarConcluida();
    void exibir() const;

};
// Classe da lista de tarefas, conjunto da classe Tarefas
class ListaDeTarefa {

private:
    // Vetor para armazenar as tarefas
    vector<Tarefa> tarefas;
public:
    //Assinaturas dos metodos da Classe
    void adicionarTarefa();
    void removerTarefa() ;
    void imprimirTarefas() const;
    void concluirTarefa();
};

//Puxa o construtor da classe Tarefa, e passa o atributo nome do objeto que está executando este metodo agora
Tarefa::Tarefa(int id, string nome, bool concluida) {
    this->id = id;
    this->nome = std::move(nome);
    this->concluida = concluida;
}

void Tarefa::marcarConcluida() {
    this->concluida = true;
}

void ListaDeTarefa::concluirTarefa() {
    if (tarefas.empty()) {
        cout << "Nenhuma tarefa cadastrada!" << endl;
        return;
    }

    int id;
    cout << "\nTarefas disponíveis:" << endl;
    for (const auto & tarefa : tarefas) {
        tarefa.exibir();
    }

    cout << "Digite o ID da tarefa para conclui-la: ";
    cin >> id;


    if (id >= 0 && id < tarefas.size()) {
        tarefas[id].marcarConcluida();
        cout << "Tarefa concluida!" << endl;
    } else {
        cout << "ID invalido!" << endl;
    }
}

void Tarefa::exibir() const{
    string status;
    if (concluida == true) {
        status = "[X]";
    } else {
        status = "[ ]";
    }
    cout << status << " #" << id << " - " << nome << endl;
}

void ListaDeTarefa::adicionarTarefa() {
    string nome;
    cout << "Digite a tarefa: ";
    cin.ignore();
    getline(cin, nome);

    const int novoId = tarefas.size();
    Tarefa novaTarefa(novoId, nome, false);
    tarefas.push_back(novaTarefa);

    cout << "Tarefa adicionada com sucesso!" << endl;
}

void ListaDeTarefa::removerTarefa(){
    int id;
    cout << "Qual tarefa quer remover?: ";
    for (const auto & tarefa : tarefas) {
        tarefa.exibir();
    }
    cout << "Digite o ID da tarefa para remove-la: ";
    cin >> id;
    tarefas.erase(tarefas.begin() + id);
    cout << "Tarefa removida com sucesso!" << endl;
}

void ListaDeTarefa::imprimirTarefas() const {
    if (tarefas.empty()) {
        cout << "Nenhuma tarefa cadastrada!" << endl;
        return;
    }
    else
    {
        for (const auto & tarefa : tarefas) {
            tarefa.exibir();
        }
    }

}

int main() {
    int usuario;
    ListaDeTarefa lista;

    do {
        cout << "\n===== LISTA DE TAREFAS =====" << endl;
        cout << "1. Adicionar Tarefa"            << endl;
        cout << "2. Remover Tarefa"              << endl;
        cout << "3. Ver todas as tarefas"        << endl;
        cout << "4. Concluir uma Tarefa"         << endl;
        cout << "0. Sair"                        << endl;
        cout << "============================="  << endl;
        cout << "Opcao: ";
        cin >> usuario;

        switch (usuario) {
            case 1: lista.adicionarTarefa();         break;
            case 2: lista.removerTarefa();           break;
            case 3: lista.imprimirTarefas();         break;
            case 4: lista.concluirTarefa();          break;
            case 0: cout << "Saindo..." << endl;     break;
            default: cout << "Opcao invalida!" << endl;
        }
    } while (usuario != 0);

    return 0;
}