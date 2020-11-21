
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : November 21, 2020 9:43 PM
 *    Problem Name  : 1216 - Juice in the Glass
 *    Problem Limit : 2000 ms , 32 MB
 *    Problem Url   : http://lightoj.com/volume_showproblem.php?problem=1216
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int cnt=0;

int main(){
    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;

    while(test--){
        double r1,r2,h,p;
        cin >> r1 >> r2 >> h >> p;

        // volume of the glass
        // volume = 1/3 * pi * height (r1*r1 + r2*r2 + r1*r2)

        double r3 = r2 + ((r1-r2)*p)/h;
        double vol = (pi*p*(r3*r3 + r2*r2 + r3*r2))/3.0;

        cout << fixed << setprecision(9) << "Case " << ++cnt << ": " << vol << endl;
    }

    return 0 ;
}
