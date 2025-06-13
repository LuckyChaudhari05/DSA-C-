#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cout << "Enter the Number : ";
  cin >> n;
  int num = 0;
  
  for(int i = 1; i <= n; i++) 
  {
    if(i % 2 == 0){
       num = num + i;
    }
  }
  cout << num;
  return 0;
}