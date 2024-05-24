#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    // sort(s,s+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]>s[j]){
                char temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<(s[i]);
    }

    return 0;
}