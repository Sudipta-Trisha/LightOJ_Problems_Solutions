#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000
#define nax 300010
 
vector<vector<int> >graph(nax, vector<int>());
vector<vector<int> >cost(nax, vector<int>());
int dis[nax+10];
int dis2[nax+10];
 
int cnt=0,n;
 
void g_clear()
{
    for(int i=0; i<n; i++){
        graph[i].clear();
        cost[i].clear();
    }
}
 
void bfs1(int node){
    queue<int>q;
    q.push(node);
   
    bool arr[nax] = {};
   
    memset(dis, inf, sizeof(dis));
   
    arr[node] = true;
    dis[node] = 0;
   
    while(!q.empty()){
        int x = q.front();
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

void bfs2(int node){
    queue<int>q;
    q.push(node);
   
    bool arr[nax] = {};
   
    memset(dis2, inf, sizeof(dis2));
   
    arr[node] = true;
    dis2[node] = 0;
   
    while(!q.empty()){
        int x = q.front();
        q.pop();
   
        for(int i=0; i<graph[x].size(); i++){
            int y = graph[x][i];
            if(arr[y]==false){
                int c = cost[x][i];
                dis2[y] = dis2[x] + c;
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
    scanf("%d",&test);
    while(test--){
        ios_base::sync_with_stdio(0);
        scanf("%d",&n);
        g_clear();
       
        for(int i=0; i<n-1; i++){
             int u,v,w;
             scanf("%d%d%d",&u,&v,&w);
           
            graph[u].push_back(v);
            graph[v].push_back(u);
           
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        
        bfs1(0);

        int mx, mx_dis=0, strt;
       
        for(int i=0; i<n; i++){
           if(mx_dis<dis[i]){
               mx_dis = dis[i];
               mx = i;
           }
        }
            
        bfs1(mx);
        mx_dis = 0;
        
        for(int i=0; i<n; i++){
            if(mx_dis < dis[i]){
                mx_dis = dis[i];
                mx = i;
            }
        }
        
        bfs2(mx);
        
        printf("Case %d:\n",++cnt);
        for(int i=0; i<n; i++){
            printf("%d\n",max(dis[i], dis2[i]));
        }
    }
}
