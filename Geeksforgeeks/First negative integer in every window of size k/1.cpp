#include <bits/stdc++.h>

using namespace std;

/* vector<long long> printFirstNegativeInteger2(long long int A[], long long int N, long long int K)
{
    long long i, j, f;
    vector<long long> v;
    for (i = 0; i <= N - K; i++)
    {
        f = 1;
        for (j = i; j < i + K; j++)
        {
            if (A[j] < 0)
            {
                v.push_back(A[j]);
                f = 0;
                break;
            }
        }
        if (f)
        {
            v.push_back(0);
        }
    }
 
   return v;
} */

vector<long> printFirstNegativeInteger(long int a[], long int n, long int k)
{
    long i, j, f;
    // pair<long,long>p;
    queue<pair<long, long>> q;
    vector<long> v;
    for (i = 0; i < k; i++)
    {
        if (a[i] < 0)
        {
            // p={a[i],i};
            q.push({a[i], i});
        }
    }
    if (q.empty())
    {
        v.push_back(0);
    }
    else
    {
        f = q.front().first;
        v.push_back(f);
    }
    j = i;
    i = 1;
    while (j < n)
    {
        if (!q.empty() && i > q.front().second)
        {
            q.pop();
        }
        if (a[j] < 0)
        {
            q.push({a[j], j});
        }
        if (q.empty())
        {
            v.push_back(0);
        }
        else
        {
            f = q.front().first;
            v.push_back(f);
        }
        i++;j++;
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*  freopen(input.txt, 'r', stdin);
        freopen(output.txt, 'w', stdout); */
    // long long N=5,A[] = {-8, 2, 3, -6, 10},k=2;
    long N = 5, A[] = {-8, 2, 3, -6, 10}, K = 2;
    vector<long> v = printFirstNegativeInteger(A, N, K);
    priority_queue<int> pq;
    for (auto g : v)
    {
        cout << g << " ";
    }

    return 0;
}

/* 
9
    for(i=0;i<N;i++)
        {
            if(A[i]<0)
            {
                t.push_back(A[i]);
            }
        }
        if(t.size()==0)
        {
            for(i=0;i<=N-K;i++)
            {
                t.push_back(0);
            }
            return t;
        }
 */