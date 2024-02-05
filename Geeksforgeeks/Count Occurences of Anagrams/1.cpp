// link-https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

/* #include <bits/stdc++.h>

using namespace std;

int search(string pat, string txt)
{
    int k = pat.size(), n = txt.size(), i, j, dc, c = 0;
    map<char, int> presence, counting;
    for (i = 0; i < k; i++)
    {
        presence[pat[i]] = 1;
        counting[pat[i]]++;
    }
    dc = presence.size();
    for (i = 0; i < k; i++)
    {
        if (presence[txt[i]])
        {
            counting[txt[i]]--;
            if (counting[txt[i]] == 0)
            {
                dc--;
            }
        }
    }
    if (!dc)
    {
        cout<<"j = "<<i<<endl;
        c++;
    }
    counting[txt[0]]++;
    j = i;
    i = 1;
    if (counting[txt[0]] == 1)
    {
        dc++;
    }
    while (j < n)
    {
        if (presence[txt[j]])
        {
            cout<<"j = "<<j<<" txt[j] ="<<txt[j]<<endl;
            counting[txt[j]]--;
            if (counting[txt[j]] == 0)
            {
                cout<<"dc -- j = "<<j<<" txt[j] ="<<txt[j]<<endl;
                dc--;
            }
        }
        if (!dc)
        {
            cout<<"j = "<<j<<endl;
            c++;
        }
        counting[txt[i]]++;
        if (counting[txt[j]] == 1)
        {
            dc++;
        }
        i++;
        j++;
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << search("for", "forxxorfxdofr");

    return 0;
} */

#include<bits/stdc++.h>

using namespace std;

int search(string pat, string txt)
{
   int k=pat.size(),n=txt.size(),i,j,c=0,d;
   vector<int>pn(26,0),t(26,0);
   for(i=0;i<k;i++)
   {
    d=pat[i]-'a';
    pn[d]++;
    d=txt[i]-'a';
    t[d]++;
   }
   if(pn==t)
   {
    //cout<<"Yes\n";
    c++;
   }
   //cout<<txt[0]
   d=txt[0]-'a';
   //cout<<d<<endl;
   t[d]--;
   j=i;i=1;
   while(j<n)
   {
      d=txt[j]-'a';
      t[d]++;
      if(pn==t)
      {
        c++;
      }
      d=txt[i]-'a';
      t[d]--;
      i++;j++;
   }

   return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    cout << search("aaba", "aabaabaa");
                                        


  return 0;
}