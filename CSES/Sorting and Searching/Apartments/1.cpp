//link-https://cses.fi/problemset/task/1084

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m,k,i,j,c=0;
    cin>>n>>m>>k;
    long al[n],cr[m];
    for(i=0;i<n;i++)
    {
        cin>>al[i];  //desired size
    }
    for(i=0;i<m;i++)
    {
        cin>>cr[i];  //original size
    }
    sort(al,al+n);
    sort(cr,cr+m);
    i=0;j=0;
    while(i<n && j<m)
    {
        if(abs(al[i]-cr[j])<=k)
        {
            c++;i++;j++;
        }
        else if(al[i]<cr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    
    cout<<c;
                                        


  return 0;
}

