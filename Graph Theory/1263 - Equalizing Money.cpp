#include<bits/stdc++.h>
#define nax 1010
using namespace std;
 
int n,m,cnt=0,people,total;
vector<vector<int> >graph(nax, vector<int>());
int vis[nax];
int arr[nax] = {};
 
void g_clear()
{
    for(int i=0; i<n; i++){
        graph[i].clear();
    }
}
 
void dfs(int node)
{
    total = total + arr[node];
    people++;
    vis[node] = 1;
   
    for(int i=0; i<graph[node].size(); i++){
        int x  = graph[node][i];
        if(vis[x] == 0){
            dfs(x);
        }
       
    }
   
}
 
int main()
{
    int test,sum=0,avg;
    cin>>test;
   
    while(test--){
        g_clear();
        memset(vis, 0 ,sizeof(vis));
        people = 0, total=0, sum=0;
        cin>>n>>m;
       
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
       
        avg = sum / n;
       
        for(int i=1; i<=m; i++){
            int u,v;
            cin>>u>>v;
           
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
       
        int flag = 1;
        
        for(int i=1; i<=n; i++){
           
            if(vis[i] == 0){
               people = 0;
               total = 0;
               
               dfs(i);
               if(total % people != 0){
                    flag = 0;
                    break;
                }
                else if(avg != total/people){
                    flag = 0;
                    break;
                }
            }
           
        }
       
        cout<<"Case "<<++cnt<<": ";
       
        if(flag == 1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;    
    }
}
