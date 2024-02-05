//link-https://www.codingninjas.com/studio/problems/allocate-books_1090540

#include<bits/stdc++.h>

using namespace std;

bool po(vector<int>& arr, int n, int m,long mid)
{
    long s=0,i,st=1;
    for(i=0;i<n;i++)
    {
        if(arr[i]+s<=mid)
        {
           s+=arr[i];
        }
        else
        {
            st++;
            if(st>m || arr[i]>mid)
            {
                return false;
            }
            s=arr[i];
        }
        return true;
    }
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n)
    {
        return -1;
    }
    long r=0,l,mid=arr.size(),ans=-1;
    for(l=0;l<mid;l++)
    {
        r+=arr[l];
    }
    l=0;mid=(l+r)/2;
    while(l<=r)
    {
        if(po(arr,n,m,mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        mid=(l+r)/2;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
                                        


  return 0;
}