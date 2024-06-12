#include<bits/stdc++.h>

using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int mark;

    Student(int id, string name, char section, int mark) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->mark = mark;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int id;
        string name;
        char section;
        int mark;
        cin >> id >> name >> section >> mark;
        Student stu1(id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student stu2(id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student stu3(id, name, section, mark);

        Student highest_student = stu1;
    
        if (stu2.mark > highest_student.mark || (stu2.mark == highest_student.mark && stu2.id < highest_student.id)) {
            highest_student = stu2;
        }
        if (stu3.mark > highest_student.mark || (stu3.mark == highest_student.mark && stu3.id < highest_student.id)) {
            highest_student = stu3;
        }

        cout << highest_student.id << " " << highest_student.name << " " << highest_student.section << " " << highest_student.mark << endl;
    }
    return 0;
}
