//link-https://cses.fi/problemset/task/2216

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,i,a,b,c=0;
    cin>>n;
    vector<pair<long,long>>v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back({a,i});
    }                      
    sort(v.begin(),v.end());
    for(i=1;i<n;i++)
    {
        a=v[i].second;
        b=v[i-1].second;
        if(a<b)
        {
            c++;
        }
    }           
    cout<<c+1;   


  return 0;
}