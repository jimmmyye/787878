#include "Student.h"
using namespace std;

Student::Student(std::string name, std::string id, int chinese,int english)
    :Name(name), ID(id), Chinese(chinese), English(english) {}

void Student::setName(std::string name) {
    Name = name;
}

void Student::setID(std::string id) {
    ID = id;
}

void Student::setChinese(int chinese) {
    Chinese = chinese;
}

void Student::setEnglish(int english) {
    English = english;
}

std::string Student::getName() const{
    return Name;
}

std::string Student::getID() const{
    return ID;
}

double Student::getChinese() const{
    return Chinese;
}

double Student::getEnglish() const{
    return English;
}
double Student::getAverage() const{
    return (Chinese + English) / 2.0;
}

