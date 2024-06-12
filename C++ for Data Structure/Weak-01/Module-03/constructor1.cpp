#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    int roll;
    string department;
    double cgpa;
    Student(int roll,string department,double cgpa){
        this->roll = roll;
        (*this).cgpa = cgpa;
        this->department = department;
    }
};
int main(){
    Student rafi(6150,"CSE",4.00);

    cout<<rafi.cgpa<<endl<<rafi.department<<endl<<rafi.roll;
    return 0;
}