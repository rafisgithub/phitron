#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main(){
    Student a,b;

    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa;
    getchar();
    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;

    cout<<a.name<<endl<<a.roll<<endl<<a.cgpa<<endl;
    cout<<b.name<<endl<<b.roll<<endl<<b.cgpa<<endl;

return 0;
}