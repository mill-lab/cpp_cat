#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char str[32];
  size_t len;

  cout << "input string --";
  cin.getline(str, 32);

  len = strlen(str);
  cout << str << "'s length is " << len << endl;
  
  return 0;
}
