#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main(){

    vector<int> num(5);

    try{
        num.at(6) = 10;
    } catch(exception& err){
        cout << "Erro: Tamanho fora do limite" << endl; 
    }

    //err.what()

    return 0;
}