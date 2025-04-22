#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){

    float pi = M_PI;
    printf("Valor de Pi: %.2f\n", pi);

    int num = 5;
    printf("Valor de num: %07d\n", num);

    int num1 = 15;
    cout << "Hexadecimal: " << hex << num1 << endl;
    cout << "Octadecimal: " << oct << num1 << endl;
    cout << "Decimal: " << dec << num1 << endl;

    cout.precision(3);
    cout << "Pi com duas casas: " << pi << endl;

    cout.precision(-1);
    cout << "Volta ao normal: " << pi << endl;

    cout << "Notacao cientifica: " << std::scientific << pi << endl;

    return 0;
}