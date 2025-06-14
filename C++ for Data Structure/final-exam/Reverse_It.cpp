#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int cls;
        char section;
        int id;

};

int main() {

    int number_of_student;
    cin >> number_of_student;

    Student arr[number_of_student];

    for(int i = 0; i < number_of_student; i++) {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
    }

    int i = 0;
    int j = number_of_student - 1;

    while(i<j){
        char temp;

       temp = arr[i].section;

       arr[i].section = arr[j].section;
       arr[j].section = temp;
       i++;
       j--;

    }

       for(int i = 0; i < number_of_student; i++) {
        cout << arr[i].name <<" " << arr[i].cls <<" "<< arr[i].section <<" "<< arr[i].id <<endl;

    }



    return 0;
}