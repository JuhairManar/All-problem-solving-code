//link-https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<bits/stdc++.h>

using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
        sort(arr,arr+r+1);
        return arr[k-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 5,arr[] = {7 ,10 ,4 ,20 ,15},K = 4,l=0,r;
    cout<<kthSmallest(arr,l,N,K);


  return 0;
}
 