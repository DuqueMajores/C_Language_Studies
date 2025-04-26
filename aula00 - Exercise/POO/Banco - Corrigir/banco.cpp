#include <iostream>
#include <cstdlib>
#include <limits>
#include <vector>
#include "banco.h"
using namespace std;

int opBank;
string nameAcont;
string nameCadastro;
int numAcont;
int opAcont;
int valorSaldo;
int valorDeposito;
bool loopBank = true;
bool loopAcont = true;
bool loopSystem = true;

void dot();
void menuBanco();;
void switBanco();
void login();
void cadastrar();

void menuConta();
void switConta();
void depositar();
void sacar();
void saldo();
void acont();

vector<ContaBancaria*> conta;
ContaBancaria* c;

int main(){
    while(loopSystem){
        while(loopBank){
            menuBanco();
            switBanco();
            system("cls");
        }
        loopBank = true;
        while(loopAcont){
            menuConta();
            switConta();
            system("cls");
        }
        loopAcont = true;
    }

    return 0;
}

void dot(){
    cout << "----------------------------" << endl;
}
void menuBanco(){
    dot();
    while(true){
        cout << " 1.Loguin\n 2.Cadastrar\n 3.Sair\n >>> ";
        cin >> opBank;

        if(cin.fail() || opBank < 1 || opBank > 3){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Valor invalido. Tente novamente..." << endl;
            continue;
        } else {
            break;
        }
    }
}
void switBanco(){
    switch(opBank){
        case 1:
            login();
            break;
        case 2:
            cadastrar();
            break;
        case 3:
            dot();
            cout << " Volte Sempre!" << endl;
            loopBank = false;
            loopAcont = false;
            loopSystem = false;
            break;
        default:
            dot();
            cout << " Valor invalido. Digite novamente..." << endl;
    }
}
void login(){
    dot();
    while(true){
        cout << " Nome: ";
        cin >> nameAcont;
        cout << " Conta: ";
        cin >> numAcont;

        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Erro. Digite novamente..." << endl;
            continue;
        } else {
            loopBank = false;
            break;
        }
    }
}
void cadastrar(){
    dot();
    while(true){
        cout << " Nome: ";
        cin >> nameCadastro;

        if(cin.fail()){

        } else {
            c = new ContaBancaria();
            c->cadastrar(nameCadastro);
            conta.push_back(c);
        }
        break;
    }
    c->exibirConta();
    system("pause");
}

void menuConta(){
    dot();
    while(true){
        cout << " 1.Depositar\n 2.Sacar\n 3.Saldo\n 4.Conta\n 5.Sair\n >>> ";
        cin >> opAcont;

        if(cin.fail() || opAcont < 1 || opAcont > 5){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Opcao invalida. Digite novamente..." << endl;
            continue;
        } else {
            break;
        }
        break;
    }
}
void switConta(){
    switch(opAcont){
        case 1:
            depositar();
            break;
        case 2:
            sacar();
            break;
        case 3:
            saldo();
            break;
        case 4:
            acont();
            break;
        case 5:
            dot();
            cout << " Saindo da conta..." << endl;
            loopAcont = false;
            break;
        default:
            dot();
            cout << " Valor invalido. Digite novamente..." << endl;
    }
}
void depositar(){
    dot();
    while(true){
        cout << " Valor a depositar: ";
        cin >> valorDeposito;

        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Valor invalido. Digite novamente...";
            continue;
        } else {
            c->depositarSaldo(valorDeposito);
        }
        break;
    }
    cout << " Valor de " << valorDeposito << " depositado com sucesso!" << endl;
    system("pause");
}
void sacar(){
    dot();
    while(true){
        cout << " Valor a sacar: ";
        cin >> valorSaldo;

        if(cin.fail()){

        } else {
            c->sacarSaldo(valorSaldo);
        }
        break;
    }
    cout << " Voce sacou " << valorSaldo << " com sucesso!" << endl;
    system("pause");
}
void saldo(){
    dot();
    c->exibirSaldo();
    system("pause");
}
void acont(){
    dot();
    c->getTitular();
    c->exibirSaldo();
    system("pause");
}
