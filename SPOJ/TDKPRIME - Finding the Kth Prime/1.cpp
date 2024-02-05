//link-https://www.spoj.com/problems/TDKPRIME/

#include<bits/stdc++.h>

using namespace std;

bool prime[6000002];
vector<long>v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long i,n,j,t,q;
    for(i=2;i*i<=6000002;i++)
    {
        if(!prime[i])
        {
            v.push_back(i);
            for(j=i*i;j<=6000002;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(i=2;i<=6000002;i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<v[n-1]<<endl;
    }

                                        


  return 0;
}

/* #include<bits/stdc++.h>

using namespace std;

bool prime[5000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long> v;
    long i, n, j, t, q;
    for (i = 2; i * i <= 5000001; i++)
    {
        if (!prime[i])
        {
            v.push_back(i);
            for (j = i * i; j <= 5000001; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << v[n - 1] << endl;
    }

    return 0;
} */

/* #include<bits/stdc++.h>
using  namespace  std;
 
bool prime[90000001];
int n=90000000;
vector<int>v;
void sieve()
{
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==false)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=true;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==false)v.push_back(i);
	}
}
int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
	return 0;
} */
 