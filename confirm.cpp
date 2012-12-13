#include <iostream>
#include <string>
using namespace std;
string confirm() {
  cout << " [Y/n] ";
  string confirmString;
  cin >> confirmString;
  return confirmString;
  }
int main () {
  string confirmString = confirm();
  if (confirmString == "Y" | confirmString == "y") {
    return 0;
  }
  else if (confirmString == "N" | confirmString == "n") {
    return 1;
  }
  else { 
    return 3;
  }
}
