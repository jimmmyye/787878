#include "StudentManage.h"
void StudentManage::AddStudent() {
	cout << "請輸入學生姓名、座號、數學成績、英文成績:";
	std::string name, id;
	int MathScore, EnglishScore;
	cin >> name >> id >> MathScore >> EnglishScore;
	Student stu(name, id, MathScore, EnglishScore);
	students.push_back(stu);
	cout << "學生: " << name << "已添加。"<<endl;
}

void StudentManage::DisplayAllStudent() {

}
void StudentManage::DisplayOneStudent() {

}
void StudentManage::ModifyStudent() {

}
void StudentManage::DeleteStudent() {

}
void StudentManage::FindStudent() {

}