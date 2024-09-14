#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,e;
    cin>>n>>e;
    long long int mat[n+1][n+1];
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==j)
            {
                mat[i][j]=0;
            }
            else{
                mat[i][j]=1e18;
            }
        }
    }
    
    while(e--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        mat[a][b]=min(mat[a][b],c);
        
    }
    for(int k= 1;k<=n;k++)
        {   
         for(int i=1;i<=n;i++)
            {
           for(int j=1;j<=n;j++)
                {
              if(mat[i][k]+mat[k][j]<mat[i][j])
                    {
                        mat[i][j]=mat[i][k]+mat[k][j];
                   }
           }
          }
     }

    int t;
    cin>>t;
    while(t--)
    {
        int src,des;
        cin>>src>>des;
        
        
        
        if(mat[src][des]==1e18)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<mat[src][des]<<endl; 
        }
        
    }
    return 0;
}