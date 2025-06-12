#include <iostream>
using namespace std;

int main() {
  int num1 = 0;
  cout << "Enter the number : ";
  cin >> num1;
  
  if( num1 % num1 == 0 ){
    cout << "Is prime number";
  }
  else {
    cout << "Is not prime number";
  }
  return 0;
}