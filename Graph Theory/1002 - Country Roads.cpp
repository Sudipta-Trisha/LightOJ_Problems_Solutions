#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
const int INF = 1000000000;
#define nax 200010
int cnt=0;
 
vector<vector<int> >graph(nax,vector<int>());
vector<vector<int> >cost(nax,vector<int>());
int dis[nax];
 
void g_clear()
{
    for(int i=0; i<nax; i++){
        graph[i].clear();
        cost[i].clear();
    }
}
 
void dijkstra(int n,int src)
{
    for(int i=0; i<n; i++) dis[i] = INF;
    dis[src] = 0;
   
    priority_queue<p> q;
    q.push({src,0});
   
    while(!q.empty()){
        int s = q.top().first;
        int d = q.top().second;
       
        q.pop();
       
        for(int i=0; i<graph[s].size(); i++){
            int node = graph[s][i];
           
            int maxx = max (dis[s] , cost[s][i]);
            if(maxx < dis[node]){
                dis[node] = maxx;
                q.push({node,dis[node]});
            }
        }
    }
}
 
int main()
{
    int test;
    cin >> test;
    while(test--){
        g_clear();
       
        int n,m;
        cin>>n>>m;
       
        for(int i=0; i<m; i++){
            int u,v,c;
            cin>>u>>v>>c;
           
            graph[u].push_back(v);
            graph[v].push_back(u);
           
            cost[u].push_back(c);
            cost[v].push_back(c);
        }
       
        int source;
        cin>>source;
       
        dijkstra(n,source);
       
        cout<<"Case "<<++cnt<<":"<<endl;
       
        for(int i=0; i<n; i++){
            if(dis[i] == INF){
                cout<<"Impossible"<<endl;
            }
            else{
                cout<<dis[i]<<endl;
            }
        }
    }
    return 0;
}
