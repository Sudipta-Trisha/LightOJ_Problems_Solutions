#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll cnt = 0;
ll fact[23] = {};

void factorial()
{
    fact[0] = 1;

    for(ll i=1; i<=20; i++) {
        fact[i] = fact[i-1]*i;
    }
}


void solve()
{
    factorial();
	ll n;
    cin >> n;

    vector<ll>v;
    for(ll i=20; i>=0; i--) {
        if(fact[i] <= n) {
            n = n - fact[i];
            v.push_back(i);
        }
    }

    cout << "Case " <<++cnt << ": ";
    if(n == 0){
        for(ll i=v.size()-1; i>0; i--) {
            cout << v[i] << "!+";
        }
        cout << v[0] << "!" << endl;
    }
    else{
        cout << "impossible" << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	
    ll test;
    cin >> test;
    while(test--)
	    solve();
}
