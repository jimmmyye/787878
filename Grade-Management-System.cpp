#include "Student.h"
#include "StudentManage.h"
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main() {
	StudentManage StuManage;
	cout << "-------------歡迎來到成績管理系統-----------------"<< endl;
	while (true) {
		cout << "請選擇你想要的操作:" << endl;
		cout << "1.增加學生:" << endl;
		cout << "2.查詢學生:" << endl;
		cout << "3.修改學生:" << endl;
		cout << "4.刪除學生:" << endl;
		cout << "5.顯示學生:" << endl;
		cout << "6.退出系統:" << endl;
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			StuManage.AddStudent();
			break;
		case 2:
			StuManage.FindStudent();
			break;
		case 5:
			for (int i = 0; i < 64; i++) {
				cout << "-";
			}
			cout << endl;
			cout << "|" << setw(7)  << "姓名" << setw(4);
			cout << "|" << setw(11) << "學號" << setw(8);
			cout << "|" << setw(7)  << "數學" << setw(4);
			cout << "|" << setw(7)  << "英文" << setw(4);
			cout << "|" << setw(7)  << "排名" << setw(4) <<"|";
			cout << endl;
			StuManage.DisplayAllStudent();
			for (int i = 0; i < 64; i++) {
				cout << "-";
			}
			cout << endl;
			break;
		case 6:
			return 0;
			break;
		default: 
			break;
		}
	}
	
}