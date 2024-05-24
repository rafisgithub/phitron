#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        int roll;
        int cls;
        double gpa;
    Student(int r,int c,double g){
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main(){
    Student rahim(32,10,4.8);
    Student karim(32,10,4.8);

    cout<<rahim.roll<<endl<<rahim.cls<<endl<<rahim.gpa<<endl;
    cout<<karim.roll<<endl<<karim.cls<<endl<<karim.gpa<<endl;
    return 0;
}