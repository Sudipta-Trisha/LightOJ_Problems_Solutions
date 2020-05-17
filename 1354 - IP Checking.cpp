#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int cnt=0;

ll solve(ll n){
   int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber; 
}

int main()
{
    ll test;
    cin>>test;
    while(test--){
        
        ll a,b,c,d,p,q,r,s;
        scanf("%lld.%lld.%lld.%lld",&a,&b,&c,&d);
        scanf("%lld.%lld.%lld.%lld",&p,&q,&r,&s);
        
        if(a==solve(p) && b==solve(q) && c==solve(r) && d==solve(s))
            cout<<"Case "<<++cnt<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<++cnt<<": "<<"No"<<endl;
    }
}
