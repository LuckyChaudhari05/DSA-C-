#include <iostream>  
using namespace std; 

int main() {
  int number = 0;

cout << "Enter the number: ";
cin >> number;
for (int i = 1; i <= 10; i++)
{
  cout << number * i << endl;
}
return 0;
}

// int main() {

//     int number;

//     cout << "Enter a number: ";
//     cin >> number;

//     if (number % 2 == 0) {
//         cout << number << " is even." << endl;
//     } else {
//         cout << number << " is odd." << endl;
//     }

//     return 0; 
// }

