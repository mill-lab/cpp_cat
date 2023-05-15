#include <iostream>
using namespace std;

int main()
{
  unsigned short a, b;
  a = 1;
  b = 3;
  
  cout << "a & b = " << (a & b) << endl; // 01 & 11 = 01
  cout << "a | b = " << (a | b) << endl; // 01 | 11 = 11
  cout << "a ^ b = " << (a ^ b) << endl; // 01 ^ 11 = 10
  
  return 0;
}
