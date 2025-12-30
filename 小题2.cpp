//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
#include <iostream>
using namespace std;
int get_max(int &a,int &b) {
	int n = (a > b) ? b : a;
	int d = 0;
	for (int i = 1; i < n; i++) {
		if (a % i == 0 && b % i == 0)
		{
			d = i;
		}
	}
	return d;
}
int get_min(int& a, int& b) {
	int n = (a > b) ? b : a;
	int d = 0;
	for (int i = 1; i < n; i++) {
		if (a % i == 0 && b % i == 0)
		{
			d = i;
		}
	}
	return a * b / d;
}
int main() {
	int a, b;
	cout << "请输入两个自然数：";
	cin >> a >> b;
	int max = get_max(a, b);
	int min = get_min(a, b);
	cout << "最大公约数为：" << max << endl;
	cout << "最小公倍数为：" << min << endl;
	cout << a << b <<endl;//引用作函数的参数，实际值也会发生改变
	return 0;
}