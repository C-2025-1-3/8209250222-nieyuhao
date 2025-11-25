//该代码未定义k，且重复定义i
#include <iostream>
using namespace std;
int main()
{
	int i = k + 1;
	cout << i++ << endl;
	int i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
//可改为
#include <iostream>
using namespace std;
int main()
{
	{
		int k = 3;
		int i = k + 1;
		cout << i++ << endl;
	}
	
	{
		int i = 1;
		cout << i++ << endl;
		cout << "Welcome to C++" << endl;
	}
		return 0;
	
}