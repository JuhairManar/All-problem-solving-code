//link-https://codeforces.com/problemset/problem/378/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,a=0,b=0,c=0,i;
    cin>>x>>y;
    for(i=1;i<=6;i++)
    {
        if(abs(x-i)<abs(y-i))
        {
            a++;
        }
        else if(abs(x-i)>abs(y-i))
        {
            c++;
        }
        else
        {
            b++;
        }
    }
    cout<<a<<" "<<b<<" "<<c;


  return 0;
}