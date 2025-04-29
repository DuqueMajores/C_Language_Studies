// Alocação dinamica de memoria

#include <iostream>
#include <stdio.h> //Para funcao gets
#include <stdlib.h> // Para funcao malloc
using namespace std;

int main(){

    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);

    gets(vnome);
    cout << vnome;

    return 0;
}

