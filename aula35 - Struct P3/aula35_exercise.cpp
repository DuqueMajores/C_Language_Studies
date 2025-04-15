#include <list>
#include <cstdlib>
#include <iostream>
using namespace std;

bool loop = true;
bool loop2 = true;
bool loop3 = true;
int menu_op = 0;
int tam = 0;

void dot();
void menu();
void switcase();

struct Livro {
    string titulo;
    string autor;
    int anoPubli;
    bool disponivel;

    void insert(string sttitulo, string stautor, int stanoPubli, bool stdisponivel) {
        titulo = sttitulo;
        autor = stautor;
        anoPubli = stanoPubli;
        disponivel = stdisponivel;
    }
    void excluir(){
        titulo = "";
    }
    void status() {
        dot();
        cout << " Titulo.......: " << titulo << endl;
        cout << " Autor........: " << autor << endl;
        cout << " Ano de Pubi..: " << anoPubli << endl;
        cout << " Disponivel...: " << (disponivel ? "Sim" : "Nao") << endl;
    }
    void alugar(){
        if(disponivel == false){
            cout << " Livro ja foi alugado" << endl;
        } else {
            disponivel = false;
            cout << " Livro alugado com sucesso!" << endl;
        }

    }
    void devolver() {
        if(disponivel == true){
            cout << " Livro ainda em estoque" << endl;
        } else {
            disponivel = true;
            cout << " Livro devolvido com sucesso!" << endl;
        }
    }
};

Livro *livros = new Livro[5];

int main() {
    while (loop) {
        dot();
        menu();
        switcase();
    }

    cin.get();
    return 0;
}

void dot() {
    cout << "----------------------------" << endl;
}
void menu() {
    system("cls");
    dot();
    cout << " MENU BIBLIOTECA" << endl;
    dot();
    cout << " 1. Adicionar Livro\n 2. Livros Cadastrados\n 3. Pesquisar Livro\n 4. Devolver/Alugar\n 5. Excluir Livro\n 6. Sair\n Opcao: ";
    cin >> menu_op;
}
void switcase() {
    dot();
    switch (menu_op) {
        case 1: {
            while (loop2) {
                if (tam == 5) {
                    cout << " Biblioteca Cheia!" << endl;
                    loop2 = false;
                    break;
                }

                string opt = "";
                string tit = "";
                string aut = "";
                int anpu = 0;
                bool disp = true;

                dot();
                cout << " Titulo: ";
                cin >> tit;
                cout << " Autor: ";
                cin >> aut;
                cout << " Ano da Publi: ";
                cin >> anpu;

                livros[tam].insert(tit, aut, anpu, disp);

                dot();
            come:
                cout << " Cadastrar outro? [sim/nao]: ";
                cin >> opt;
                if (opt == "sim" || opt == "Sim") {
                    tam += 1;
                    continue;
                } else if (opt == "nao" || opt == "Nao") {
                    tam += 1;
                    loop2 = false;
                    break;
                } else {
                    goto come;
                }
            }
            loop2 = true;
            break;
        }

        case 2: {
            for (int i = 0; i < tam; i++) {
                if(livros[i].titulo == ""){
                    continue;
                }
                livros[i].status();
            }
            dot();
            cout << " Fim da contagem" << endl;
            dot();
            system("pause");
            break;
        }

        case 3: {
            while (loop3) {
                string choose = "";
                string name = "";
                string opt = "";
                dot();
                cout << " Pesquisar livro por\n titulo / autor / ano\n ---> ";
                cin >> choose;

                if (choose == "titulo" || choose == "Titulo") {
                    cout << " Titulo: ";
                    getline(cin >> ws, name);
                } else if (choose == "autor" || choose == "Autor") {
                    cout << " Autor: ";
                    getline(cin >> ws, name);
                } else if (choose == "ano" || choose == "Ano") {
                    cout << " Ano: ";
                    cin >> name;
                }

                for (int i = 0; i < tam; i++) {
                    if ((choose == "titulo" && livros[i].titulo == name) ||
                        (choose == "autor" && livros[i].autor == name) ||
                        (choose == "ano" && to_string(livros[i].anoPubli) == name)) {
                        livros[i].status();
                    }
                }

                dot();
            come1:
                cout << " Procurar outro? [sim/nao]: ";
                cin >> opt;
                if (opt == "sim" || opt == "Sim") {
                    continue;
                } else if (opt == "nao" || opt == "Nao") {
                    loop3 = false;
                    break;
                } else {
                    goto come1;
                }
            }
            loop3 = true;
            break;
        }
        case 4: {
            string devemp = "";
            string name;
            dot();
            cout << " Devolver ou Alugar: ";
            cin >> devemp;
            if(devemp == "alugar" || devemp == "Alugar"){
                cout << " Titulo: ";
                cin >> name;
                for(int i=0; i<tam; i++){
                    if(livros[i].titulo == name){
                        livros[i].alugar();
                        break;
                    }
                }
            } else if(devemp == "devolver" || devemp == "Devolver"){
                cout << " Titulo: ";
                cin >> name;
                for(int i=0; i<tam; i++){
                    if(livros[i].titulo == name){
                        livros[i].devolver();
                        break;
                    }
                }
            }
            dot();
            system("pause");
            break;
        }
        case 5: {
            string name = "";
            dot();
            cout << " Titulo: ";
            cin >> name;

            for(int i=0; i<tam; i++){
                if(livros[i].titulo == name){
                    livros[i].excluir();
                }
            }
            dot();
            system("pause");
            break;
        }
        case 6:{
            loop = false;
            break;
        }
        default: {
            loop = false;
            break;
        }
    }
}
