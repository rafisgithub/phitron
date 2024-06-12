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
    cin.ignore();
    Student arr[n];
    for(int i=0;i<n;i++){
        getline(cin,arr[i].name);
       cin>>arr[i].id>>arr[i].marks;
       cin.ignore();

    }

    for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].id<<" "<<arr[i].marks<<endl;
    }
    return 0;
}