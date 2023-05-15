#include <iostream>
using namespace std;

int main()
{
  char str[256];

  cout << "input some string -- ";
  cin.getline(str, 256);
  cout << "str:" << str << endl;

  return 0;
}
