#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
     
};

class CMP {
public:
    bool operator()(const Student &a, const Student &b) {
        if (a.marks != b.marks)
            return a.marks < b.marks; 
        return a.roll > b.roll;       
    }
};

void printStudent(const Student &s) {
    cout << s.name << " " << s.roll << " " << s.marks << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, CMP> pq;

    for (int i = 0; i < n; i++) {
        Student s;
        cin >> s.name >> s.roll >> s.marks;
        pq.push(s);
    }

    int q;
    cin >> q;

    while (q--) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) {
            Student s;
            cin >> s.name >> s.roll >> s.marks;
            pq.push(s);
            if (!pq.empty())
                printStudent(pq.top());
            else
                cout << "Empty\n";
        } 
        else if (cmd == 1) {
            if (!pq.empty())
                printStudent(pq.top());
            else
                cout << "Empty\n";
        }
        else if (cmd == 2) {
            if (!pq.empty()) pq.pop();
            if (!pq.empty())
                printStudent(pq.top());
            else
                cout << "Empty\n";
        }
    }

    return 0;
}
