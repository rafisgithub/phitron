#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, vector<int>> m;
    
    for (int i = 0; i < n; i++) {
        string s;
        int num;

        cin >> s >> num;

        m[s].push_back(num);
    }
    
    for (auto key_valu_pair : m) 
    {
        sort(key_valu_pair.second.begin(),key_valu_pair.second.end());
        reverse(key_valu_pair.second.begin(),key_valu_pair.second.end());

        for (int num : key_valu_pair.second)
        {
            cout << key_valu_pair.first << " " << num << endl;
        }
    }
    
    return 0;
}
