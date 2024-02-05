#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long long n;
    cin>>n;
    vector<long long>v;
    v.push_back(n); 
    while(n!=1)
    {
        if(n%2)
        {
            n=(n*3)+1;
        }
        else
        {
            n/=2;
        }
        v.push_back(n);
    }     
    for(auto g:v)
    {
        cout<<g<<" ";
    }                              


  return 0;
}