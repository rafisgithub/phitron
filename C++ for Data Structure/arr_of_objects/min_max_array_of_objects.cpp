#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int roll;
        int mark;
};

int main() {


    int n;
    cin>>n;

    Student arr[n];

    for(int i=0; i<n;i++) {
        cin>>arr[i].name>>arr[i].mark>>arr[i].roll ;
    }

    Student min_mark;
    min_mark.mark = INT_MAX;
    Student max_mark;
    max_mark.mark = INT_MIN;

    for(int i=0; i<n;i++) {
        if(min_mark.mark > arr[i].mark){
           min_mark = arr[i];
        }
        if(max_mark.mark < arr[i].mark){
           max_mark = arr[i];
        }
    }

   cout << min_mark.name <<" " << min_mark.mark <<" " << min_mark.roll<<endl;
   cout << max_mark.name <<" " << max_mark.mark <<" " << max_mark.roll;

    return 0;
}