#include <iostream>
#include <string>

using namespace std;

string FazerInscricao();
string Robotica();
string Programacao();
string DesignGames();
string Impressao3D();
string CyberSeguranca();
string IA();
string EdicaoVideo();
string RedesComp();
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
    cout << Robotica() << endl;
    cout << Programacao() << endl;
    cout << DesignGames() << endl;
    cout << Impressao3D() << endl;
    cout << CyberSeguranca() << endl;
    cout << IA() << endl;
    cout << EdicaoVideo() << endl;
    cout << RedesComp() << endl;
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

        string resultado = "";

        switch (respostaUsuario) {
            case 1: resultado = Robotica(); break;
            case 2: resultado = Programacao(); break;
            case 3: resultado = DesignGames(); break;
            case 4: resultado = Impressao3D(); break;
            case 5: resultado = CyberSeguranca(); break;
            case 6: resultado = IA(); break;
            case 7: resultado = EdicaoVideo(); break;
            case 8: resultado = RedesComp(); break;
            case 0: cout << "Voltando..." << endl; break;
            default: cout << "Opcao invalida!" << endl;
        }

        if (respostaUsuario >= 1 && respostaUsuario <= 8) {
            if (resultado.find("0 vagas") != string::npos) {
                cout << "\nAs vagas se esgotaram! Por favor, escolha outra oficina." << endl;
            } else {
                string nome;
                cout << "Digite o nome para inscricao: ";
                cin.ignore();
                getline(cin, nome);

                if (respostaUsuario == 1) Robotica();
                else if (respostaUsuario == 2) Programacao();
                else if (respostaUsuario == 3) DesignGames();
                else if (respostaUsuario == 4) Impressao3D();
                else if (respostaUsuario == 5) CyberSeguranca();
                else if (respostaUsuario == 6) IA();
                else if (respostaUsuario == 7) EdicaoVideo();
                else if (respostaUsuario == 8) RedesComp();

                cout << "\n--- Inscricao Confirmada ---" << endl;
                cout << "Nome: " << nome << endl;
            }
        }

    } while (respostaUsuario != 0);

    return "";
}

string Robotica() {
    static int vagas = 40;
    static bool efetuandoInscricao = false;

    if (efetuandoInscricao) {
        if (vagas > 0) vagas--;
        efetuandoInscricao = false;
        return "";
    }

    efetuandoInscricao = true;
    return "Robotica: " + to_string(vagas) + " vagas restantes";
}

string Programacao() {
    static int vagas = 50;
    static bool efetuandoInscricao = false;

    if (efetuandoInscricao) {
        if (vagas > 0) vagas--;
        efetuandoInscricao = false;
        return "";
    }

    efetuandoInscricao = true;
    return "Programacao: " + to_string(vagas) + " vagas restantes";
}

string DesignGames() {
    static int vagas = 30;
    static bool efetuandoInscricao = false;

    if (efetuandoInscricao) {
        if (vagas > 0) vagas--;
        efetuandoInscricao = false;
        return "";
    }

    efetuandoInscricao = true;
    return "Design de Games: " + to_string(vagas) + " vagas restantes";
}

string Impressao3D() {
    static int vagas = 20;
    static bool efetuandoInscricao = false;

    if (efetuandoInscricao) {
        if (vagas > 0) vagas--;
        efetuandoInscricao = false;
        return "";
    }

    efetuandoInscricao = true;
    return "Impressao 3D: " + to_string(vagas) + " vagas restantes";
}

string CyberSeguranca() {
    static int vagas = 25;
    static bool efetuandoInscricao = false;

    if (efetuandoInscricao) {
        if (vagas > 0) vagas--;
        efetuandoInscricao = false;
        return "";
    }

    efetuandoInscricao = true;
    return "CyberSeguranca: " + to_string(vagas) + " vagas restantes";
}

string IA() {
    static int vagas = 35;
    static bool efetuandoInscricao = false;

    if (efetuandoInscricao) {
        if (vagas > 0) vagas--;
        efetuandoInscricao = false;
        return "";
    }

    efetuandoInscricao = true;
    return "I.A: " + to_string(vagas) + " vagas restantes";
}

string EdicaoVideo() {
    static int vagas = 20;
    static bool efetuandoInscricao = false;

    if (efetuandoInscricao) {
        if (vagas > 0) vagas--;
        efetuandoInscricao = false;
        return "";
    }

    efetuandoInscricao = true;
    return "Edicao de Video: " + to_string(vagas) + " vagas restantes";
}

string RedesComp() {
    static int vagas = 20;
    static bool efetuandoInscricao = false;

    if (efetuandoInscricao) {
        if (vagas > 0) vagas--;
        efetuandoInscricao = false;
        return "";
    }

    efetuandoInscricao = true;
    return "Redes de Computadores: " + to_string(vagas) + " vagas restantes";
}
