#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int roll;
        string section;
        double math_marks;
        int cls;

    Student(string name,int roll,string section,double math_marks,int cls) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main() {

    string name;
    int roll;
    string section;
    double math_marks;
    int cls;

    cin >> name >> roll >> section >> math_marks >> cls;
    Student sonjoy(name,roll,section,math_marks,cls);

    cin >> name >> roll >> section >> math_marks >> cls;
    Student rafi(name,roll,section,math_marks,cls);

    cin >> name >> roll >> section >> math_marks >> cls;
    Student meghla(name,roll,section,math_marks,cls);

    cout << sonjoy.name << " " << sonjoy.roll <<" " << sonjoy.section << " " << sonjoy.math_marks << " " << sonjoy.cls << endl;
    cout << rafi.name << " " << rafi.roll <<" " << rafi.section << " " << rafi.math_marks << " " << rafi.cls << endl;
    cout << meghla.name << " " << meghla.roll <<" " << meghla.section << " " << meghla.math_marks << " " << meghla.cls << endl;

    return 0;
}