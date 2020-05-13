#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll cnt=0;

int main()
{
    int test;
    cin>>test;
    while(test--){
        ll a,b,c;
        cin>>a>>b>>c;
        
        if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b))
            cout<<"Case "<<++cnt<<": "<<"yes"<<endl;
        else
             cout<<"Case "<<++cnt<<": "<<"no"<<endl;            
    }
    return 0;
}
