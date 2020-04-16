#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 10000000
ll cs=0;

vector<ll>v;
bool arr[10000000+10];
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
        ll half,cnt=0;
        half = n/2;
        for(ll i=0; i<v.size(); i++){
            if(v[i]>half){
                break;
            }
            if(arr[n-v[i]]==0)
                cnt++;
        }
        cout<<"Case "<<++cs<<": "<<cnt<<endl;
    }
    return 0;
}
