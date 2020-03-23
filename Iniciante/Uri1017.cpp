#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    double t,v,litros;
    cin >> t >> v;
    litros = (t*v)/12; 

    cout << fixed << setprecision (3) << litros << endl;
    return 0;
}