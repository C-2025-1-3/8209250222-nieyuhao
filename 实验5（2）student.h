#pragma once
class Student {
public:
	void display();
	void set_value(int, const char*, char);
private:
	int num;
	char name[20];
	char sex;
};
