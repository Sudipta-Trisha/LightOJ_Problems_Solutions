#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int cnt=0;
int main()
{
    ios_base::sync_with_stdio(0);
    int test;
    cin>>test;
    while(test--){
        ll w;
        cin>>w;
        if(w%2==1){
           cout<<"Case "<<++cnt<<": "<<"Impossible"<<endl;
           continue;
        }
        ll odd = w/2, even=2;
        while(odd%2==0){
            odd = odd/2;
            even = even*2;
        }
        cout<<"Case "<<++cnt<<": "<<odd<<" "<<even<<endl;
    }
    return 0;
}
