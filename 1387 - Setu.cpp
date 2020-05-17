#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int cnt=0;

int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int sum=0;
        cout<<"Case "<<++cnt<<":"<<endl;
        for(int i=1; i<=n; i++){
            string s;
            cin>>s;
            if(s=="donate"){
                int d;
                cin>>d;
                sum += d;
            }
            else{
                cout<<sum<<endl;
            }

        }
    }
    return 0;
}
