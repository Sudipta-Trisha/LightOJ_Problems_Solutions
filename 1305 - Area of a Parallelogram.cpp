#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int cnt=0;

int main()
{
    int test;
    cin>>test;
    while(test--){
       int ax,ay,bx,by,cx,cy;
       cin>>ax>>ay>>bx>>by>>cx>>cy;
       
       int dx = ax + cx - bx;
       int dy = ay + cy - by;
       
       int area = ((ax*by)+(bx*cy)+(cx*dy)+(dx*ay)) - ((ax*dy)+(dx*cy)+(cx*by)+(bx*ay));
       if(area<0) 
            area *= -1;
       
       cout<<"Case "<<++cnt<<": "<<dx<<" "<<dy<<" "<<int(area*0.5)<<endl;
    }
    return 0;
}
