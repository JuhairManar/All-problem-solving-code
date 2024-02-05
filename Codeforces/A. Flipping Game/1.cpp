//link-https://codeforces.com/problemset/problem/327/A

/* #include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,gmx=0,lmx,c[2]={},s;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        lmx=-1;
        s=0;
        while(a[i]==0)
        {
            s++;
            if(i<n-1)
            {
               i++;
            }
        }
        i--;
        if(s>lmx)
        {
            lmx=s;
            if(lmx>gmx)
            {
                gmx=lmx;
            }
        }
    } 
    cout<<c[1]+gmx;



  return 0;
}
 */
