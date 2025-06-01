#include<bits/stdc++.h>

using namespace std;

void is_palindrome(int* arr, int n,bool* flag) {
    int i=0;
    int j = n-1;


    while(i<j) {
        if(arr[i]!=arr[j]){
            *flag = false;
        }
        i++;
        j--;
    }
}
int main() {

    int n;
    cin >> n;

    int arr[n];

    bool flag = true;


    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    is_palindrome(arr,n,&flag);

    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
}

    return 0;
}