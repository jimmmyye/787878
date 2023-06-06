#include "Student.h"
#include "StudentManage.h"
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main() {
	 // 建立一個 StudentManage 物件，並將 "students.txt" 傳遞給建構函式
	StudentManage manager("students.txt");
	manager.Run();
	return 0;
	
}
