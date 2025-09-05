#include<bits/stdc++.h>

using namespace std;


bool cmp(pair<string, int> a, pair<string, int> b) {
    if(a.first == b.first) {
        return a.second > b.second;
    }

    return a.first < b.first;
}
int main() {

    int n;
    cin >> n;

    vector<pair<string,int>> pairs;

    for(int i= 1;i<=n;i++) {
        string name;
        int val;
        cin >> name >> val;

        pairs.push_back({name,val});
    }

    sort(pairs.begin(),pairs.end(),cmp);

      for (auto pair : pairs) {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}