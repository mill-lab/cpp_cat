#include <iostream>
using namespace std;

int main()
{
  int a = 2, b = 3;

  a += b;
  cout << "(a += b)の結果:" << a << endl;

  a -= b;
  cout << "(a -= b)の結果:" << a << endl;

  a *= b;
  cout << "(a *= b)の結果:" << a << endl;

  a /= b;
  cout << "(a /= b)の結果:" << a << endl;

  a %= b;
  cout << "(a %= b)の結果:" << a << endl;

  a = a++ * 3;
  cout << a << endl;
  
  return 0;
}
