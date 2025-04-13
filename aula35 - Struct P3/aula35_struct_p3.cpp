#include <iostream>
using namespace std;

void dot();
struct npc{
    string nome;
    string raca;
    string local;
    int vida;
    int poder;
    int resist;

void insert(string stnome, string straca,
string stlocal, int stvida, int stpoder,
int stresist){
    nome = stnome;
    raca = straca;
    local = stlocal;
    vida = stvida;
    poder = stpoder;
    resist = stresist;
}
void status(){
    dot();
    cout << " Nome........:" << nome << endl;
    cout << " Raca........:" << raca << endl;
    cout << " Local.......:" << local << endl;
    cout << " Vida........:" << vida << endl;
    cout << " Poder.......:" << poder << endl;
    cout << " Resistencia.:" << resist << endl;
}
void changeNome(string stnome){
    nome = stnome;
}
void changeRaca(string straca){
    raca = straca;
}
void changeLocal(string stlocal){
    local = stlocal;
}
void changeVida(int stvida){
    vida = stvida;
}
void changePoder(int stpoder){
    poder = stpoder;
}
void changeResist(int stresist){
    resist = stresist;
}
};

int main(){

    npc *npcs= new npc[5];

    npcs[0].insert("Alex", "Bardo", "WindHelm", 100, 20, 15);
    npcs[1].insert("Kassandra", "Bardo", "WindHelm", 100, 15, 10);
    npcs[2].insert("Dova", "Elfo", "WindHelm", 100, 25, 15);
    npcs[3].insert("Camila", "Aldean", "WindHelm", 100, 10, 5);
    npcs[4].insert("Domenic", "Aldean", "WindHelm", 100, 12, 8);

    for(int i=0; i<5; i++){
        npcs[i].status();
    }

    cin.get();
    return 0;
}

void dot(){
    cout << "---------------------" << endl;
}
