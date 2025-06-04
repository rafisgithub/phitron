#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int roll;
        int mark;
};

bool cmp(Student i,Student j){
    if(i.mark < j.mark){
        return true;
    }else{
        return false;
    }
}

int main() {


    int n;
    cin>>n;

    Student arr[n];

    for(int i=0; i<n;i++) {
        cin>>arr[i].name>>arr[i].mark>>arr[i].roll ;
    }

    sort(arr,arr+n,cmp);


    for(int i=0; i<n;i++) {
        cout << arr[i].name <<" " <<arr[i].mark << " " << arr[i].roll <<endl;
    }
    return 0;
}