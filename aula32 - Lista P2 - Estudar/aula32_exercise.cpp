//Gerenciador de Tarefas com Lista

#include <iostream>
#include <list>
#include <string>
using namespace std;

list<string> tarefas;

void menu();
void listarTarefas();
void adicionarTarefa();
void removerTarefa();

int main() {
    bool rodando = true;
    int opcao;

    while (rodando) {
        menu();
        cin >> opcao;
        cin.ignore(); // limpa o buffer

        switch (opcao) {
            case 1:
                adicionarTarefa();
                break;
            case 2:
                removerTarefa();
                break;
            case 3:
                listarTarefas();
                break;
            case 4:
                rodando = false;
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    }

    return 0;
}

void menu() {
    cout << "\n--- LISTA DE TAREFAS ---\n";
    cout << "1. Adicionar tarefa\n";
    cout << "2. Remover tarefa\n";
    cout << "3. Listar tarefas\n";
    cout << "4. Sair\n";
    cout << "Escolha uma opcao: ";
}

void listarTarefas() {
    cout << "\n--- Tarefas ---\n";
    if (tarefas.empty()) {
        cout << "Nenhuma tarefa encontrada.\n";
        return;
    }

    int i = 1;
    for (const auto& t : tarefas) {
        cout << i++ << ". " << t << endl;
    }
}

void adicionarTarefa() {
    string novaTarefa;
    cout << "Digite a nova tarefa: ";
    getline(cin, novaTarefa);
    tarefas.push_back(novaTarefa);
    cout << "Tarefa adicionada com sucesso!\n";
}

void removerTarefa() {
    if (tarefas.empty()) {
        cout << "Nenhuma tarefa para remover.\n";
        return;
    }

    listarTarefas();
    int pos;
    cout << "Digite o numero da tarefa a remover: ";
    cin >> pos;
    cin.ignore();

    if (pos <= 0 || pos > tarefas.size()) {
        cout << "Posicao invalida!\n";
        return;
    }

    auto it = tarefas.begin();
    advance(it, pos - 1);
    tarefas.erase(it);
    cout << "Tarefa removida com sucesso!\n";
}

