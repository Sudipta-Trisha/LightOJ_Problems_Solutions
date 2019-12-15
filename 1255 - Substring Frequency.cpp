#include<bits/stdc++.h>
using namespace std;
int cs=0;
vector<int>temp(string pattern)
{
    vector<int>lps(pattern.length());
    int index=0;
    for(int i=1; i<pattern.length();){
        if(pattern[index]==pattern[i]){
            lps[i] = index+1;
            index++,i++;
        }
        else{
            if(index>0)
              index = lps[index-1];
            else lps[i] = index, i++;
        }
    }
    return lps;
}

int kmp(string text, string pattern)
{
    int cnt=0;
    int m = text.length();
    int n = pattern.length();

    vector<int>lps = temp(pattern);
    int i=0, j=0;
    while(i<m)
    {
        if(text[i]==pattern[j])
        {
            i++, j++;
            if(j==n){
                cnt++;
                j = lps[j-1];
            }
        }
        else{
            if(j!=0) j=lps[j-1];
            else ++i;
        }

    }
    return cnt;

}
int main()
{
    ios_base::sync_with_stdio(false);
    int test;
    cin>>test;
    while(test--){
        string text,pattern;
        cin>>text>>pattern;
        cout<<"Case "<<++cs<<": "<<kmp(text,pattern)<<endl;
    }
    return 0;
}

