#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Aviao{
public:
    int vel = 0;
    int velMax;
    string tipo;

    Aviao(int tp);
    void imprimir();

private:

};

Aviao::Aviao(int tp){
    if(tp == 1){
        this->tipo = "Jato";
        this->velMax = 1200;
    } else if(tp == 2){
        this->tipo = "Monomotor";
        this->velMax = 700;
    } else if(tp == 3){
        this->tipo = "Planador";
        this->velMax = 250;
    }
}
void Aviao::imprimir(){
    cout << "Tipo.............: " << tipo << endl;
    cout << "Velocidade Maxima: " << velMax << endl;
    cout << "Velocidade Atual.: " << vel << endl;
    cout << "---------------------------" << endl;
}

#endif
