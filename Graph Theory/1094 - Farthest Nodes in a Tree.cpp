#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000
#define nax 30000
 
vector<vector<int> >graph(nax, vector<int>());
vector<vector<int> >cost(nax, vector<int>());
int dis[nax+10];
 
int cnt=0,n;
 
void g_clear()
{
    for(int i=0; i<n; i++){
        graph[i].clear();
        cost[i].clear();
    }
}
 
void bfs(int node){
   // dis.clear();
    queue<int>q;
    q.push(node);
   
    bool arr[nax] = {};
   
    for(int i=0; i<n; i++)  
        dis[i] = inf;
   
    arr[node] = true;
    dis[node] = 0;
   
    while(!q.empty()){
        int x = q.front();
        //cout<<"x: "<<x<<" ";
        q.pop();
   
        for(int i=0; i<graph[x].size(); i++){
            int y = graph[x][i];
            if(arr[y]==false){
                int c = cost[x][i];
                dis[y] = dis[x] + c;
                arr[y] = true;
                q.push(y);
            }
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        g_clear();
       
        for(int i=0; i<n-1; i++){
             int u,v,w;
             cin>>u>>v>>w;  
           
            graph[u].push_back(v);
            graph[v].push_back(u);
           
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        bfs(0);
        int mx, mx_dis=0;
       
        for(int i=0; i<n; i++){
           if(mx_dis<dis[i]){
               mx_dis = dis[i];
               mx = i;
           }
        }
        bfs(mx);
   
        cout<<"Case "<<++cnt<<": "<<*max_element(dis, dis+n)<<endl;
    }
}
