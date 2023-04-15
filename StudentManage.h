#ifndef StudentManage_H
#define StudentManage_H
#include<iostream>
using namespace std;
#include<vector>
#include "Student.h"
class StudentManage{
private:
	vector <Student> students;
public:
	void AddStudent();
	void DisplayAllStudent();
	void DisplayOneStudent();
	void ModifyStudent();
	void DeleteStudent();
	void FindStudent();
};
#endif
