#include <iostream>
using namespace std;
int main() {
  char two;
  cout << "Enter the value : ";
  cin >> two;
  if (two >= 'a' && two <= 'z')
  {
    cout << "Is Lowercase";
  }
  else if (two >= 'A' && two <= 'Z')
  {
    cout << "Is Uppercase";
  }
  else if (two >= '0' && two <= '9')
  {
    cout << "Is Number";
  }
  else {
    cout << "ERROR";
  }
  
  return 0;

}
