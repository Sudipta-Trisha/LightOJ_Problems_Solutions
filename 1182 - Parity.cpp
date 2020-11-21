
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : November 21, 2020 11:48 AM
 *    Problem Name  : 1182 - Parity
 *    Problem Limit : 500 ms , 32 MB
 *    Problem Url   : http://lightoj.com/volume_showproblem.php?problem=1182
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll cnt=0;

ll solve(ll n)
{
    ll cnt_one = 0,temp=n;
    
    while(temp > 0){
        cnt_one += temp%2;
        temp = temp/2;
    
    }
    if(cnt_one % 2 == 0){
        return true;
    }
    else
        return false;
}

int main(){
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;

    while(test--){
     
        ll n;
        cin >> n;

        bool ans = solve(n);

        if(ans){
             cout << "Case " << ++cnt << ": " << "even" << endl;
        }
        else 
             cout << "Case " << ++cnt << ": " << "odd" << endl;
    }

    return 0 ;
}
