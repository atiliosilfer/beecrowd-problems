#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    int x;
    double n;
    cin >> x >> n;
    cout << fixed << setprecision(2);

    switch (x)
    {
    case 1:
        cout << "Total: R$ " << n*4.0 << endl;
        break;
    case 2:
        cout << "Total: R$ " << n*4.50 << endl;
        break;
    case 3:
        cout << "Total: R$ " << n*5.00 << endl;
        break;
    case 4:
        cout << "Total: R$ " << n*2.00 << endl;
        break;
    case 5:
        cout << "Total: R$ " << n*1.50 << endl;
        break;
    default:
        break;
    }
    return 0;
}