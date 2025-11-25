/*#include <iostream>
using namespace std;
int main()
{
	unsigned int a, b;
	cin >> a >> b;
	int e = a * b;
	while (b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	cout << "最大公因数：" << a << endl;
	cout << "最小公倍数：" << e / a << endl;
	return 0;
}*/
#include <iostream>
using namespace std;
int c;
int main()
{
	unsigned int a, b;
	cin >> a >> b;
	for (int i = 1; i <= min(a, b); i++)
		if (a % i == 0 && b % i == 0)  c = i;
	cout << a << "与" << b << "的最大公约数为：" << c << endl;
	cout << a << "与" << b << "的最小公倍数为：" << a*b/c << endl;
	return 0;
}
















