#include "StudentManage.h"
void StudentManage::AddStudent() {
	cout << "�п�J�ǥͩm�W�B�y���B�ƾǦ��Z�B�^�妨�Z:";
	std::string name, id;
	int MathScore, EnglishScore;
	cin >> name >> id >> MathScore >> EnglishScore;
	Student stu(name, id, MathScore, EnglishScore);
	students.push_back(stu);
	cout << "�ǥ�: " << name << "�w�K�[�C"<<endl;
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