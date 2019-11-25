#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        string s;
        cin>>n>>s;

        if(s=="Alice"){
            if(n%3==0 || n%3==2) cout<<"Case "<<++cnt<<": "<<"Alice"<<endl;
            else cout<<"Case "<<++cnt<<": "<<"Bob"<<endl;
        }
        else if(s=="Bob"){
             if(n%3==1 || n%3==2){
                cout<<"Case "<<++cnt<<": "<<"Bob"<<endl;
            }
            else cout<<"Case "<<++cnt<<": "<<"Alice"<<endl;
        }
    }
    return 0;
}
