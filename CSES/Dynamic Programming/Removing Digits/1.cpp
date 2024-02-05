// link-https://cses.fi/problemset/task/1637

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, i, t, r;
    cin >> n;
    vector<long> v(n + 1, 1e7);
    vector<long> a;
    /*     t=n;
        while(t)
        {
           r=t%10;
           a.push_back(r);
           t/=10;
        }*/
        v[n]=0;
    for (i = n; i >= 0; i--)
    {
        if (v[i] == 1e7)
        {
            continue;
        }
        vector<long> a;
        t = i;
        while (t)
        {
            r = t % 10;
            a.push_back(r);
            t /= 10;
        }
        for (auto g : a)
        {
            if (i - g >= 0)
            {
                v[i - g] = min(v[i - g], v[i] + 1);
            }
        }
    }
    cout << v[0];

    return 0;
}