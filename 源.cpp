//6、字符串中每个字母出现的次数：
//请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
//void count(const char s[], int counts[])
//counts是一个有26个元素的整数数组。
// const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。
// 字母不分大小写，例如字母A和字母a都被看作a。
//编写测试程序，读入字符串并调用count函数，显示非零的次数。下面是程序的一个运行样例：
#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		char c = s[i];
		if (c >= 65 && c <= 90) {
			int index = c - 'A';
			counts[index]++;
		}
		if (c >= 97 && c <= 122) {
			int index = c - 'a';
			counts[index]++;
		}
	}
}
int main() {
	char s[100];
	int counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0) {
			char letter = 'a' + i;
			cout << letter << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}