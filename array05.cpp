#include <iostream>
using namespace std;

int main()
{
  int a[] = {20, 40, 80, 100 }, i, *p;

  p = a;

  for (i=0; i<4; i++) {
    cout << "&a[" << i << "] = " << &a[i]
	 << ", (p + " << i << ") = " << p + i
	 << ", (a + " << i << ") = " << a + i
	 << ", &p[" << i << "] = " << &p[i] << endl;
  }
  
  return 0;
}