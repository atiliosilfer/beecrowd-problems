#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    const double pi = 3.14159;
    double A,B,C;
    cin >> A >> B >> C;
    cout << fixed << setprecision (3) << "TRIANGULO: " << ((A*C)/2) << endl;
    cout << "CIRCULO: " << (pi*C*C) << endl;
    cout << "TRAPEZIO: " << (((A+B)*C)/2) << endl;
    cout << "QUADRADO: " << (B*B) << endl;
    cout << "RETANGULO: " << (A*B) << endl;
    return 0;
}