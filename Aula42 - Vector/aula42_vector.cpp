#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> num;
    int tam;

    num.push_back(10);
    num.push_back(2);
    num.push_back(5);
    num.push_back(8);
    num.push_back(7);

    tam = num.size();

    for(int i=0; i<tam; i++){
        cout << num[i] << " ";
    }

    cout << endl;
    cout << "Primeiro valor: " << num.front() << endl;
    cout << "Ultimo valor: " << num.back() << endl;
    cout << "Meio: " << num.at(tam/2) << endl;

    num.insert(num.begin(), 88); //Adiciona
    num.insert(num.begin()+1, 89);
    num.insert(num.end(), 87);
    num.insert(num.end()-1, 86);

    num.erase(num.end()-1); //Revome
    num.erase(num.begin()-1);

    vector<int> beckap_num;

    while(!num.empty()){
        beckap_num.push_back(num.back());
        num.pop_back();
    }

    beckap_num.swap(num);

    num.clear();

    return 0;
}