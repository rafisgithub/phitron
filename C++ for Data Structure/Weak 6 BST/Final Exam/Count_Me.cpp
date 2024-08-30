#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--)
    {
        string sentence;
        getline(cin, sentence); 
        
        stringstream ss(sentence);
        string word;

        map<string, int> mp;

        int max_count = 0;

        string max_word;

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > max_count || (mp[word] == max_count && max_word.empty())) {
                max_count = mp[word];
                max_word = word;
            }
        }

        cout << max_word << " " << max_count << endl;
    }
    
    return 0;
}
