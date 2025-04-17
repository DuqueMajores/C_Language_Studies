#include <iostream>
#include <list>
using namespace std;

void change(string *pr);

int main(){

    string alpha[5];

    alpha[0] = "A";
    alpha[1] = "B";
    alpha[2] = "C";
    alpha[3] = "D";
    alpha[4] = "E";

    for(int i=0; i<5; i++){
        cout << alpha[i] << " ,";
    }
    
    cout << endl;
    string *pr = &alpha[2];
    cout << *pr << endl;
    change(&alpha[2]);

    for(int i=0; i<5; i++){
        cout << alpha[i] << " ,";
    }

    return 0;
}

void change(string *pr){
    *pr = "CC";
    cout << *pr << endl;
}