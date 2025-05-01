#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int num;

vector<int> nums;
vector<int>::iterator ns;
vector<int> pares;
vector<int>::iterator pr;

int main(){

    for(int i = 0; i < 10; i++){
        cout << " ";
        cin >> num;
        nums.push_back(num);
        system("cls");
    }
    cout << "Digite 10 numeros inteiros:" << endl;
    for(ns = nums.begin(); ns != nums.end(); ns++){
        cout << *ns << " ";
    }

    cout << endl;

    for(ns = nums.begin(); ns != nums.end(); ns++){
        if(*ns % 2 == 0){
            pares.push_back(*ns);
        }
    }

    cout << "Numeros pares encontrados:" << endl;
    for(pr = pares.begin(); pr != pares.end(); pr++){
        cout << *pr << " ";
    }

    return 0;
}
