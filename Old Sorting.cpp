#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll cnt = 0;

void solve()
{
    ll n;
    cin >> n;

    ll a[n+10];
    for(ll i=0; i<n; i++) {
        cin >> a[i];
    }

    pair<ll,ll>pos[n];
    for(ll i=0; i<n; i++) {
        pos[i].first = a[i];
        pos[i].second = i;
    }

    sort(pos,pos+n);

    vector<bool>vis(n,false);

    ll ans = 0;
    for(ll i=0; i<n; i++) {

        if(vis[i] || pos[i].second == i)
            continue;

        ll curr = 0;
        ll j = i;
        while(!vis[j]) {
            vis[j] = 1;
            j = pos[j].second;
            curr++;
        }
        if(curr > 0)
            ans += (curr-1);
    }

    cout<<"Case "<<++cnt<<": "<<ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;

    while(test--) {
        solve();
    }
}
