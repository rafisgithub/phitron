#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int roll;
        int mark;
};

bool cmp(Student i, Student j) {
    return (i.mark == j.mark)?i.roll>j.roll:i.mark<j.mark;
}

int main() {

    int n;
    cin >>n;

    Student arr[n];

    for(int i=0; i<n;i++) {
        cin>>arr[i].name>>arr[i].roll>>arr[i].mark;
    }

    sort(arr,arr+n,cmp);


    for(int i=0; i<n;i++) {
        cout << arr[i].name <<" " <<arr[i].roll << " " << arr[i].mark <<endl;
    }
    return 0;
}