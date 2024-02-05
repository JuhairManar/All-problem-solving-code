//link-https://codeforces.com/problemset/problem/268/A

//need to be improved

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int home[101]={},away[101]={},i,x,y,n,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        home[x]++;
        away[y]++;
    }
    for(i=1;i<101;i++)
    {
        s+=max(home[i],away[i]);
    }
    cout<<s;                                    


  return 0;
}
