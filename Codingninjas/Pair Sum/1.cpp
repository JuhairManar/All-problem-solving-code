//link-https://www.codingninjas.com/studio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   map<int,int>m;
   vector<int>t(2);
   vector<vector<int>>v;
   sort(arr.begin(),arr.end());
   int i,n=arr.size(),d,j,tt;
   for(i=0;i<n;i++)
   {
      m[arr[i]]++;
   }
   for(i=0;i<n;i++)
   {
      d=s-arr[i];
      if(m[d])
      { 
        if(arr[i]<d) 
        {
          for(j=0;j<m[d];j++)
          {
              t[0]=arr[i];
              t[1]=d;  
              v.push_back(t);   
          } 
        }
        else if(arr[i]==d)
        {
           tt=m[d]-1;
           tt=((tt)*(tt+1))/2; 
           for(j=0;j<tt;j++)
           {
              t[0]=arr[i];
              t[1]=d;  
              v.push_back(t);
           }
        }
        cout<<"i = "<<i<<endl;
      }
   }
   return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    vector<int>v{2 ,6 ,2 ,5, 2 };
    int s=4;
    vector<vector<int>>vv=pairSum(v,s);
    for(auto g:vv)
    {
        for(auto h:g)
        {
            cout<<h<<" ";
        }
        cout<<endl;
    }                                    


  return 0;
}