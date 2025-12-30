//1、输入自然数m和n，（1）求他们的最大公约数（或称最大公因数）。
// 要求输入、输出在主函数中进行，求公约数由函数实现。
//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
#include <iostream>
using namespace std;
void get_max(int a, int b) {
	int n = (a > b) ? b : a;
	int d=0;
	for (int i = 1; i < n; i++) {
		if (a % i == 0 && b % i == 0)
		{
			 d = i;
		}
	}
	cout << "最大公约数为：" << d << endl;
}
int main()
{
	int a, b;
	cout << "请输入两个整数，我将求出两者的最大公约数：";
	cin >> a >> b;
	get_max(a, b);
	return 0;
}