#include<bits/stdc++.h>

using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums){
    long i=0,j=1,n=nums.size(),c=0;

    while(j<n && i<n)
    {
        c++;
        while(nums[i]<0 && i<j)
        {
            i++;
            c++;
        }
/*         if(i==j)
        {
            break;
        } */
        while(nums[j]>=0 && j<n)
        {
            j++;
            c++;
        }
        if(j==n)
        {
            break;
        }
/*         if(i<n && j<n)
        {
            if(nums[i]<0 && nums[j]>=0)
            {
                swap(nums[i],nums[j]);
            }
             
        } */
        swap(nums[i],nums[j]);
        
    }
    cout<<c<<endl;
    auto r=nums;
    return r;
    return nums;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    vector<int>v{1,-5,-5,3};
    v=separateNegativeAndPositive(v);
    for(auto g:v)
    {
        cout<<g<<" ";
    }                                         


  return 0;
}