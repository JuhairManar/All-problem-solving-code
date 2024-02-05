//link-https://leetcode.com/problems/minimum-size-subarray-sum/


#include<bits/stdc++.h>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) 
{
   long n=nums.size(),i,min=0,j;
   long a[n+1],t,f=0;
   //cout<<n<<endl;
   a[0]=0;
   for(i=1;i<=n;i++)
   {
    a[i]=a[i-1]+nums[i-1];
   }
/*    for(i=1;i<=n;i++)
   {
    cout<<a[i]<<" ";
   } */
   cout<<endl;
   for(i=1;i<=n;i++)
   {
       t=i;
       //cout<<a[i]<<" ";
       for(j=i;j<=n;j++)
       {
           //cout<<a[j]<<" "<<a[j-t]<<endl;
           if(a[j]-a[j-t]>=target)
           {
            min=i;
            f=1;
            break;
           }
       }
       if(f)
       {
        break;
       }
   }
   return min;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v{1,2,3,4,5};
    long long t=11;
    cout<<minSubArrayLen(t,v);
                                        


  return 0;
}