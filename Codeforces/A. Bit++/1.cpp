//link-https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;
        if(st=="++X" || st=="X++")
        {
           s++;
        }
        else
        {
            s--;
        }
    }
    cout<<s;


  return 0;
}