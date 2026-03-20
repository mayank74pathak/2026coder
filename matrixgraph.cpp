 

#include <iostream>
#include<vector>
using namespace std;

int main()
{
int ver,e;
cin>>ver>>e;
vector<vector<int>>adj(ver,vector<int>(ver,0));

for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
for(int i=0;i<ver;i++)
{
    for (int j=0;j<ver;j++)
    {
        cout<<adj[i][j]<<"\t";
    }

    cout<<"\n";
}
    
}
