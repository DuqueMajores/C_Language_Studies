#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> aula;
    list<int>::iterator it;

    int tam = 0;
    for(int i=0; i<tam; i++){
        aula.push_back(i);
    }

    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

    it = aula.begin();
    advance(it, 3);

    //adiciona
    aula.insert(it, 0);

    // 0, 1, 0, 3, 4, 5, 6, 7, 8, 9

    //remove
    aula.erase(--it);

    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

    //----------------------------------
    
    //limpa a lista
    aula.clear();

    //--------------------------------

    list<int> teste;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);


    //mescla os elemntos das listas
    aula.merge(teste);

    cin.get();
    return 0;
}