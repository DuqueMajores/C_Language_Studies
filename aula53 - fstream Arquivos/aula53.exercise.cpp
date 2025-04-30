#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int opc;
float preco;
char nome[100];
char exname[100];
string linha;
int quantidade;
bool encontrado = false;

void dot();
void menu();
void swit();
void novoproduto();
void listarprodutos();
void excluirproduto();

fstream produtos;

int main(){
    while(true){
        system("cls");
        dot();
        menu();
        swit();
        if((opc < 1) or (opc > 3)){
            cout << " Encerrando programa...";
            break;
        }
    }
    return 0;
}

void dot(){
    cout << "---------------------------------" << endl;
}
void menu(){
    system("cls");
    dot();
    cout << " 1.Novo Produto\n 2.Listar Produtos\n 3.Excluir Produto\n Opcao: ";
    cin >> opc;
}
void swit(){
    switch(opc){
        case 1:
            dot();
            novoproduto();
            break;
        case 2:
            dot();
            listarprodutos();
            break;
        case 3:
            excluirproduto();
            break;
        default:
            break;
    }
}

void novoproduto(){
    produtos.open("produtos.txt", ios::out | ios::app);
    cout << " Nome: ";
    cin.ignore();
    cin.getline(nome, 100);
    cout << " Preco: ";
    cin >> preco;
    cout << " Quantidade: ";
    cin >> quantidade;

    produtos << " Nome: " << nome << " | Preco: " << preco << " | Quantidade: " << quantidade << endl;

    produtos.close();
}
void listarprodutos(){
    dot();
    produtos.open("produtos.txt", ios::in);

    if(produtos.is_open()){
        while(getline(produtos, linha)){
            cout << linha << endl;
        }
    } else {
        cout << " Arquivo inexistente" << endl;
    }

    system("pause");
    produtos.close();
}
void excluirproduto(){
    dot();
    produtos.open("produtos.txt", ios::in);
    ofstream temp("temp.txt");

    cout << " Nome do produto: ";
    cin.ignore();
    cin.getline(exname, 100);

    if(produtos.is_open() && temp.is_open()){
        while(getline(produtos, linha)){
            if(linha.find(string(exname)) == string::npos){
                temp << linha << endl;
            } else {
                encontrado = true;
            }
        }
    }

    produtos.close();
    temp.close();
    
    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");

    if(encontrado){
        cout << " Produto excluido com sucesso!" << endl;
    } else {
        cout << " Erro ao abir o arquivo" << endl;
    }

    system("pause");
}
