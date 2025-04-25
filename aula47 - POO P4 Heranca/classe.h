#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Veiculo{
public:
    int vel;
    int blind;
    int rodas;

    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imp();

private:
    int tipo; // 1.Moto 2.Carro 3.Caminhao 4.Tanque
    int velMax;
    bool arma;

};
void Veiculo::imp(){
    cout << "Tipo veiculo.....: " << tipo << endl;
    cout << "Velocidade Maxima: " << velMax << endl;
    cout << "Rodas............: " << rodas << endl;
    cout << "Blindagem........: " << blind << endl;
    cout << "Armamento........: " << arma << endl;
    cout << "----------------------------" << endl;
}
void Veiculo::setTipo(int tp){
    tipo = tp;
}
void Veiculo::setVelMax(int vm){
    velMax = vm;
}
void Veiculo::setArma(bool ar){
    arma = ar;
}

class Moto:public Veiculo{
public:
    Moto();    
};
Moto::Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}

class Carro:public Veiculo{
    public:
        Carro();
};
Carro::Carro(){
    vel = 0;
    blind = 0;
    rodas = 4;
    setTipo(2);
    setVelMax(180);
    setArma(false);
}

class Tanque:public Veiculo{
    public:
        Tanque();
};
Tanque::Tanque(){
    vel = 0;
    blind = 100;
    rodas = 10;
    setTipo(4);
    setVelMax(70);
    setArma(true);
}

#endif