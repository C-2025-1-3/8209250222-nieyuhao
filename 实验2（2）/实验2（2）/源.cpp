#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "请输入一个值：";
	cin >> x;
	if (x > 0 && x < 10) {
		if (x < 1)  cout << "y=" << 3 - 2 * x << endl;
		else if (x >= 1 && x < 5) cout << (float)2 / 4 * x + 1 << endl;
		if (x >= 5) cout <<(float) x * x << endl;
	}
	else cout << "请输入0到10的数";
	return 0;
}