#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int cnt=0;
 
int main()
{
    int test;
    cin>>test;
    while(test--){
        ll x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
 
        ll ans1 =  abs(x1-y1);
        ll ans2 = abs(x2-y2);
 
        cout<<"Case "<<++cnt<<": "<<__gcd(ans1,ans2)+1<<endl;
    }
    return 0;
}
