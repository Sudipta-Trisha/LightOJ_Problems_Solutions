
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : November 21, 2020 12:15 PM
 *    Problem Name  : 1211 - Intersection of Cubes
 *    Problem Limit : 500 ms , 32 MB
 *    Problem Url   : http://lightoj.com/volume_showproblem.php?problem=1211
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
        int n;
        cin >> n;

        int x1[110],y1[110],z1[110],x2[110],y2[110],z2[110];
        int min_x1=0, min_y1=0, min_z1=0, max_x2=1005, max_y2=1005, max_z2=1005;

        for(int i=0; i<n; i++){
            cin >> x1[i] >> y1[i] >> z1[i] >> x2[i] >> y2[i] >> z2[i];  

            min_x1 = max(min_x1,x1[i]);
            min_y1 = max(min_y1,y1[i]);
            min_z1 = max(min_z1,z1[i]);

            max_x2 = min(max_x2,x2[i]);
            max_y2 = min(max_y2,y2[i]);
            max_z2 = min(max_z2,z2[i]);
        }

        int vol = (max_x2 - min_x1) * (max_y2 - min_y1) * (max_z2 - min_z1);
        if(vol > 0)
            cout << "Case " << ++cnt << ": " << vol << endl;
        else
            cout << "Case " << ++cnt << ": " << "0" << endl;
    }

    return 0 ;
}
