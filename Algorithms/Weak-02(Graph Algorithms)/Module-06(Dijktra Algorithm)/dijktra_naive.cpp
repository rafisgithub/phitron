#include <bits/stdc++.h>

using namespace std;
const int N = 100;
vector<pair<int,int>> v[N];
int dis[N];

void dijktra(int src){
    queue<pair<int,int>> q;
    q.push({src,0});

    dis[src] = 0;

    while(!q.empty())
    {
        pair<int,int> parent = q.front();
        q.pop();

        int node = parent.first;
        int cost = parent.second;

        // for(int i=0;i<v[node].size();i++){
        //    pair<int,int> child = v[node][i]; 
        // }

        for(pair<int,int> child : v[node])
        {
            int childNOde = child.first;
            int childCost = child.second;

            if(cost + childCost<dis[childNOde]){
                //path relax
                dis[childNOde] = cost + childCost;
                q.push({childNOde,dis[childNOde]});
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;

    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});


    }
    // memset(dis,INT_MAX,sizeof(dis));

    for(int i=0;i<n;i++){
        dis[i] = INT_MAX;
    }
    dijktra(0);
    
    for(int i=0;i<n;i++)
    {
        cout << i<<" ->"<<dis[i]<<endl;
    }
    return 0;
}