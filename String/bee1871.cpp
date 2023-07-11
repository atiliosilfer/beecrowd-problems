#include <cctype>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
  int n, m;
  int sum = 0;

  cin >> n >> m;

  while (n != 0 && m != 0) {
    sum = n + m;
    string sumStr = to_string(sum);
    string result = "";

    for (int i = 0; i < sumStr.length(); i++) {
      if (sumStr[i] != '0')
        result += sumStr[i];
    }

    cout << result << endl;

    cin >> n >> m;
  }

  return 0;
}