#include <iostream>
#include "student.h"
#include <cstring>
using namespace std;
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value(int n, const char *na,char s) {
	num = n;
	memcpy(name, na, sizeof(4));
	sex = s;
}
//为什么第12行使用strcpy无法运行