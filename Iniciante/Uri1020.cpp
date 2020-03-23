#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    int idade;
    int anos;
    int meses;
    int dias;

    cin >> idade;

    anos = idade/365;
    idade = idade%365;
    meses = idade/30;
    idade = idade%30;
    dias = idade;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return 0;
}