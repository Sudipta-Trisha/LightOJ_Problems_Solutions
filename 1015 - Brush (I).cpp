#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll cnt=0;

int main()
{
    int test;
    scanf("\n%d",&test);

    while(test--){
         ll n;
         unsigned long long int sum=0;
         scanf("%lld",&n);
         ll arr[n+1];
         for(ll i=0; i<n; i++){
             scanf("\n%lld",&arr[i]);
             if(arr[i]>0)
                sum += arr[i];
         }
         cout<<"Case "<<++cnt<<": "<<sum<<endl;
    }
    return 0;
}
