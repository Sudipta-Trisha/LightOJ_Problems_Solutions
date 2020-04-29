#include<bits/stdc++.h>
#define ll unsigned long long int
#define n 5000000
using namespace std;

ll cnt=0;
ll phi[n+1];

void phi_func()
{
    phi[0] = 0;
    phi[1] = 1;

    for(ll i=2; i<=n; i++){
        phi[i] = i;
    }

    for(ll i=2; i<=n; i++){
        if(phi[i]==i){
            for(ll j=i; j<=n; j+=i){
                phi[j] = phi[j] - (phi[j]/i);
            }
        }
    }
    for(ll i=2; i<=n; i++){
        ll sum = phi[i];
        phi[i] = phi[i] * sum;
        phi[i] = phi[i] + phi[i-1];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    phi_func();
    ll test;
    scanf("%llu",&test);

    while(test--){
        ll a,b;
        scanf("%llu%llu",&a,&b);
        printf("Case %llu: %llu\n",++cnt,(phi[b]-phi[a-1]));
    }
    return 0;
}


