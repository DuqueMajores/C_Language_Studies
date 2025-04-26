#include <iostream>
#include <cstdlib>
#include <limits>
#include <vector>
#include "exercise.h"
using namespace std;

int op;
int sal;
int tipo;
string nome;
bool loop = true;

void dot();
void end();
void menu();
void swit();
void exibir();
void salbase();
void cadastro();

vector<Funcionario*> funcionarios;
Funcionario* n;

int main(){
    while(loop){
        menu();
        dot();
        swit();
        system("cls");
    }

    return 0;
}

void dot(){
    cout << "----------------------------" << endl;
}
void menu(){
    while(true){
        dot();
        cout << " 1.Cadastrar\n 2.Exibir Dados\n 3.Salario Base\n 4.Sair\n Opcao: ";
        cin >> op;

        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Tente novamente..." << endl;
            continue;
        } else {
            break;
        }
    }
}
void swit(){
    switch(op){
        case 1:
            cadastro(); 
            break;
        case 2:
            exibir();
            break;
        case 3:
            salbase();
            break;
        case 4:
            end();
            break;
        default:
            cout << " Valor invalido..." << endl;
    }
}
void cadastro(){
    while(true){

        cout << " 1.Gerente / 2.vendedor: ";
        cin >> tipo;
        if(cin.fail() || (tipo != 1 && tipo != 2)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Valor invalido. Digite novamente..." << endl;
            continue;
        }

        cout << " Nome: ";
        cin >> ws;
        getline(cin, nome);

        comeback:
        cout << " Salario: ";
        cin >> sal;
        if(cin.fail() || sal < 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Salario invalido. Digite novamente..." << endl;
            goto comeback;
        }

        if(tipo == 1){
            n = new Gerente();
        } else if(tipo == 2){
            n = new Vendedor();
        }
        n->cadastrar(tipo, nome, sal);
        funcionarios.push_back(n);
        cout << " Funcionario cadastrado com sucesso!" << endl;
        break;
    }
}
void exibir(){
    if(funcionarios.empty()){
        cout << " Nenhum funcionario cadastrado" << endl;
    } else {
        for(size_t i=0; i<funcionarios.size(); ++i){
            funcionarios[i]->exibirDados();
            dot();
        }
    }
    system("pause");
}
void salbase(){
    dot();
}
void end(){
    dot();
    for(size_t i=0; i<funcionarios.size(); ++i){
        delete funcionarios[i];
    }
    funcionarios.clear();
    loop = false;
}
