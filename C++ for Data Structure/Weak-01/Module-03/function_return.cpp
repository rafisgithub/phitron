#include<bits/stdc++.h>

using namespace std;
class Student{
    public:
    int roll;
    string dept;
    double cgpa;

    Student(int roll,string dept,double cgpa){
        this->roll = roll;
        this->dept = dept;
        this->cgpa = cgpa;
    }
};
Student fun(){
    Student rafi(47,"CSE",4.00);
    return rafi;
}
int main(){
    Student ans = fun();
    cout<<ans.roll<<endl<<ans.dept<<endl<<ans.cgpa;
    return 0;
}