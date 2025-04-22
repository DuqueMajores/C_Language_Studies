#include <iostream>
using namespace std;

void somar(float *var, float valor);
void ptar(float *vect);

int main(){

    float num = 0;
    somar(&num, 15);
    cout << num << endl;

    float vetor[5];
    ptar(vetor);
    for(int i=0;i<5;i++){
        cout << vetor[i] << ", ";
    }

    return 0;
}

void somar(float *var, float valor){
    *var += valor;
}
void ptar(float *vect){
    vect[0] = 5;
    vect[1] = 0;
    vect[2] = 5;
    vect[3] = 0;
    vect[4] = 5;

}
