#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Veiculo{

public:
    int vel;
    int tipo;

    Veiculo(int tp);
    int getVelMax();
    bool getLigado();
    void setLigado(int l);

private:
    string nome;
    int velMax;
    bool ligado;

    void setVelMax(int vn);

};

Veiculo::Veiculo(int tp){//1-Carro 2-Aviao 3-Navio
    tipo=tp;
    if(tipo == 1){
        nome = "Carro";
        setVelMax(200);
    } else if(tipo == 2){
        nome = "Aviao";
        setVelMax(800);
    } else if(tipo == 3){
        nome = "Navio";
        setVelMax(120);
    }
    setLigado(0);
}

void Veiculo::setLigado(int l){
    if(l == 1){
        ligado = true;
    } else if (l == 0){
        ligado = false;
    }
}

bool Veiculo::getLigado(){
    return ligado;
}

void Veiculo::setVelMax(int vn){
    velMax = vn;
}

int Veiculo::getVelMax(){
    return velMax;
}

#endif
