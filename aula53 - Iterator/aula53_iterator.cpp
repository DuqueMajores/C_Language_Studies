#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> produtos = {"mouses", "teclado", "monitor", "gabnete", "som"};

    vector<string>::iterator it;

    cout << produtos[0] << endl;

    it = produtos.begin();
    cout << *it << endl;

    //it = protudos.end()-1;
    //cout << *it << endl;

    //advance
    //next
    //prev

    //advance(it, 3);

    //cout << *next(it, 3) << endl;

    //cout << *prev(it, 1) << endl;

    for(it = produtos.begin(); it != produtos.end(); it++){
        cout << *it << endl;
    }

    return 0;
}