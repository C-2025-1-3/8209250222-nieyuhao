#include <iostream>
using namespace std;
float square(float a,float b) {
	int c = (a + b) * (a + b);
	return c;
}
int main() {
	long a;
	cin >> a;
	long x_n = a;
	long x_n1 = (a + 1) / 2;
	while (square(x_n1, x_n) >25) {
		x_n = x_n1;
		x_n1 = (x_n + a / x_n) / 2;
	}
	cout << "a的迭代平方根为：" << x_n1 << endl;
	return 0;
}