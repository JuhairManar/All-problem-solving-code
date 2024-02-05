#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,i,d,c=0;
    cin>>n;
    long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            c+=a[i-1]-a[i];
            //cout<<i<<" "<<c<<endl;
            a[i]=a[i-1];
        }
        
    }
    cout<<c;

    return 0;
}