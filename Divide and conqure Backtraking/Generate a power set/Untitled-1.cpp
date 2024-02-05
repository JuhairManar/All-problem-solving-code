#include<bits/stdc++.h>

using namespace std;

vector<int>v;

void solve(int s,int e)
{
    if(s>e)
    {
        for(int x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    solve(s+1,e);
    v.push_back(s);
    solve(s+1,e);
    v.pop_back();
}

int main()
{
    solve(1,3);
    


    return 0;
}