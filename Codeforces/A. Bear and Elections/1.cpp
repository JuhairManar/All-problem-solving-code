//link-https://codeforces.com/problemset/problem/574/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,vb,i,d,cnt=0;
    cin>>n>>vb;
    priority_queue<int>pq;
    for(i=1;i<n;i++)
    {
        cin>>d;
        pq.push(d);
    }
    while(vb<=pq.top())
    {
        int h=pq.top();
        pq.pop();
        vb++;
        pq.push(h-1);
        cnt++;
    }
    cout<<cnt;
}

//not completed