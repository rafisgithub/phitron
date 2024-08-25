#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    int roll;
    string dept;
    double cgpa;

    Student(int roll, string dept, double cgpa) {
        this->roll = roll;
        this->dept = dept;
        this->cgpa = cgpa;
    }
};

int main() {
    
    Student rafi1(32, "CSE", 4.0);

    Student *rafi2 = new Student(32, "CSE", 4.0);

    // Use the pointer to access the member variables
    cout << rafi2->roll << " " << rafi2->dept << " " << rafi2->cgpa << endl;

    // Clean up the dynamically allocated memory
    delete rafi2;

    return 0;
}
