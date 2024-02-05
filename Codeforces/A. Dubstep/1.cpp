/* #include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m, i, j;
    cin >> n >> m;
    string in[n], out[n];
    for (i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < n; j++)
            {
                if (j % 2 == 0 && in[i][j] == '.')
                {
                    // cout<<"B";
                    in[i][j] = 'B';
                }
                else
                {
                    if (in[i][j] == '.')
                    {
                        in[i][j] = 'W';
                    }
                    // cout<<"W";
                }
            }
        }
        else
        {
            for (j = 0; j < n; j++)
            {
                if (j % 2 == 0 && in[i][j] == '.')
                {
                    // cout<<"B";
                    in[i][j] = 'W';
                }
                else
                {
                    if (in[i][j] == '.')
                    {
                        in[i][j] = 'B';
                    }
                    // cout<<"W";
                }
            }
        }
        //cout << endl;
    }
    for(i=0;i<n;i++)
    {
        cout<<in[i]<<endl;
    }

    return 0;
} */

#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n, h, m, h0, m0, c(1), cash(1);
    cin>>n;
    cin>>h0>>m0;

    while (--n)
    {
        cin>>h>>m;
        if (h == h0 && m == m0)
        {
            c += 1;
            if (c > cash)
            {
                cash = c;
            }
        }
        else
        {
            c = 1;
        }
        h0 = h;
        m0 = m;
    }
    cout<<cash<<endl;
    return 0;
}