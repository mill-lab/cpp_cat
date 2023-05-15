#include <iostream>
using namespace std;

int main()
{
  int a;
  int *pa;
  pa = &a;
  cout << "input some integer ---";
  cin >> a;

  cout << "a = " << a << endl;
  cout << "&a = " << &a << endl;
  cout << "*pa = " << *pa << endl;

  return 0;
}
