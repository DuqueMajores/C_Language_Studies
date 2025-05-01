#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){

    fstream arquivo;

    string nome;
    string linha;
    string opc;

    arquivo.open("teste.txt", ios::out);

    while(true){
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << endl;

        cout << "Digitar outro? [s/n]: ";
        cin >> opc;
        if((opc == "s") or (opc == "S")){
            continue;
        } else {
            break;
        }

    }

    arquivo.close();

    arquivo.open("teste.txt", ios::in);

    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            cout << linha << endl;
        } 
    } else {
            cout << "Sem Arquivo";
    }

    arquivo.close();

    return 0;
}
