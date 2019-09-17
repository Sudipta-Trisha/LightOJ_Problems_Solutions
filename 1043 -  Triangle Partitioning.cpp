//using direct law
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0, test;
    cin>>test;
    while(test--){
        double ab,bc,ca,r;
        cin>>ab>>bc>>ca>>r;
       
        double area = sqrt(r/(r+1))*ab;
        cnt++;
        printf("Case %d: %.6lf\n",cnt,area);
    }
    return 0;
}
