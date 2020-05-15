#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int cnt=0;

int main()
{
    int test;
    cin>>test;
    while(test--){
        ll n,m;
        cin>>n>>m;
        
        cout<<"Case "<<++cnt<<": "<<(n*m)/2<<endl;
    }
    return 0;
}
