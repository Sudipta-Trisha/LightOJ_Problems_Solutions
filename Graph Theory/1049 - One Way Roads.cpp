#include<bits/stdc++.h>
using namespace std;
#define inf 9999999
#define nax 110

vector<vector<int> >graph(nax,vector<int>());
int cost[nax][nax];
int cnt=0, neg, pos, total;
bool arr[nax][nax];

void g_clear()
{
    for(int i=0; i<nax; i++){
        graph[i].clear();
    }
}

void dfs(int node)
{
    for(int i=0; i<graph[node].size(); i++){
        int y = graph[node][i];
        if(arr[node][y] == 0){
            arr[node][y] = 1;
            arr[y][node] = 1;
            
            pos = pos + cost[node][y];
            neg = neg + cost[y][node];
            
            dfs(y);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int test;
    cin>>test;
    
    while(test--){
       int n;
       cin>>n;
       
       g_clear();
       neg = 0, pos=0;
       memset(arr, 0, sizeof(arr));
       memset(cost, 0 ,sizeof(cost));
       
       for(int i=0; i<n; i++){
           int u,v,c;
           cin>>u>>v>>c;
           
           graph[u].push_back(v);
           graph[v].push_back(u);
           
           cost[u][v] = c;
           cost[v][u] = 0;
       }
       
       for(int i=1; i<=n; i++){
           dfs(i);
       }
       
       int res = min(neg,pos);
       cout<<"Case "<<++cnt<<": "<<res<<endl;
    }
}
