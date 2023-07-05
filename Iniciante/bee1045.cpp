#include <iostream>

using namespace std;

int IdentifyBiggest(double a, double b, double c) {
  if (a > b && a > c)
    return a;

  if (b > a && b > c)
    return b;

  return c;
}

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  double biggest = IdentifyBiggest(A, B, C);

  if (B == biggest) {
    B = A;
    A = biggest;
  } else if (C == biggest) {
    C = A;
    A = biggest;
  }

  if (A >= B + C) {
    cout << "NAO FORMA TRIANGULO" << endl;
    return 0;
  }

  if (A * A == (B * B) + (C * C))
    cout << "TRIANGULO RETANGULO" << endl;

  if (A * A > (B * B) + (C * C))
    cout << "TRIANGULO OBTUSANGULO" << endl;

  if (A * A < (B * B) + (C * C))
    cout << "TRIANGULO ACUTANGULO" << endl;

  if (A == B && A == C)
    cout << "TRIANGULO EQUILATERO" << endl;

  if ((A == B && B != C) || (A == C && C != B) || (C == B && B != A))
    cout << "TRIANGULO ISOSCELES" << endl;

  return 0;
}