#include <iostream>
using namespace std;

void dot();
void menu();
void switcase();

int opt = 0;
bool loop = true;
string name = "";
float note = 0.0;
int age = 0;

struct Aluno{
    string nome;
    int idade;
    float nota;
    int size;

    void adicionarAlunos(string *stnome, int *stidade, float *stnota){
        nome = *stnome;
        idade = *stidade;
        nota = *stnota;
        size += 1;
    }
    void listarAlunos(){
        for(int i=0; i<size; i++){
            dot();
            cout << nome[i] << endl;
            cout << idade << endl;
            cout << nota << endl;
        }
    }
    void calcularMedia(){
        
    }
};

int main(){
    while(loop){
        dot();
        menu();
        switcase();
    }

    cin.get();
    delete alunos;
    return 0;
}

void dot(){
    cout << "-------------------------";
}
void menu(){
    cout << " 1. Adcionar Aluno\n 2. Listar Alunos\n 3. Medias das Notas\n Opcao: ";
    cin >> opt;
}
void switcase(){
    switch(opt){
        case 1:
            dot();
            cout << " Nome: ";
            cin >> name;
            cout << " Idade: ";
            cin >> age;
            cout << " Nota: ";
            cin >> note;

            adicionarAlunos(&name, &age , &note);
        case 2:
            listarAlunos();
    }
}
