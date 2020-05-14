#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int cnt=0;

int main()
{
    int test;
    cin>>test;
    while(test--){
        double R;
        cin>>R;
        int n;
        cin>>n;
        
        double theta = sin(pi/n);
        
        double r = R*theta/(1+theta);
        
        printf("Case %d: %.6lf\n",++cnt,r);
    }
    return 0;
}
