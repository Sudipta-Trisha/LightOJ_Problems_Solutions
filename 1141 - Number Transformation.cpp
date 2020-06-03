#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 10000
#define nax 1010
 
vector<ll>v;
vector<ll>prime_fact[10010];
int a,b, cnt=0, ans;
bool arr[10000+10];
bool flag;
 
void sieve()
{
  v.push_back(2);
  for(ll i=4; i<=sz; i+=2 )
    arr[i]=1;
  for(ll i=3; i<=sz; i+=2){
      if(!arr[i]){
        v.push_back(i);
        if(i*i<=sz){
          for(ll j=i*i; j<=sz; j+=i+i){
            arr[j]=1;
          }
        }
      }
     
    }
}
 
void factorization ()
{
  for(int i=2; i<=sz; i++){
      for(int j=0; j<v.size(); j++){
         if(i%v[j]==0 && i>v[j])
           prime_fact[i].push_back(v[j]) ;
        }
    }
}
 
ll bfs(ll a, ll b)
{
    bool vis[nax] = {};
    if(a>b){
        flag = false;
        return flag;
    }
   
    queue<ll>q;
    q.push(a);
   
    ll dis[nax] = {}, temp;
   
    dis[a] = 0;
   
    while(!q.empty()){
        ll x = q.front();
        if(x == b){
            flag = true;
            return dis[x];
        }
       
        q.pop();
       
        if(vis[x] == false){
            for(ll i=0; i<prime_fact[x].size(); i++){
               temp = x + prime_fact[x][i];
               if(temp <= b){
                   if(!dis[temp]) dis[temp] = dis[x] + 1;
                   q.push(temp);
               }
               
               if(temp == b){
                   flag = true;
                   return dis[temp];
               }
            }
            vis[x] = true;
        }
    }
   
    flag = false;
    return flag;
   
}
 
int main()
{
  sieve();
  factorization();
  ll test;
  cin>>test;
  while(test--){
      flag = false;
      cin>>a>>b;
      ans = bfs(a,b);
     
      if(flag==true) cout<<"Case "<<++cnt<<": "<<ans<<endl;
      else cout<<"Case "<<++cnt<<": "<<"-1"<<endl;
  }
  return 0;
}
