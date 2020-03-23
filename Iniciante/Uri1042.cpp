#include <iostream> 
#include <algorithm> 
  
using namespace std; 
  
void show (int a[]) 
{ 
    for(int i = 0; i < 3; ++i) 
        cout << a[i] << endl; 
} 
  
int main() 
{ 
    int a[3];
    cin >> a[0] >> a[1] >> a[2]; 
    int b[3] = {a[0],a[1], a[2]};

    sort(a, a+3); 
    
    show(a);
    cout << endl;
    show(b);
      
    return 0; 
} 