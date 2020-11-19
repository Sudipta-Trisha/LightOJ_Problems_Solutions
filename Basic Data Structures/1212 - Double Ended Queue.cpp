
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : November 18, 2020 12:08 PM
 *    Problem Name  : 1212 - Double Ended Queue
 *    Problem Limit : 500 ms , 32 MB
 *    Problem Url   : http://lightoj.com/volume_showproblem.php?problem=1212
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;
int cnt=0;

int main(){
    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;

    while(test--){
        cout << "Case "<< ++cnt << ":" << endl;

        int n,m,num;
        cin >> n >> m;

        string s;
        deque<int>q;

        for(int i=1; i<=m; i++){
            cin >> s;

            if(s == "pushLeft"){
                cin >> num;
                if(q.size() == n){
                    cout << "The queue is full" << endl;
                }
                else{
                    q.push_front(num);
                    cout << "Pushed in left: " << num << endl;
                }
            }

            else if(s == "pushRight"){
                cin >> num;
                if(q.size() == n){
                    cout << "The queue is full" << endl;
                }
                else{
                    q.push_back(num);
                    cout << "Pushed in right: " << num << endl;
                }
            }

            else if(s == "popLeft"){
                if(q.empty()){
                    cout << "The queue is empty" << endl;
                }   
                else{
                    cout << "Popped from left: " << q.front() << endl;
                    q.pop_front();
                }
            }

            else if (s == "popRight"){
                if(q.empty()){
                    cout << "The queue is empty" << endl;
                }   
                else{
                    cout << "Popped from right: " << q.back() << endl;
                    q.pop_back();
                } 
            }
        }
    }

    return 0 ;
}
