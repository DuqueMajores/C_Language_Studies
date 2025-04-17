#include <iostream>
using namespace std;

void iniVetor(int *p);
void soma(int *p);

int main(){

    int *p;
    int vetor[5];
    p = vetor;

    iniVetor(vetor);

    for(int i=0; i<5; i++){
        cout << vetor[i] << endl;
    }

    cout << "---------" << endl;
    soma(vetor);


    return 0;
}

void soma(int *p){
    int soma = 0;
    soma += p[0];
    soma += p[1];
    soma += p[2];
    soma += p[3];
    soma += p[4];

    cout << " Soma: " << soma << endl;
}
void iniVetor(int *p){
    int zero;
    int um;
    int dois;
    int tres;
    int quatro;
    
    cout << " Primeiro: ";
    cin >> zero;
    cout << " Segundo: ";
    cin >> um;
    cout << " Terceiro: ";
    cin >> dois;
    cout << " Quarto: ";
    cin >> tres;
    cout << " Quinto: ";
    cin >> quatro;


    p[0] = zero;
    p[1] = um;
    p[2] = dois;
    p[3] = tres;
    p[4] = quatro;
}   