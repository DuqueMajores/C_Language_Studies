#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED

#include <iostream>
#include <string>
#include <random>
using namespace std;

class ContaBancaria{
    public:
        void cadastrar(string titular);
        void exibirConta();
        void depositarSaldo(double saldo);
        void sacarSaldo(double saldo);
        void exibirSaldo();
        string getTitular();
        int getNumeroConta();
    private:
        string titular;
        int numeroConta;
        double saldo;
};

void ContaBancaria::cadastrar(string titular){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(100000000, 999999999);

    this->titular = titular;
    this->numeroConta = distrib(gen);
    this->saldo = 0;
}
void ContaBancaria::exibirConta(){
    cout << " Titular: " << titular << endl;
    cout << " Conta..: " << numeroConta << endl;
    cout << " Saldo..: " << saldo << endl;
}
void ContaBancaria::depositarSaldo(double saldo){
    this->saldo = saldo;
}
void ContaBancaria::sacarSaldo(double saldo){
    if(saldo > 0){
        this->saldo -= saldo;
    } else {
        cout << " Saldo insuficiente" << endl;
    }
}
void ContaBancaria::exibirSaldo(){
    cout << " Saldo atual: " << saldo << endl;
}
string ContaBancaria::getTitular(){
    cout << " Nome do Titular: " << titular << endl;
}
int ContaBancaria::getNumeroConta(){
    cout << " Numero da Conta: " << numeroConta << endl;
}

#endif
