#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> creategraph(int V ,vector<vector<int>>edges)    // time complexity O(n2),space complexity O(n2)
{
 vector<vector<int>>matrix(V, vector<int>(V, 0));
 for(auto  it:edges)
 {
     int u=it[0];
     int v=it[1];
     matrix[u][v]=1;
     matrix[v][u]=1;
 }
    
return matrix;    
}

int main() {
     int V=3;
//list of edges     
vector<vector<int>>edges{{0,1},{0,2},{1,2}};

//build the graph using edges
vector<vector<int>>matrix=creategraph(V,edges);

for(int i=0;i<V;i++)
{
    for(int j=0;j<V;j++)
    {
        cout<<matrix[i][j];
    }

    cout<<"\n";
}
    
}
