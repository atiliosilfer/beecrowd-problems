#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    int valor;
    int qtdd;

    cin >> valor;
    
    cout << valor << "\n";

    qtdd = valor/100;
    cout << qtdd << " nota(s) de R$ 100,00\n";
    valor = valor%100;
    
    qtdd = valor/50;
    cout << qtdd << " nota(s) de R$ 50,00\n";
    valor = valor%50;

    qtdd = valor/20;
    cout << qtdd << " nota(s) de R$ 20,00\n";
    valor = valor%20;

    qtdd = valor/10;
    cout << qtdd << " nota(s) de R$ 10,00\n";
    valor = valor%10;

    qtdd = valor/5;
    cout << qtdd << " nota(s) de R$ 5,00\n";
    valor = valor%5;

    qtdd = valor/2;
    cout << qtdd << " nota(s) de R$ 2,00\n";
    valor = valor%2;

    qtdd = valor/1;
    cout << qtdd << " nota(s) de R$ 1,00\n";
    
    return 0;
}