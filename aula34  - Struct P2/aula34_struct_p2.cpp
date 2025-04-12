#include <iostream>
using namespace std;

void dot();
void spc();

struct Criatura{
    string nome;
    string raca;
    int vida;
    int poder;
    int resist;

    void insert(string stnome, string straca, int stvida, int stpoder, int stresist){
        nome = stnome;
        raca = straca;
        vida = stvida;
        poder = stpoder;
        resist = stresist;
    }
    void show(){
        if(vida == 0){
            dot();
            cout << "Criatura Derrotada!" << endl;
            dot();
        } else {
            cout << " Nome........:" << nome << endl;
            cout << " Raca........:" << raca << endl;
            cout << " Vida........:" << vida << endl;
            cout << " Poder.......:" << poder << endl;
            cout << " Resistencia.:" << resist << endl;
            dot();
        }
    }
    void changeNome(string cgnome){
        nome = cgnome;
    }
    void changeRaca(string cgraca){
        raca = cgraca;
    }
    void changeVida(int cgvida){
        vida = cgvida;
    }
    void changePoder(int cgpoder){
        poder = cgpoder;
    }
    void changeResist(int cgresist){
        resist = cgresist;
    }
};

int main(){

    Criatura bat;

    bat.insert("bat", "vampiro", 40, 2, 5);

    spc();
    bat.show();

    bat.changeVida(50);
    bat.show();

    bat.changeVida(0);
    bat.show();

    cin.get();
    return 0;
}

void dot(){
    cout << "-------------------------" << endl;
}
void spc(){
    cout << endl;
}
