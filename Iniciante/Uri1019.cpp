#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    int tempo;
    int horas;
    int minutos;
    int segundos;

    cin >> tempo;

    segundos = tempo%60;
    minutos = tempo/60;
    horas = minutos/60;
    minutos = minutos%60;

    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}