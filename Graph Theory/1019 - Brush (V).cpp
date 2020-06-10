#include<bits/stdc++.h>
#define nax 10000
#define ll long long int 
using namespace std;
typedef pair<int,int> p;
const int INF = 1000000000;

vector<vector<int> >graph(nax,vector<int>());
vector<vector<int> >cost(nax,vector<int>());
vector<int>dis(nax);
ll cnt=0;

void g_clear()
{
    for(ll i=0; i<nax; i++){
        graph[i].clear();
        cost[i].clear();
    }
}

void dijkstra(int n,int src)
{
    for(ll i=0; i<n+1; i++) dis[i] = INF; 
    
    dis[src] = 0;
    
    priority_queue<p> q;
    q.push({src,0});
    
    while(!q.empty()){
        int s = q.top().first;
        int d = q.top().second;
        
        q.pop();
        
        for(int i=0; i<graph[s].size(); i++){
            int node = graph[s][i];
            
            if(dis[s] + cost[s][i] < dis[node]){
                dis[node] = dis[s] + cost[s][i];
                q.push({node,dis[node]});
            }
        }
    }
}

int main()
{
    ll test;
    cin>>test;
    
    while(test--){
        g_clear();
        ll n,m;
        cin>>n>>m;
        
        for(ll i=0; i<m; i++){
            ll u,v,c;
            cin>>u>>v>>c;
            
            graph[u].push_back(v);
            graph[v].push_back(u);
            
            cost[u].push_back(c);
            cost[v].push_back(c);
        }
        
        dijkstra(n,1);
        
        cout<<"Case "<<++cnt<<": ";
        if(dis[n] == INF) cout<<"Impossible"<<endl;
        else cout<<dis[n]<<endl;
        
        dis.clear();
    }
    
    return 0;
}
