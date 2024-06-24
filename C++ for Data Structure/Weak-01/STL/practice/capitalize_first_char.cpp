#include<bits/stdc++.h>

using namespace std;

int main(){
    //  int n;
    // cin >> n;
    // cin.ignore(); // Ignore the newline character left in the input buffer

    // vector<string> v(n);

    // for(int i = 0; i < n; i++) {
    //     getline(cin, v[i]);
    // }

    // for(string val : v) {
       
    //     val[0] = toupper(val[0]);
    //     cout << val << endl;
    // }

    int n;
    cin>>n;

    vector<string> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }                                       

    // for(string word: v){
    //     word[0] = word[0]-32;
    //     cout<<word<<endl;
    // }

    for(int i=0;i<n;i++){
        // int len = v[i].size();

        cout<<v[i][0]-32<<endl;
        // cout<<len<<endl;
        // cout<<v[i][len-32]<<" ";
    }

    return 0;
}