#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    char s[n];
    
    for(int i = 0; i < n; i++) {
        cin>>s[i];
    }

    // for(int i = 0; i < n; i++) {
    //    cout << s[i];
    // }

    int count_a = 0,count_d = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'A'){
            count_a++;
        }else{
            count_d++;
        }
    }

    if(count_a > count_d){
        cout << "Anton\n";
    }else if(count_a < count_d){
        cout << "Danik\n";
    }else{
        cout << "Friendship\n";
    }

    return 0;
}