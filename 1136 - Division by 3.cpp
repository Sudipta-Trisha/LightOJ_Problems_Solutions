#include<bits/stdc++.h>
#define ll long long int 
#define maxx 1000000010
using namespace std;
ll cnt=0;

ll solve(ll n)
{
    if(n == 0) return 0;
    ll ans = (n/3)*2;

    if(n % 3 == 2) {
        ans++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll test;
    cin >> test;

    while(test--){
        ll a,b;
        cin >> a >> b;

        cout << "Case " << ++cnt << ": " << solve(b)-solve(a-1) << endl;
    }

}
