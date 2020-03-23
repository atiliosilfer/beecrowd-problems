#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    double valor;
    int valorNotas, valorMoedas, qtdd;

    cin >> valor;

    valorNotas = (int)valor;
    valorMoedas = (valor - valorNotas)*100;


    cout <<  fixed << setprecision (2) << "NOTAS:" << "\n";

    qtdd = valorNotas/100;    
    cout << qtdd << " nota(s) de R$ 100.00\n";
    valorNotas = valorNotas%100;

    qtdd = valorNotas/50;
    cout << qtdd << " nota(s) de R$ 50.00\n";
    valorNotas = valorNotas%50;
    
    qtdd = valorNotas/20;
    cout << qtdd << " nota(s) de R$ 20.00\n";
    valorNotas = valorNotas%20;
    
    qtdd = valorNotas/10;
    cout << qtdd << " nota(s) de R$ 10.00\n";
    valorNotas = valorNotas%10;
    
    qtdd = valorNotas/5;
    cout << qtdd << " nota(s) de R$ 5.00\n";
    valorNotas = valorNotas%5;
    
    qtdd = valorNotas/2;
    cout << qtdd << " nota(s) de R$ 2.00\n";
    valorNotas = valorNotas%2;
    
    
    cout << "MOEDAS:" << "\n";
    
    qtdd = valorNotas/1;
    cout << qtdd << " moeda(s) de R$ 1.00\n";

    qtdd = valorMoedas/50;
    cout << qtdd << " moeda(s) de R$ 0.50\n";
    valorMoedas = valorMoedas%50;

    qtdd = valorMoedas/25;
    cout << qtdd << " moeda(s) de R$ 0.25\n";
    valorMoedas = valorMoedas%25;

    qtdd = valorMoedas/10;
    cout << qtdd << " moeda(s) de R$ 0.10\n";
    valorMoedas = valorMoedas%10;

    qtdd = valorMoedas/5;
    cout << qtdd << " moeda(s) de R$ 0.05\n";
    valorMoedas = valorMoedas%5;

    qtdd = valorMoedas/1;
    cout << qtdd << " moeda(s) de R$ 0.01\n";
    
    return 0;
}