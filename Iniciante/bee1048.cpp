#include <iostream>
#include <iomanip>
 
using namespace std;

void calcNewSalary(double salary, double percent) {
  double appliedSalary = 1 + (percent / 100);
  double newSalary = salary * appliedSalary;

  cout << fixed << setprecision (2) << "Novo salario: " << newSalary << endl;
  cout << "Reajuste ganho: " << (newSalary - salary) << endl;
  cout << "Em percentual: " << (int)percent << " %" << endl;
}
 
int main() {
    double salary;
    cin >> salary;

    if (salary >= 0 && salary <= 400)
      calcNewSalary(salary, 15);
    else if (salary > 400 &&  salary <= 800)
      calcNewSalary(salary, 12);
    else if (salary > 800 &&  salary <= 1200)
      calcNewSalary(salary, 10);
    else if (salary > 1200 &&  salary <= 2000)
      calcNewSalary(salary, 7);
    else
      calcNewSalary(salary, 4);

    return 0;
}