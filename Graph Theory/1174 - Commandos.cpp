#include<bits/stdc++.h>
#define min_inf -99999999
using namespace std;

const int nax=200;
vector<vector<int> > graph(nax , vector<int>());  
vector<vector<int> > cost(nax , vector<int>());

int dis[nax];
int dis2[nax];
int n,m,s,d;
int cnt=0;

void g_clear()
{
    for(int i=0; i<n; i++){
        graph[i].clear();
        cost[i].clear();
    }
}

void bfs(int node, int dis[])
{
    queue<int>q;
    q.push(node);
    
    bool arr[nax] = {};
    arr[node] = true;
    dis[node] = 0;
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        
        for(int i=0; i<graph[x].size(); i++){
            int y = graph[x][i];
            if(arr[y] == false){
                dis[y] = dis[x] + cost[x][i];
                arr[y] = true;
                q.push(y);
            }
        }
    }
    
}

int main()
{
    int test;
    cin>>test;
    
    while(test--){
        cin>>n>>m;
        g_clear();
        
        for(int i=0; i<m; i++){
            int u,v;
            cin>>u>>v;
            
            graph[u].push_back(v);
            graph[v].push_back(u);
            
            cost[u].push_back(1);
            cost[v].push_back(1);
        }
        cin>>s>>d;
        
        bfs(s,dis);
        bfs(d,dis2);
        
        for(int i=0; i<n; i++){
            dis[i] = dis[i] + dis2[i];
        }
        cout<<"Case "<<++cnt<<": "<<*max_element(dis,dis+n)<<endl;
    }
}
