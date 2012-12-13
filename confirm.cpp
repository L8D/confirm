#include <iostream>
#include <string>
using namespace std;
string confirm(string confirmText) {
  cout << confirmText << " [Y/n] ";
  string confirmString;
  cin >> confirmString;
  return confirmString;
  }
int main (int argc, char * argv[]) {
  string confirmString;
  if (argc > 1) {
    confirmString = confirm(argv[1]);
    }
  else if (argc == 1) {
    confirmString = confirm("");
    }
  if (confirmString == "Y" | confirmString == "y") {
    return 0;
  }
  else if (confirmString == "N" | confirmString == "n") {
    return 1;
  }
  else { 
    return 2;
  }
}
