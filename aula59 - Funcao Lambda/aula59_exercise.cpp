//Lista de Pares

#include <iostream>
#include <vector>
using namespace std;

int main(){

    auto pares{[](vector<int> nums){
        cout << "Lista Total" << endl;
        for(int c:nums){
            cout << c << " ";
        }
        cout << endl;
        cout << "Lista dos Pares " << endl;
        for(int c:nums){
            if(c % 2 == 0){
                cout << c << " ";
            }
        }
    }};

    pares({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});

    return 0;
}