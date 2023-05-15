#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char str[] = "ABC";

  cout << str << endl;
  strcpy(str, "def");
  cout << str << endl;

  return 0;
}
