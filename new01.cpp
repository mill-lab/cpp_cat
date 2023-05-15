// new01.cpp

#include <iostream>

using namespace std;

int main()
{
	cout << "必要な個数--> ";
	int n;
	cin >> n;

	int *p;
	p = new int[n]; //ユーザーの入力した個数分のメモリの確保

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "番目のデータ --- ";
		cin >> p[i];
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "番目のデータは" << p[i] << endl;
	}

	cout << *p << endl;

	// 不要になったのでメモリの解放
	delete [] p;

	cout << *p << endl;
	
	return 0;
}
