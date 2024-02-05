//link-https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1640

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long i,j,n,c,t;
    while(1)
    {
        c=0;
        cin>>n;
        t=n;
        if(n==0)
        {
            break;
        }
        if(n%2==0)
        {
            while(n%2==0)
            {
                n/=2;
            }
            c++;
        }
        for(i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n/=i;
                }
                c++;
            }
        }
        cout<<t<<" : "<<c+1<<endl;
    }                                    


  return 0;
}