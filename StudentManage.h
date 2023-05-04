#ifndef StudentManage_H
#define StudentManage_H
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<iomanip>
#include "Student.h"
class StudentManage{
private:
	vector <Student> students;
	string filename;
public:
	StudentMange(string frame);
	void AddStudent();
	void FindStudent();
	void ModifyStudent();
	void DeleteStudent();
	void SortStudent();
	void DisplayAllStudent();
	void SaveDate();
	void Run();
	
};
#endif
