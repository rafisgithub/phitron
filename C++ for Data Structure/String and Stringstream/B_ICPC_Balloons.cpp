#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;

    char s[n];

    cin>>s;

    int counter[26] = {0};
    int sum = 0;
    for(int i=0;i<n;i++){
        if(counter[s[i]-'A']==0){
            sum+=2;
            counter[s[i]-'A']++;
        }else{
            sum+=1;
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}