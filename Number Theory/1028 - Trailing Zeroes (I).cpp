#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 10000000
ll cs=0;

vector<ll>v;
bool arr[10000000+10];

void factorization (ll n)
{

  ll ans=1;

  for(ll i=0; i<v.size(); i++){
    ll cnt=1;
    ll x = v[i];
    if(x*x>n)
      break;
    while(n%x==0){
      cnt++;
      n/=x;
    }
    ans=ans*cnt;
  }
  if(n>1){
    ans  =  ans * 2;
  }
  cout<<"Case "<<++cs<<": "<<ans-1<<endl;
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
  int test;
  cin>>test;
  while(test--){
    ll n;
    cin>>n;
    factorization(n);
  }
  return 0;
}
