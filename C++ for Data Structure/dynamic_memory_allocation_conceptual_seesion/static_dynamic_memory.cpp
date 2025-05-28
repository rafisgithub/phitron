#include<bits/stdc++.h>

using namespace std;

int* fun() {
   int* arr = new int[4];

   for(int i = 0; i < 4; i++) {
        arr[i] = i + 10;
   }
   return arr;
}
int main() {

    int* arr = fun();

    for(int i = 0; i < 4; i++) {
        cout << arr[i] <<" ";
    }
    
    return 0;
}