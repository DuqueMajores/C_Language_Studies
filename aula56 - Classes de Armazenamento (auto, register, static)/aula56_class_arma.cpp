#include <iostream>
#include <vector>
using namespace std;

void regressivo(auto n){
    for(auto i = n; i > 0; i--){
        cout << i << endl;
    }
}
void somador(){
    static auto i = 0;
    i++;
    cout << i << endl;
}

int main(){

    vector<int> n{1, 2, 3, 4, 5, 6};
    for(auto i:n){
    cout << i << endl;
}

    regressivo(10);

    somador();
    somador();
    somador();

    return 0;
}
