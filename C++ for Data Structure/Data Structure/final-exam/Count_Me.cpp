#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string s;
        
        getline(cin,s);

       map<string, int> mp;

       stringstream ss(s);

       string word;
        
       vector<string> words;

        int max_count = INT_MIN;
        string most_frequent_first_word;

       while(ss >> word) {
            words.push_back(word);

            mp[word]++;

            if(mp[word] > max_count) {
            max_count = mp[word];
            most_frequent_first_word = word;
            }
       }


       cout << most_frequent_first_word <<" " << max_count << endl;
    }
    return 0;
}