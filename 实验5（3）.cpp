#include <iostream>
using namespace std;
class vol {
private:
	int len;
	int wid;
	int hei;
public:
	void inputvalue() {
		cout << "请输入长方体的长宽高：";
		cin >> len >> wid >> hei;
	} 
	void get_vol() {
		cout << "该长方形的体积为："<<len * wid * hei << endl;
	}
};
int main() {
	vol s1,s2,s3;
	s1.inputvalue();
	s2.inputvalue();
	s3.inputvalue();
	s1.get_vol();
	s2.get_vol();
	s3.get_vol();
}