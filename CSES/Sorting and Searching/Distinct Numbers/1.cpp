//link-https://cses.fi/problemset/task/1621

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,i,d;
    cin>>n; 
    //unordered_set<long>s;
    set<long>s;
    for(i=0;i<n;i++)
    {
        cin>>d;
        s.insert(d);
    }               
    cout<<s.size();                 


  return 0;
}