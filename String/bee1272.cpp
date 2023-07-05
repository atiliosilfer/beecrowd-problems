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
    bool jumpNextChar = false;

    for (int i = 0; i < str.length(); i++) {
      if (str[i] != ' ' && jumpNextChar == false) {
        occultMessage += str[i];
        jumpNextChar = true;
      } else if (str[i] == ' ') {
        jumpNextChar = false;
      }
    }

    cout << occultMessage << endl;

    n--;
  }

  return 0;
}