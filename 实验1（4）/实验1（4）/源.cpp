#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int i = 65534;
	float n = 3.14;
	double x = 3.14159;
	cout << static_cast<int>(n) << static_cast<int>(x) << endl;
	cout << i << endl;
	cout << static_cast<char>(i) << endl;
	cout << static_cast<short>(i) << endl;
	cout << static_cast<int>(i) << endl;
	cout << static_cast<double>(i) << endl;
	cout << setprecision(4) << static_cast<double>(i) << endl;
	cout << oct << i << endl;
	return 0;
}
//原执行结果为：65534 无结果 -2 65534 65534  6.553e+04 fffe 输出八进制（oct)为177776 将一个实数转化为int会保留整数部分