#include <iostream>
using namespace std;
int main()
{
	double high, radius;
	const double Pi = 3.1415926;
	cout << "give the high:" ;
	cin >> high;
	cout << "give the radius:";
	cin >> radius;
	cout << (double)1 / 3 * Pi * (radius * radius) * high << endl;
	return 0;
}