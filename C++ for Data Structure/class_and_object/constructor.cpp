#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int roll;
        string section;

    Student(string nm,int rll,string setn) {
        name = nm;
        roll = rll;
        section = setn;

    }
};
int main() {

    Student rafi("Rafi",32,"27B");
    Student meghla("Meghla",3,"32d");

    cout << rafi.name << " " << rafi.roll <<" " << rafi.section;

    return 0;
}