#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a,n,i,j,rem;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"Enter the remainder\n";
    cin>>rem;
    a=n-rem;
    for(i=1;i*i<=a;i++)
    {
        if(a%i==0)
        {
            if(i!=a/i)
            {
                if(i>rem && a/i>rem)
                {
                   cout<<i<<" "<<a/i<<" ";
                }
                else if(a/i>rem)
                {
                    cout<<a/i<<" ";
                }
/*                 else
                {
                    cout<<a/i<<" ";
                } */
            }
            /* else
            {
                if(i>rem)
                {
                   cout<<i<<" ";
                }
            } */
        }
    }
    


    return 0;
}