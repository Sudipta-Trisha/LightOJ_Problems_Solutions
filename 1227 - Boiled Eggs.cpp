#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int cnt = 0;

int main()
{
    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;

    while(test--){
        int n,p,q;
        cin >> n >> p >> q;

        int arr[n+1],sum=0,cnt_egg=0;

        for(int i=0; i<n; i++) {
            cin >> arr[i];
            sum += arr[i];

            if(cnt_egg < p && sum <= q) cnt_egg++;
        }
    
        cout << "Case " << ++cnt << ": " << cnt_egg << endl;
    }
    return 0;
}
