//link-https://www.codechef.com/problems/RNT013

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n,k,i,s,t,c=0;
	cin>>n>>k;
	set<long long>pq;
	for(i=1;i*i<=n;i++)
	{
	    if(n%i==0)
	    {
	        if(i!=n-i)
	        {
	            pq.insert(i);
	            pq.insert(n/i);
	        }
	        else
	        {
	            pq.insert(i);
	        }
	    }
	}
	s=pq.size();
	if(k>s)
	{
	    cout<<"-1";
	}
	else
	{
        vector<long long>v;
        v.assign(pq.begin(),pq.end());
	    cout<<v[k-1];

	}
	return 0;
}    
