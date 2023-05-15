#define NO 3
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int point[][2] = {
    { 80, 80},   // English, Math score
    {100, 98},
    { 60, 80},
  };

  int i, j, sum = 0, p_sum[NO];
  double ave;

  for (i=0; i<NO; i++)
    sum += point[i][0];
  ave = (double)sum / NO;

  cout << "English average score => " << setw(5) << fixed
       << setprecision(1) << ave << endl;

  sum = 0;
  for (i=0; i<NO; i++)
    sum += point[i][j];
  ave = (double)sum / NO;

  cout << "Math average score => " << setw(5) << ave << endl;
  cout << endl;

  for (i=0; i<NO; i++)
    p_sum[i] =0;

  for (i=0; i< NO; i++) {
    for (j = 0; j < 2; j++) {
      p_sum[i] += point[i][j];
    }
    cout << "student number " << i + 1 <<  "total score:" << p_sum[i] << endl;
  }

  return 0;
}
