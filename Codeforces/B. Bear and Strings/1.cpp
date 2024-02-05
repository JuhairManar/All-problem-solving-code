// link-https://codeforces.com/problemset/problem/385/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int i, j, c = 0, n=s.size(),t,ni,st,sum=0;
    for(i=0;i<n-3;i++)
    {
        if(s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r')
        {
            //c++;
            t=i-c+1;   //before index
            ni=(n-1)-(i+3)+1; //total number of range
            //cout<<d<<endl;
            //np=d+((t-1)*(-1));
            st=t*ni;
            sum+=st;
            c+=t;
        }
    }
    cout<<sum;


    return 0;
}
