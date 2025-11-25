#include <iostream>
using namespace std;
int main()
{
	char op;
	double num1, num2;
	cout << "请输入第一个数：";
	cin >> num1;
	cout << "请输入运算符号：";
	cin >> op;
	cout << "请输入第二个数：";
	cin >> num2;
	switch (op) {
	case '+':
		cout << "num1+num2=:" << num1 + num2 << endl;
		break;
	case'-':
		cout << "num1=num2=:" << num1 - num2 << endl;
		break;
	case'*':
		cout << "num1*num2=:" << num1 * num2 << endl;
		break;
	case '/':
		if (num2 == 0) cout << "错误" << endl;
		else cout << "num1/num2=" << num1 / num2 << endl;
		break;
	case '%':
		if (static_cast<int>(num2) == 0) cout << "错误" << endl;
		else cout << "num1%num2=" << static_cast<int>(num1) % static_cast<int>(num2) << endl;
		break;
	}
		return 0;
}