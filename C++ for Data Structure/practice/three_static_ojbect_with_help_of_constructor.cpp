    #include<bits/stdc++.h>

    using namespace std;
    class Student{
        public:

        string name;
        int roll;
        string section;
        double math_marks;
        int  cls;

        Student(string name,int roll,string section,double math_marks,int cls){
            this->name = name;
            this->roll = roll;
            this->section = section;
            this->math_marks = math_marks;
            this->cls = cls;
        }
    };

    int main(){
    Student obj1("Rafi Ahmed",10,"26A",80,10);
    Student obj2("Opi",11,"26A",90,10);
    Student obj3("Zillu",11,"26A",100,10);
    if(obj1.math_marks>obj2.math_marks && obj1.math_marks>obj3.math_marks){
        cout<<obj1.math_marks;
    }else if(obj2.math_marks>obj1.math_marks && obj2.math_marks>obj3.math_marks){
        cout<<obj2.math_marks;
    }else{
        cout<<obj3.math_marks;
    }
        return 0;
    }