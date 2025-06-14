#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    
        string name;
        int cls;
        char section;
        int id;
        int math_marks;
        int eng_marks;

};

bool cmp(Student i, Student j) {
    if (i.eng_marks > j.eng_marks) {
        return true;
    } else if (i.eng_marks < j.eng_marks) {
        return false;
    } else { 
        if (i.math_marks > j.math_marks) {
            return true;
        } else if (i.math_marks < j.math_marks) {
            return false;
        } else { 
            return i.id < j.id;
        }
    }
}

int main() {

    int number_of_student;
    cin >> number_of_student;

    Student arr[number_of_student];


    for(int i = 0; i < number_of_student; i++) {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr,arr + number_of_student,cmp);


    for(int i = 0; i < number_of_student; i++) {
        cout << arr[i].name <<" " << arr[i].cls <<" "<< arr[i].section <<" "<< arr[i].id  <<" " << arr[i].math_marks <<" " << arr[i].eng_marks << endl;

    }

    return 0;
}