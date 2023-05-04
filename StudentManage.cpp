#include "StudentManage.h"
StudentManage::StudentManage(string frame){
	
}
void StudentManage::AddStudent() {
	cout << "請輸入學生姓名、座號、數學成績、英文成績:";
	std::string name, id;
	int MathScore, EnglishScore;
	cin >> name >> id >> MathScore >> EnglishScore;
	Student stu(name, id, MathScore, EnglishScore);
	students.push_back(stu);
	cout << "學生 " << name << " 已添加。"<<endl;
}


void StudentManage::FindStudent() {
	bool find = false;
	string name;
	cout << "請輸入學生姓名: ";
	cin >> name;
	for (int i = 0;i < students.size(); i++) {
		if (students[i].getName() == name) {
			cout << students[i].getName()<< " ";
			cout << students[i].getID() << " ";
			cout << students[i].getEnglish() << " ";
			cout << students[i].getMath() << endl;
			find = true;
			break;
		}
	}
	if (!find) {
		cout << "未找到該學生!" << endl;
	}

}

void StudentManage::ModifyStudent() {

}

void StudentManage::DeleteStudent() {

}
void StudentManage::SortStudent(){
	
}
void StudentManage::DisplayAllStudent() {
	vector <Student> temp = students;
	sort(temp.begin(), temp.end(), [](Student a, Student b) {return a.getSum() > b.getSum();});
	for (int i = 0; i < temp.size(); i++) {
		cout << "|" << left << setw(10) << temp[i].getName();
		cout << "|" << left << setw(18) << temp[i].getID();
		cout << "|" << left << setw(10) << temp[i].getEnglish();
		cout << "|" << left << setw(10) << temp[i].getMath();
		cout << "|" << left << setw(10) << i + 1 << "|" << endl;
	}
}
void StudentManage::SaveDate(){
	
}
void StudentManage::Run(){
	
}



