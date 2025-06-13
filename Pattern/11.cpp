#include <iostream>
using namespace std;

int main()
{
  // int a = 10;
  int b = 5;

  for (int i = 1 ; i <= b ; i++)
  {
    for ( int j = 1 ; j <= i ; j++)
    {
      cout << '*';
    }
    cout << endl;
  }

    for (int p = b; p >= 1 ; p--)
  {
    for ( int q = p ; q >= 1 ; q--)
    {
      cout << '*';
    }
    cout << endl;
  }
  return 0;
}