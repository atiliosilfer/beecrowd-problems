#include <cctype>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
  int n;
  string str;

  cin >> n;
  cin.ignore();

  while (n > 0) {
    getline(cin, str);

    string occultMessage = "";
    int i = 0;

    while (str[i]) {
      if (str[i] == ' ')
        i++;
      else {
        occultMessage += str[i];

        while (isalpha(str[i]))
          i++;
      }
    }

    cout << occultMessage << endl;

    n--;
  }

  return 0;
}