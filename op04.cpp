#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double height = 1.72, weight = 65.2;
  
  cout << "BMIは体重を身長の2乗で割ったものです" << endl;
  cout << "これが25を超えるとデブです" << endl;

  cout << "例えば身長" << fixed << setprecision(2) << height
       << "mで体重" << weight << "kgの人では" << endl;
  cout << "BMI = " << weight << " ÷ (" << height << " x "
       << height << ")で計算します" << endl;
  cout << "その結果は" << setprecision(1)
       << weight / (height * height) << "でした" << endl;
  
  return 0;
}
