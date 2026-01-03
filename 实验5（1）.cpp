#include <Iostream>
using namespace std;
class Time {
	private:
		int hour;
		int minute;
		int sec;
	public:
		void inputtime(){ //成员函数类似于接口
			cin >> hour;
			cin >> minute;
			cin >> sec;
		}

		void get_time() {
			cout << hour << '\t' << minute << '\t' << sec << endl;;
		}
};
int main() {
	Time t1;
	t1.inputtime();
	t1.get_time();
}
