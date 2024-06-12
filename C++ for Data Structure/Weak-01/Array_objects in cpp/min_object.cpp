#include<bits/stdc++.h>

using namespace std;
class Student{
    public:
    string name;
    int id;
    int marks;
};
int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].id>>arr[i].marks;
    }
    // int min = INT_MAX;
    // for(int i=0;i<n;i++){
       
    //     if(arr[i].marks<min){
            
    //          min = arr[i].marks;
           
    //     } 
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i].marks==min){
    //         cout<<arr[i].name<<" "<<arr[i].id<<" "<<arr[i].marks;
    //     }
    // }

    Student min;
    min.marks = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i].marks<min.marks){
            min = arr[i];
        }
    }

    cout<<min.name<<" "<<min.marks<<" "<<min.id;

    return 0;
}