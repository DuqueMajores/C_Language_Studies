//Calculadora com Tratamento de Erros

#include <iostream>
#include <exception>
#include <cstdlib>
#include <limits>

using namespace std;

int opc;
int n1;
int n2;
int somar;
int subtrair;
int multiply;
int dividir;

void dot();
void menu();
void calcular();

int main(){
    system("cls");
    dot();
    cout << " Calculadora" << endl;
    while(true){
        menu();
        calcular();
        if(opc >= 5){
            break;
        }
    }

    return 0;
}

void dot(){
    cout << "----------------------------------" << endl;
}
void menu(){
    dot();
    while(true){
        come:
        cout << " 1.Somar\n 2.Subtrair\n 3.Multiplicar\n 4.Dividir\n 5.Sair\n Opcao: ";
        cin >> opc;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            dot();
            cout << " Opcao invalida..." << endl;
            dot();
            goto come;
        }
        break;
    }
}
void calcular(){
    switch(opc){
        case 1:
            dot();
            try{
                cout << " Primeiro numero: ";
                cin >> n1;
                cout << " Segundo numero: ";
                cin >> n2;
            } catch(exception& err) {
                cout << " Erro: numero invalido;;" << endl;
            }
            dot();
            somar = n1 + n2;
            cout << somar << endl;
            break;
        case 2:
            dot();
            try{
                cout << " Primeiro numero: ";
                cin >> n1;
                cout << " Segundo numero: ";
                cin >> n2;
            } catch(exception& err) {
                cout << " Erro: numero invalido;;" << endl;
            }
            dot();
            subtrair = n1 - n2;
            cout << subtrair << endl;
            break;
        case 3:
            dot();
            try{
                cout << " Primeiro numero: ";
                cin >> n1;
                cout << " Segundo numero: ";
                cin >> n2;
            } catch(exception& err) {
                cout << " Erro: numero invalido;;" << endl;
            }
            dot();
            multiply = n1 * n2;
            cout << multiply << endl;
            break;
        case 4:
            dot();
            try{
                cout << " Primeiro numero: ";
                cin >> n1;
                cout << " Segundo numero: ";
                cin >> n2;
            } catch(exception& err) {
                cout << " Erro: numero invalido;;" << endl;
            }
            dot();
            dividir = n1 / n2;
            cout << dividir << endl;
            break;
        default:
            dot();
            cout << " " << endl;
            break;
    }
}
