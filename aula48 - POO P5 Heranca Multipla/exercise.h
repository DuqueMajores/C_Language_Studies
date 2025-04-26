#ifndef EXERCISE_H_INCLUDED
#define EXERCISE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    public:
        void cadastrar(int cdtipo, string cdnome, int cdsalario);
        void exibirDados();
        void calcularSalario(int cdtipe);

    private:
        int tipo;
        string nome;
        int salario;
};
void Funcionario::cadastrar(int cdtipo, string cdnome, int cdsalario){
    this->tipo = cdtipo;
    this->nome = cdnome;
    this->salario = cdsalario;
}
void Funcionario::exibirDados(){
    if(tipo == 1){
        cout << "Nome.........: " << nome << "(GERENTE)" << endl;
        cout << "Salario Total: R$" << salario << endl;
    } else if(tipo == 2){
        cout << "Nome.........: " << nome << "(VENDEDOR)" << endl;
        cout << "Salario Total: R$" << salario << endl;
    }
}
void Funcionario::calcularSalario(int cdtipe){
    if(cdtipe == 1){
        this->salario = ((salario * 20)/100);
        cout << "Bonus Salarial: " << salario << endl; 
    } else if(cdtipe == 2){
        this->salario = ((salario * 10)/100);
        cout << "Bonus Salarial: " << salario << endl;
    }
}

class Gerente:public Funcionario{};
class Vendedor:public Funcionario{};

#endif
