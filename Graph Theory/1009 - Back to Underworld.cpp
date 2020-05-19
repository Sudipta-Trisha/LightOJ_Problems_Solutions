#include<bits/stdc++.h>
using namespace std;
const int nax=200010;

#define white 0 
#define gray 1 
#define black 2 

vector<vector<int> > graph(nax , vector<int>());
int clr[nax];
int cnt=0;
int v=0, l=0;

void bfs(int source)
{
    queue<int>q;
    q.push(source) ;
    clr[source] = black;
    l++;
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        
        for(int i=0; i<graph[x].size(); i++){
            if(clr[graph[x][i]] == white){
                q.push(graph[x][i]);
                
                if(clr[x] == black){
                    clr[graph[x][i]] = gray;
                    v++;
                }
                
                else{
                    clr[graph[x][i]] = black;
                    l++;
                }
            }
        }
        
    }
    
}

int main()
{
    int test;
    scanf("%d",&test);
    
    while(test--){
        
        for(int i=0; i<nax; i++){
            graph[i].clear();
        }
        
        memset(clr, 0, sizeof(clr));
        
        int total=0;
        
        int n;
        scanf("%d",&n);
    
        for(int i=0; i<n; i++){
            int u,v;
            scanf("%d %d",&u,&v);
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        for(int i=0; i<nax; i++){
            if(!graph[i].empty() && clr[i]==white){
                
                v=0;
                l=0;
                
                bfs(i);
                total = total + max(v,l);
            }
        }
        
        printf("Case %d: %d\n",++cnt,total);
        
    }
    return 0;
}
