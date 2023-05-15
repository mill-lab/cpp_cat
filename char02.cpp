#include <iostream>
using namespace std;

int main()
{
  char a1, a2, a3;
  a1 = 'A';
  a2 = 'B';
  a3 = 'C';

  cout <<   "a1 = " << static_cast<int>(a1)
       << ", a2 = " << static_cast<int>(a2)
       << ", a3 = " << static_cast<int>(a3) << endl;

  cout << static_cast<char>(65) << endl;
  cout << static_cast<int>(65) << endl;

  return 0;
}
