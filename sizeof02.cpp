#include <iostream>
#include <cstddef>
using namespace std;

int main()
{
  int a = 10;
  size_t s;
  
  s = sizeof ++a;
  cout << "a = " << a << endl;
  cout << "s = " << s << endl;
  
  return 0;
}
