#include <iostream>
using namespace std;

int main()
{
  int a = 10;

  cout << boolalpha;
  cout << " aの値は" << a << "です" << endl;
  cout << " a == 10 の値は" << (a == 10) << "です" << endl;
  cout << " a == 20 の値は" << (a == 20) << "です" << endl;
  cout << " a != 10 の値は" << (a != 10) << "です" << endl;
  cout << " a != 20 の値は" << (a != 20) << "です" << endl;

  return 0;
}
