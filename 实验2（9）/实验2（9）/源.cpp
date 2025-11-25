//这是买的苹果的总数不超过100
#include <iostream>
using namespace std;
int main() {
	const float apple = 0.8;
	int sum=0,c=0;
	for (int i = 2,day=1; i <= 100;i=i+i*2,day++) {
		sum = apple * i;
		c = day;
	}
	cout << "平均每天花的钱为：" << (float)sum / c << endl;
}
//下面是第某天购买的数量不超过100
#include <iostream>
using namespace std;
int sum, c;
int main()
{
	const float apple = 0.8;
	for (int i = 2, day = 1; i <= 100; i *= 2, day++) {
		int loan;
		loan = i + i * 2;
		sum = apple * loan;
		c = day;
	}
	cout << "平均每天花的钱为：" << (float)sum / c << endl;
	return 0;
}