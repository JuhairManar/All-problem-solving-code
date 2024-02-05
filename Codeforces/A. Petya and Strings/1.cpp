// link-https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, d, f = 0;
    string s1, s2;
    cin >> s1 >> s2;
    n = s1.size();
    for (i = 0; i < n; i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s1[i]>s2[i])
        {
            cout<<"1";
            return 0;
        }
        else if(s2[i]>s1[i])
        {
            cout<<"-1";
            return 0;
        }
    }
cout << f;

return 0;
}
/* 
17
        /*         if(abs(s1[i]-s2[i])<32)
                {
                    f=1;
                    break;
                }
                else if(abs(s1[i]-s2[i])>32)
                {
                    f=-1;
                    break;
                 */