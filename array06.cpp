#include <iostream>
using namespace std;

int main()
{
  int a[5][2] = {{10, 20}, {30, 40}, {50, 60}, {70, 80}, {90, 100} }, i, j;

  for (i=0; i<5; i++) {
    for (j=0; j<2; j++){
      cout << "a[" << i << "][" << j << "] = " << a[i][j] << endl;
    }
  }

  cout << endl;

  for (i=0; i<5; i++) {
    for (j=0; j<2; j++){
      cout << "&a[" << i << "][" << j << "] = "
	   << &a[i][j] << "  (a[" << i << "] + " << j
	   << ") = " << (a[i] + j) << endl;
    }
  }

  cout << endl;

  for (i=0; i<5; i++) {
    for (j=0; j<2; j++){
      cout << "*(*(a + " << i << ") + " << j << ") = "
	   << *(*(a + i) + j) << endl;
    }
  }
  
  return 0;
}
