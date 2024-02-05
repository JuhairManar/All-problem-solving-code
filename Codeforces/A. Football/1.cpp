//link-https://codeforces.com/problemset/problem/43/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,max=-11,pos;
    cin>>n;
    map<string,int>m;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto g:m)
    {
        if(g.second>max)
        {
            max=g.second;
        }
    }
    for(auto g:m)
    {
        if(g.second==max)
        {
            cout<<g.first;
            break;
        }
    }



  return 0;
}