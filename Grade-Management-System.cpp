#include "Student.h"
#include "StudentManage.h"
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main() {
	StudentManage StuManage;
	cout << "-------------�w��Ө즨�Z�޲z�t��-----------------"<< endl;
	while (true) {
		cout << "�п�ܧA�Q�n���ާ@:" << endl;
		cout << "1.�W�[�ǥ�:" << endl;
		cout << "2.�d�߾ǥ�:" << endl;
		cout << "3.�ק�ǥ�:" << endl;
		cout << "4.�R���ǥ�:" << endl;
		cout << "5.��ܾǥ�:" << endl;
		cout << "6.�h�X�t��:" << endl;
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
			cout << "|" << setw(7)  << "�m�W" << setw(4);
			cout << "|" << setw(11) << "�Ǹ�" << setw(8);
			cout << "|" << setw(7)  << "�ƾ�" << setw(4);
			cout << "|" << setw(7)  << "�^��" << setw(4);
			cout << "|" << setw(7)  << "�ƦW" << setw(4) <<"|";
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