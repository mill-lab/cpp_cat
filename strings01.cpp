#include <iostream>
using namespace std;

int main()
{
  const char *str[6] = {
    "abc",
    "de",
    "fghi",
    "jklmnop",
    "qrs",
    "tuvwxyz",
  };
  int i;

  for (i=0; i<6; i++)
    cout << *str[i];
  cout << endl;

  return 0;
}
