#include<bits/stdc++.h>
#define sz 1000002
using namespace std;
double vec[1000000+20];
int cnt=0;

void fact()
{
    for(int i=2; i<=sz; i++){
        vec[i] = vec[i-1] + log(i);
    }
}

int main()
{
    fact();
    int test;
    cin>>test;
    while(test--){
        int n,base,ans;
        cin>>n>>base;
        if(n==0 || n==1){
            ans = 1;
        }
        else{
            ans = (vec[n] / (double)log(base)) + 1;
        }
        cout<<"Case "<<++cnt<<": "<<ans<<endl;
    }
    return 0;
}
