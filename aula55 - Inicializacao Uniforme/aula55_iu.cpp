#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
    public:
        int tipo;
        string nome;
};

int main(){

    int num{10};
    string nome{"Moises"};
    vector<int> valores{1, 2, 3, 4, 5};
    map<string, string> capitais{{"MG", "RJ"}};

    Pessoa p1{"Moises", 28};
    Pessoa p2{"Bruno", 52};

    Veiculo v1{1, "Ford"};

    int num2{};
    cout << " Numero: ";
    cin >> num2;
    cout << num2 << endl;

    return 0;
}