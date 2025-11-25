#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float i;
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È£º";
	cin >> i;
	cout <<fixed<<setprecision(2) << (i - 32) / 1.80;
	return 0;
}