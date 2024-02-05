// link-https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n=s.size(), i,c=-1;
    //set<int> st;
    priority_queue <int, vector<int>, greater<int>> pq;
    for (i = 0; i < n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int d=s[i]-48;
            c++;
            //cout<<d<<endl;
            pq.push(d);
        }
    }
    while(!pq.empty())
    {
        int d=pq.top();
        cout<<d;
        if(c!=0)
            {
                cout<<"+";
            }
            c--;
        pq.pop();     
    }
/*         for(auto g:st)
        {
            cout<<g;
            if(c!=0)
            {
                cout<<"+";
            }
            c--; 
        } */
/*     for (auto it = st.begin(); it !=st.end();++it)
    {
        if(*it!=st.end()-1)
        {
            cout<<*it<<"+";
        }
        else
        {
            cout<<*it;
        }
    } */

    return 0;
}