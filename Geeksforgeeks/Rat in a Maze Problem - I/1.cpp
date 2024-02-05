// link-https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

#include <bits/stdc++.h>

using namespace std;

vector<string>vs;

int dx[]={1,-1,0,0},dy={0,0,1,-1};

vector<string> paths(vector<vector<int>>m,int n)
{
    vector<vector<int>>vis(n,vector<int>(n,0));

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*  freopen(input.txt, 'r', stdin);
        freopen(output.txt, 'w', stdout); */
    int n,m,i,j=0,d;
    vector<vector<int>>m;
    cin>>n;
    for(i=0;i<n;i++)
    { 
        vector<int>v;
        for(j=0;j<n;j++)
        {
           cin>>d;
           v.push_back(d);
        }
        m.push_back(v);
    }
    vector<string>vs=paths(m,n);

    return 0;
}