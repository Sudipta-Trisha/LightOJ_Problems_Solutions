#include<bits/stdc++.h>
using namespace std;
#define nax 50010

int cnt=0,n;
vector<vector<int> >graph(nax, vector<int>());
int arr[nax], parent[nax];
bool vis[nax];

void g_clear()
{
    for(int i=0; i<nax; i++){
        graph[i].clear();
    }
}

void bfs(int node)
{
    memset(parent, -1, sizeof(parent));
    
    queue<int>q;
    q.push(node);
    
    memset(vis, false, sizeof(vis));
    vis[node] = true;
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x == arr[n-1]) return ;
        for(int i=0; i<graph[x].size(); i++){
            int y = graph[x][i];
            if(vis[y] == false){
                parent[y] = x;
                vis[y] = true;
                q.push(y);
            }
        }
       
    }
}

void print(int final)
{
    if(parent[final] == -1){
        printf("%d", final);
        return;
    }
    print(parent[final]);
    printf(" %d", final);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int test;
    scanf("%d",&test);
    
    while(test--){
        g_clear();
        scanf("%d",&n);
        
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        
        for(int i=0; i<n-1; i++){
            
            graph[arr[i]].push_back(arr[i+1]);
            graph[arr[i+1]].push_back(arr[i]);
        }
        
        for(int i=0; i<n; i++){
           sort(graph[arr[i]].begin(), graph[arr[i]].end());
        }
        printf("Case %d:\n",++cnt);
        
        bfs(arr[0]);
       
        print(arr[n-1]);
        
        printf("\n");
    }
    return 0;
}
