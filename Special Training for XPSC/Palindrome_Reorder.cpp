#include <bits/stdc++.h>

using namespace std;

int main() {

   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   string s;
   cin>>s;

   int n = s.size();

   map<char,int> cnt;

   for(int i =0;i<n;i++){
      cnt[s[i]]++;
   }

   int OddNumberCHarCount = 0;
   for(auto p : cnt){
      char key = p.first;
      int val = p.second;

      if(val%2!=0){
         OddNumberCHarCount++;
      }
   }
   if(OddNumberCHarCount > 1){
      cout <<"NO SOLUTION\n";
      return 0;
   }

   string first,middle,last;

   for(auto p : cnt){
      char key = p.first;
      int value = p.second;

      if(value%2!=0) {
         for(int i=1;i<=value;i++){
            middle.push_back(key);
         }
      }else {
         for (int i = 1; i <= (value/2); i++) {
            first.push_back(key);
            last.push_back(key);
         }
         
      }
   }
   reverse(last.begin(),last.end());

   string ans = first + middle + last;

   cout << ans <<endl;

   return 0;
}