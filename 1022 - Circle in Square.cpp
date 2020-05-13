#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi 2*acos(0.0)

ll cnt=0;

int main()
{
    int test;
    cin>>test;
    while(test--){
         double r;
         cin>>r;
         
         double len= r*2;
         
         double circle_area = pi*(r*r);
         double sqaure_area = len*len;
         
         double total = sqaure_area - circle_area;
         
         cout<<fixed;
         cout<<setprecision(2);
         cout<<"Case "<<++cnt<<": "<<total<<endl;
    }
    return 0;
}
