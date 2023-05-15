#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  vector<string> args(&argv[0], &argv[argc]);

  for (auto s : args)
    cout << s << endl;

  return 0;
}
