//link-https://codeforces.com/contest/1722/problem/B

/* #include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n; 
        string s1,s2;
        cin>>s1>>s2; 
        for(i=0;i<n;i++)
        {
            if(s1[i]=='B')
            {
                s1[i]='G';
            }
            if(s2[i]=='B')
            {
                s2[i]='G';
            }
        }
        if(s1==s2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }                                    


  return 0;
} */

/* #include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    map<string,string>m;
    int t=5;
    string s1,s2,s;
    while(cin>>s1>>s2)
    {
        m[s2]=s1;
    }
    t=3;
    while(cin>>s)
    {
        if(m[s]=="")
        {
            cout<<"eh\n";
        }
        else
        {
            cout<<m[s]<<endl;
        }
    }


  return 0;
} */

#include<bits/stdc++.h>

using namespace std;

int a[200000];

int fib(int n)
{
      if(n==0 || n==1)
      {
        return n;
      }
      if(a[n]==0)
      {
         a[n]=fib(n-1)+fib(n-2);
      }
      return a[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    for(int i=0;i<200000;i++)
    {
        a[i]=0;
    }
    int n,p;
    cin>>n;
    p=fib(n);
    cout<<p;
                                        


  return 0;
}