#include <iostream>
using namespace std;

int main() {
  int a = 3;
  int b = 6;

  // for(int i = 0 ; i <= 9 ; i++) {
  //   cout << ~i << endl;
  // } 

  cout << " a&b :  " <<  (a & b) <<endl;
  cout << " a|b :  " <<  (a | b) <<endl;
  cout << "  ~a :  " <<  ~a << endl;
  cout << " a^b :  " <<  (a ^ b) <<endl;
  cout << " a<b :  " <<  (a < b) <<endl;
  cout << " a>b :  " <<  (a > b) <<endl;

  return 0;
}