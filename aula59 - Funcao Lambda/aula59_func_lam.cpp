#include <iostream>
#include <vector>
using namespace std;

int main(){

    [](){};

    auto maior{[](int n1, int n2)->int{
        return (n1>n2)?n1:n2;
    }};

    cout << maior(2, 6) << endl;

    auto menor{[](vector<int> n)->int{
        int m;
        for(int c:n){
            m = (m<c)?m:c;
        }
        return m;
    }};

    cout << menor({1, 2, 3, 4}) << endl;

    int x1, x2, x3;
    x1= 1;
    x2 = 1;
    x3 = 1;

    auto soma{[=]()->int{
        return x1+x2+x3;
    }};

    cout << soma() << endl;

    return 0;  
}