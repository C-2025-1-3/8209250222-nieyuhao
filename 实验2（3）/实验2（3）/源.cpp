#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形的三边长:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "周长为：" << a + b + c << endl;
		if (a == b || a == c || b == c) cout << "该三角形是等腰三角形";
	}
	else cout << "不构成三角形！！" << endl;
	return 0;
}