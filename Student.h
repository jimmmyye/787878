#ifndef Student_H
#define Student_H
#include<string>
class Student {
private:
    std::string Name;
    std::string ID;
    int Chinese;
    int English;
public:
    Student(std::string name, std::string id, int chinese, int english);
    void setName(std::string name);
    void setID(std::string id);
    void setChinese(int chinese);
    void setEnglish(int english);
    std::string getName() const;
    std::string getID() const;
    double getChinese() const;
    double getEnglish() const;
    double getAverage() const;
};
#endif