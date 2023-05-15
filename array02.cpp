#include <iostream>
using namespace std;

int main()
{
  int a[4] = {1, 2, 100};

  int i;
  for(i=0; i<4; i++)
    cout << "a[" << i << "] = " << a[i] << ", ";
  cout << "\b\b \b" << endl;
  
  return 0;
}
