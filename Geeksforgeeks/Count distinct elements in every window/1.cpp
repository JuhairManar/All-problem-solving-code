// link-https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1?page=1&category[]=sliding-window&sortBy=submissions

#include <bits/stdc++.h>

using namespace std;

vector<int> countDistinct(int A[], int n, int k)
{
    vector<int> v;
    int i, j, s = 0, c[100001] = {};
    for (i = 0; i < k; i++)
    {
        c[A[i]]++;
        if (c[A[i]] == 1)
        {
            s++;
        }
    }
    v.push_back(s);
    c[A[0]]--;
    if (c[A[0]] == 0)
    {
        s--;
    }
    j = i;
    i = 1;
    while (j < n)
    {
        c[A[j]]++;
        if (c[A[j]] == 1)
        {
            s++;
        }
        v.push_back(s);
        c[A[i]]--;
        if (c[A[i]] == 0)
        {
            s--;
        }
        i++;
        j++;
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 7, K = 4,A[] = {1, 2, 1, 3, 4, 2, 3};
    vector<int>v=countDistinct(A,N,K);
    for(auto g:v)
    {
        cout<<g<<" ";
    }

    return 0;
}