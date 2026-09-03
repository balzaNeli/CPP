#include <iostream>
#include <string>

using namespace std;

string FazerInscricao();
int Robotica(bool decrementar = false);
int Programacao(bool decrementar = false);
int DesignGames(bool decrementar = false);
int Impressao3D(bool decrementar = false);
int CyberSeguranca(bool decrementar = false);
int IA(bool decrementar = false);
int EdicaoVideo(bool decrementar = false);
int RedesComp(bool decrementar = false);
void ListarVagas();

int main() {
    int respostaUsuario;

    do {
        cout << "\n===== Situacao-Problema =====" << endl;
        cout << "1. Fazer Inscricao" << endl;
        cout << "2. Listar Vagas" << endl;
        cout << "0. Sair" << endl;
        cout << "\n=======================" << endl;
        cout << "Opcao: ";
        cin >> respostaUsuario;

        switch (respostaUsuario) {
            case 1:
                FazerInscricao();
                break;
            case 2:
                ListarVagas();
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

void ListarVagas() {
    cout << "\n===== Relatorio de Vagas =====" << endl;
    cout << "Robotica: " << Robotica() << " vagas restantes" << endl;
    cout << "Programacao: " << Programacao() << " vagas restantes" << endl;
    cout << "Design de Games: " << DesignGames() << " vagas restantes" << endl;
    cout << "Impressao 3D: " << Impressao3D() << " vagas restantes" << endl;
    cout << "CyberSeguranca: " << CyberSeguranca() << " vagas restantes" << endl;
    cout << "I.A: " << IA() << " vagas restantes" << endl;
    cout << "Edicao de Video: " << EdicaoVideo() << " vagas restantes" << endl;
    cout << "Redes de Computadores: " << RedesComp() << " vagas restantes" << endl;
    cout << "==============================" << endl;
}

string FazerInscricao() {
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

        int vagasDisponiveis = 0;

        switch (respostaUsuario) {
            case 1: vagasDisponiveis = Robotica(); break;
            case 2: vagasDisponiveis = Programacao(); break;
            case 3: vagasDisponiveis = DesignGames(); break;
            case 4: vagasDisponiveis = Impressao3D(); break;
            case 5: vagasDisponiveis = CyberSeguranca(); break;
            case 6: vagasDisponiveis = IA(); break;
            case 7: vagasDisponiveis = EdicaoVideo(); break;
            case 8: vagasDisponiveis = RedesComp(); break;
            case 0: cout << "Voltando..." << endl; break;
            default: cout << "Opcao invalida!" << endl;
        }

        if (respostaUsuario >= 1 && respostaUsuario <= 8) {
            // Agora testamos o numero inteiro direto!
            if (vagasDisponiveis <= 0) {
                cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
            } else {
                string nome;
                cout << "Digite o nome para inscricao: ";
                cin.ignore();
                getline(cin, nome);

                // Executa o decremento da vaga
                if (respostaUsuario == 1) Robotica(true);
                else if (respostaUsuario == 2) Programacao(true);
                else if (respostaUsuario == 3) DesignGames(true);
                else if (respostaUsuario == 4) Impressao3D(true);
                else if (respostaUsuario == 5) CyberSeguranca(true);
                else if (respostaUsuario == 6) IA(true);
                else if (respostaUsuario == 7) EdicaoVideo(true);
                else if (respostaUsuario == 8) RedesComp(true);

                cout << "\n--- Inscricao Confirmada ---" << endl;
                cout << "Nome: " << nome << endl;
            }
        }

    } while (respostaUsuario != 0);

    return "";
}

int Robotica(bool decrementar) {
    static int vagas = 40;
    if (decrementar && vagas > 0) {
        vagas--;
    }
    return vagas;
}

int Programacao(bool decrementar) {
    static int vagas = 50;
    if (decrementar && vagas > 0) {
        vagas--;
    }
    return vagas;
}

int DesignGames(bool decrementar) {
    static int vagas = 30;
    if (decrementar && vagas > 0) {
        vagas--;
    }
    return vagas;
}

int Impressao3D(bool decrementar) {
    static int vagas = 20;
    if (decrementar && vagas > 0) {
        vagas--;
    }
    return vagas;
}

int CyberSeguranca(bool decrementar) {
    static int vagas = 25;
    if (decrementar && vagas > 0) {
        vagas--;
    }
    return vagas;
}

int IA(bool decrementar) {
    static int vagas = 35;
    if (decrementar && vagas > 0) {
        vagas--;
    }
    return vagas;
}

int EdicaoVideo(bool decrementar) {
    static int vagas = 20;
    if (decrementar && vagas > 0) {
        vagas--;
    }
    return vagas;
}

int RedesComp(bool decrementar) {
    static int vagas = 20;
    if (decrementar && vagas > 0) {
        vagas--;
    }
    return vagas;
}
