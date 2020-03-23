#include <iostream> 
#include <iomanip> 
  
using namespace std; 
  
int main()
{ 
    double a,b,c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1);
    if (abs(b-c) < a && a < b+c &&
        abs(a-c) < b && b < a+c &&
        abs(a-b) < c && c < a+b) {
            cout << "Perimetro = " << (a+b+c) << endl;
    } else {
         cout << "Area = " << ((a+b)*c)/2 << endl;
    }
    return 0; 
} 