#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    double a,b,c;
    double R1,R2,delta;
    cin >> a >> b >> c;

    delta = pow(b,2)-(4*a*c);

    if (delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    } else {
        R1 = (-b + sqrt(delta))/(2*a);
        R2 = (-b - sqrt(delta))/(2*a);
        cout << fixed << setprecision(5) << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }
    return 0;
}