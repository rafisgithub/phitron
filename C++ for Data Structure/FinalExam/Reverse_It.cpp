#include<bits/stdc++.h>

using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char section;
        int id;
};
int main(){
    int n;
    cin>>n;

    Student st[n];

    for(int i=0;i<n;i++){
        cin>>st[i].nm>>st[i].cls>>st[i].section>>st[i].id;
    }

    int i=0;
    int j=n-1;
    while(i<j){
        swap(st[i].section,st[j].section);
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].section<<" "<<st[i].id<<endl;
    }
    return 0;
}