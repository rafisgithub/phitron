#include<bits/stdc++.h>

using namespace std;

class Student{

    public:
        string name;
        int roll;
        int math_mark;
        int eng_mark;
    
        Student(string name,int roll,int math_mark,int eng_mark) {
            this->name = name;
            this->roll = roll;
            this->math_mark = math_mark;
            this->eng_mark = eng_mark;
        }

        void totolMarks() {
            cout << "Total marks of " << name <<" "<< math_mark + eng_mark <<endl;
        }
};

int main() {

    Student rafi("Rafi Ahmed",6150,90,90);
    rafi.totolMarks();

    Student meghla("Meghla",6150,100,90);
    meghla.totolMarks();
    return 0;
}