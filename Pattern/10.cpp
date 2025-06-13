#include <iostream>
using namespace std;

int main()
{
  int a = 0;
  int i = 1;

  cout << "Enter the number : ";
  cin >> a;
  while (i <= a)
  {
    int j = 1;
    while (j <= a)
    {
      cout << '*';
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}