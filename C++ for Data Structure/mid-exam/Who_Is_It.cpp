#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        int id;
        string name;
        char section;
        int total_mark;
    
    Student(int id,string name,char section,int total_mark) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->total_mark = total_mark;
    }

};
int main() {

    int t;
    cin>>t;

    while(t--) {

        int id;
        string name;
        char section;
        int total_mark;

        cin >> id >> name >> section >> total_mark;
        Student a(id,name,section,total_mark);

        cin >> id >> name >> section >> total_mark;
        Student b(id,name,section,total_mark);

        cin >> id >> name >> section >> total_mark;
        Student c(id,name,section,total_mark);

        if(a.total_mark >= b.total_mark && a.total_mark >= c.total_mark){
            cout << a.id <<" " << a.name <<" " << a.section <<" " << a.total_mark<<endl;
        } else if(b.total_mark >= a.total_mark && b.total_mark >= c.total_mark){
            cout << b.id <<" " << b.name <<" " << b.section <<" " << b.total_mark<<endl;
        }else if(c.total_mark >= a.total_mark && c.total_mark >= b.total_mark){
            cout << c.id <<" " << c.name <<" " << c.section <<" " << c.total_mark<<endl;
        }


    }
    return 0;
}