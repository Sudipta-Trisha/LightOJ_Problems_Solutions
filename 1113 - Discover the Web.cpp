#include<bits/stdc++.h>
using namespace std;

int cnt=0;

int main()
{
    int test;
    cin>>test;
    while(test--){
        
        cout<<"Case "<<++cnt<<":\n";
        
       string s = "http://www.lightoj.com/"; 
       string keep;
       stack<string>forward,back;
       back.push(s);
     
       while(cin>>s){
           if(s == "VISIT"){
               cin>>s;
               cout<<s<<endl;
               back.push(s);
               while(!forward.empty())
                    forward.pop();
           }
           
           else if(s == "BACK" && back.size()>1){
               keep = back.top();
               forward.push(keep);
               back.pop();
               cout<<back.top()<<endl;
           }
           
           else if(s == "FORWARD" && !forward.empty()){
               keep = forward.top();
               back.push(keep);
               cout<<forward.top()<<endl;
               forward.pop();
           }
           
           else if(s == "QUIT")
                break;
           
           else{
               cout<<"Ignored"<<endl;
           }
       }
    
    }
    return 0;
}
