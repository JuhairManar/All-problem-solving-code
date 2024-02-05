//link-https://codeforces.com/problemset/problem/141/A
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c,d;
    int i,j,l1,l2,l3,l4;
    char t;
    getline(cin,a);
    getline(cin,b);
    getline(cin,d);
    c=a+b;
    l3=c.size();
    l4=d.size();
    for(i=0;i<l3;i++)
    {
        for(j=i+1;j<l3;j++)
        {
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    for(i=0;i<l4;i++)
    {
        for(j=i+1;j<l4;j++)
        {
            if(d[i]>d[j])
            {
                t=d[i];
                d[i]=d[j];
                d[j]=t;
            }
        }
    }
    if(c==d)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    




    return 0;
}