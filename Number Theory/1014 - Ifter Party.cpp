#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll cnt=0;

void solve()
{
    ll test;
    cin>>test;
    vector<ll>vec;
    while(test--){
        ll p, left;
        cin>>p>>left;
        ll eaten = p - left;
        if(eaten<=left) {
                cout<<"Case "<<++cnt<<": "<<"impossible"<<endl;
                continue;
        }
        else{
            for(ll i=1; i<=sqrt(eaten); i++){
                if(eaten%i==0){
                    if((eaten/i)==i) vec.push_back(i);
                    else{
                        vec.push_back(i);
                        vec.push_back(eaten/i);
                    }
                }
            }
        }

        sort(vec.begin(),vec.end());
        cout<<"Case "<<++cnt<<":";
        for(ll i=0; i<vec.size(); i++){
            if(vec[i]>left)
                cout<<" "<<vec[i];
        }
        vec.clear();
        cout<<endl;
    }
}

int main()
{
   solve();
   return 0;
}
