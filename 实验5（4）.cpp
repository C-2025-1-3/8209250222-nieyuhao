#include <iostream>
using namespace std;
class stu {
public:
	int id;
	int score;
	stu(int n1 = 0, int n2 = 0) {
		id = n1; score = n2;
	}
};
void max(const stu* stuP,int len ) {
		if (len <= 0) { 
			return; }
		int maxscore = stuP->score;
		int maxid = stuP->id;
		for (int i = 1; i < len; i++) {
			if ((stuP + i)->score > maxscore)
				maxid = (stuP + i)->id;
			maxscore = (stuP + i)->score;
		}
		cout << "最高成绩者所对应的学号为：" << maxid <<'\t' << "成绩为：" << maxscore << endl;
	}
int main() {
	stu s1[5] = { stu(1,98),stu(2,99),stu(3,97),stu(9,95),stu(15,100) };
	max(s1, 5);
	return 0;
}