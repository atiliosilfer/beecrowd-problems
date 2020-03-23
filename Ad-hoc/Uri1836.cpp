#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    int t;
    string nome;
    float lvl;
    float bs, iv, ev, s, hp;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> nome >> lvl;
        cout << "Caso #" << i+1 << ": " << nome << " nivel " << lvl << endl;
        for (int j = 0; j < 4; j++){
            cin >> bs >> iv >> ev;

            hp =  (((iv + bs + (sqrt(ev)/8) + 50) * lvl)/50) + 10;
            s = (((iv + bs + (sqrt(ev)/8))*lvl)/50)+5;

            if ( j == 0 ) {
                cout << "HP: " << (int)hp << endl;
            } else if (j == 1) {
                cout << "AT: " << (int)s << endl;
            } else if (j == 2) {
                cout << "DF: " << (int)s << endl;
            }else if (j == 3) {
                cout << "SP: " << (int)s << endl;
            }
        }
    }


    return 0;
}