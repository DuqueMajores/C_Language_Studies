#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> aula; //vazia
    list<int> exe1(50); //com 50 posições
    list<int> exe2(5, 50); //com 5 posições contendo o valor 50 nelas
    list<int> aula1, canal1, teste1;

    list<int>::iterator it;

    //push_front() ou push_back
    int tam = 10;
    for(int i=0; i<tam; i++){
        aula.push_back(i);
    }

    //insere elemento na posição desejada
    it = aula.begin();
    advance(it, 5);
    aula.insert(it, 0);


    cout << " Tamanho da Lista: " << aula.size() << endl;

    //front() ou back()
    //pop_front() ou pop_back()
    tam = aula.size();
    for(int i=0; i<tam; i++){
        cout << aula.front() << " ,";
        aula.pop_front();
    }

    //sort() --> ordena a lista
    //reverse() --> inverte a lista

    cin.get();
    return 0;
}