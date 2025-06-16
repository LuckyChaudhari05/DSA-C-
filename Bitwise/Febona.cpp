#include <iostream>
using namespace std;

int main(){
  int num = 0;
  cout<<"Enter the number : ";
  cin>>num;
  int num2 = 0;
  for(int i = 2; i<=num;i++){
    num2 = (i - 1) + (i - 2);
    cout<<num2<<endl;
  }

  return 0;
}