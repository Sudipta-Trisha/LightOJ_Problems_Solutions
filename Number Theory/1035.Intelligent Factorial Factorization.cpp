#include<bits/stdc++.h>
#define ll long long int
#define sz  10000000
using namespace std;
ll cnt=0;

vector<ll>v;
bool arr[10000009];

map<int,int>mp[150];
map<int,int>::iterator it;

map<int,int>print;
map<int,int>::iterator itr;

void fact()
{
    for(int i=2; i<=140; i++)
    {
        int  node = i;
        for(int j=0; j<v.size() && v[j]*v[j]<=node; j++)
        {
            int x = v[j];
            if(x*x > node)
                break;
            while(node%x==0)
            {
                mp[i][x]++;
                node/=x;
            }
        }
        if(node>1) mp[i][node]++;
    }
}

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


int main()
{
    sieve();
    fact();
    int test;
    scanf("%d",&test);
    while(test--)
    {
        ll n;
        scanf("%lld",&n);
        for(int i=2; i<=n; i++){
            for( it= mp[i].begin(); it!=mp[i].end(); it++){
                print[it->first] +=it->second;
            }
        }
        printf("Case %lld: %lld = ",++cnt,n);
        for(itr = print.begin(); itr!=print.end(); itr++){
            if(itr==print.begin())
                cout<<itr->first<<" "<<"("<<itr->second<<")";
            else
                cout<<" * "<<itr->first<<" "<<"("<<itr->second<<")";
        }
        cout<<endl;
        print.clear();

    }
    return 0;
}
