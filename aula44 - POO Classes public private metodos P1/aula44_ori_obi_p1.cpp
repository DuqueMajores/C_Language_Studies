#include <iostream>
using namespace std;

class Aviao{

public:
    int vel = 0;
    int velMax;
    string tipo;
    void ini(int tp);

private:

};

void Aviao::ini(int tp){
    if(tp == 1){
        this->velMax = 1200;
        this->tipo = "Jato";
    } else if(tp == 2){
        this->velMax = 400;
        this->tipo = "Monomotor";
    } else if(tp == 3){
        this->velMax = 250;
        this->tipo = "Planador";
    }
}

int main(){

    Aviao *av1 = new Aviao();
    Aviao *av2 = new Aviao();

    av1->ini(3);
    av2->ini(2);

    cout << av1->velMax << endl;
    cout << av1->tipo << endl;
    cout << endl;
    cout << av2->velMax << endl;
    cout << av2->tipo << endl;

    return 0;
}