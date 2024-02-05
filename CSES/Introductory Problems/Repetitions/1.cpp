#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,i,c=1,mx=1;
    string s;
    cin>>s;
    n=s.size();
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
            mx=max(mx,c);
        }
        else
        {
            c=1;
        }
    }           
    cout<<mx;                         


  return 0;
}