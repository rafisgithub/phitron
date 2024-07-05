#include <bits/stdc++.h>

using namespace std;

void print_normal(const list<int> &list)
{
    cout<< "L -> ";
    for(const auto &val : list){
        cout << val << " ";
    }
    cout << endl;
}

void print_reverse(const list<int> &list)
{
    cout<< "R -> ";
    for(auto it = list.end(); it != list.begin();){
        --it;
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list;

    int t;
    cin >> t;

    while(t--){
        int x, v;

        cin >> x >> v;

        if (x == 0)
        {

            list.push_front(v);
        }
        else if (x == 1)
        {

            list.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < list.size())
            {
                auto it = list.begin();
                for (int i = 0; i < v; ++i)
                {
                    ++it;
                }
                list.erase(it);
            }
        }
        print_normal(list);
        print_reverse(list);
    }

    return 0;
}
