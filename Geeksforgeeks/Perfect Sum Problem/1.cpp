//link-https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1


#include<bits/stdc++.h>

using namespace std;

void cs(int arr[], int n, int sum,int &c,int i)
    {
        //cout<<arr[i]<<endl;
        cout<<sum<<endl;
        if(sum<=0)
        {
            if(sum==0)
            {
              c++;
            }
            return ;
        }
        if(i>=n)
        {
            //cout<<"YES\n";
            if(sum==0)
            {
                c++;
            }
            return;
        }
        //if(arr[i]<=sum)
        //{
            cs(arr,n,sum-arr[i],c,i+1);
            //cout<<sum<<endl;
            cs(arr,n,sum,c,i+1);
        //}
       // cs(arr,n,sum,c,i+1);
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int arr[]={1, 2, 3, 4, 5},n=5,sum=10,c=0;
    cs(arr,n,sum,c,0);
    cout<<c<<endl;
                                        


  return 0;
}