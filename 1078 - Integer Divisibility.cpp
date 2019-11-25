#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int cont=0;
int main()
{
    ios_base::sync_with_stdio(0);
    int test;
    cin>>test;
    ll cnt;
    while(test--){
        int n,digit;
        cin>>n>>digit;
        int ans = digit%n;
        cnt=1;
        while(ans){
            ans = (ans*10) + digit;
            ans = ans%n;
            cnt++;
        }
        cout<<"Case "<<++cont<<": "<<cnt<<endl;
    }
    return 0;
}
