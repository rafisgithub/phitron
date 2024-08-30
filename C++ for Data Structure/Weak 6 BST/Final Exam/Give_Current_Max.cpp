#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
    
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(const Student &a, const Student &b) {
        if (a.marks == b.marks)
            return a.roll > b.roll; 
        return a.marks < b.marks; 
    }
};

int main() {
    int n;
    cin >> n;
    
    priority_queue<Student, vector<Student>, cmp> pq; 
    
    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }
    
    int q;
    cin >> q;

    while (q--) 
    {
        int command;
        cin >> command;

        if (command == 0) { 
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));

            if (!pq.empty()) {
                Student maxStudent = pq.top();
                cout << maxStudent.name << " " << maxStudent.roll << " " << maxStudent.marks << endl;
            }

        } else if (command == 1) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                Student maxStudent = pq.top();
                cout << maxStudent.name << " " << maxStudent.roll << " " << maxStudent.marks << endl;
            }

        } else if (command == 2) 
        {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop(); 
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    Student newMaxStudent = pq.top();
                    cout << newMaxStudent.name << " " << newMaxStudent.roll << " " << newMaxStudent.marks << endl;
                }
            }
        }
    }

    return 0;
}
