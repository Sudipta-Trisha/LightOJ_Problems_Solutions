
// Problem: A. Gamer Hemose
// Contest: Codeforces - Codeforces Round #746 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1592/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n,h;
	cin >> n >> h;
	
	ll ar[n];
	for(ll i=0; i<n; i++) cin >> ar[i];
	sort(ar,ar+n);
	
	ll sum = ar[n-1] + ar[n-2];
	
	if(h%sum == 0) cout << 2*(h/sum) << endl;
	else if(h%sum <= ar[n-1]) cout << 2*(h/sum) + 1 << endl;
	else cout << 2*(h/sum) + 2 << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
