#include <iostream>
using namespace std;

void dot();

struct carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){

    carro c1;     
    carro c2;

    c1.nome = "Sandero";
    c1.cor = "Prata";
    c1.pot = 450;
    c1.velMax = 180;

    c2.nome = "Sienna";
    c2.cor = "Preto";
    c2.pot = 440;
    c2.velMax = 190;

    cout << " Nome.............:" << c1.nome << endl;
    cout << " Cor..............:" << c1.cor << endl;
    cout << " Potencia.........:" << c1.pot << endl;
    cout << " Velocidade Maxima:" << c1.velMax << endl;

    dot();

    cout << " Nome.............:" << c2.nome << endl;
    cout << " Cor..............:" << c2.cor << endl;
    cout << " Potencia.........:" << c2.pot << endl;
    cout << " Velocidade Maxima:" << c2.velMax << endl;

    cin.get();
    return 0;
}

void dot(){
    cout << "--------------------------" << endl;
}

