/* #include<bits/stdc++.h>

using namespace std;

//2^500 % 10

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,n,x,i=1,c=-1,r; //a -base, n-power ,x=divisor
    cin>>a>>n>>x;
    int arr[x]={};   //counter arry for check repetation of remainder
    vector<int>v;
    v.push_back(0);
    for(i=1;i<=n;i++)
    {
       int t=pow(a,i);
       r=t%x;
       arr[r]++;
       v.push_back(r);    //making a cyclic list of the remainders
       if(arr[r]==2)  //if a remainder repeats
       {
        break;
       }
    }
    c=i-1;      //c-total number of unique remainders
    v[0]=v[c];
    r=n%c;      //r -remainder of power and total number of unique remainders
    cout<<v[r];


  return 0;
}    */

/* #include<bits/stdc++.h>

using namespace std;

long long ans(long long b,long long p)
{
  if(p==1)
  {
    return b;
  }
  long long s=ans(b,p-1);
  long long bi=b*s;
  return bi;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long b,p;
    cin>>b>>p;
    cout<<ans(b,p);



  return 0;
} */

/* #include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    while(1)
    {
      cin>>a>>b;
      cout<<(a>>b)<<endl;
    }


  return 0;
} */

// CPP program to find the
// blocks for given number.
/* #include <bits/stdc++.h>
using namespace std;

void block(long int x)
{
  vector<long int> v;

  // Converting the decimal number
  // into its binary equivalent.
  cout << "Blocks for " << x << " : ";
  while (x > 0)
  {
    v.push_back(x % 2);
    x = x / 2;
  }

  // Displaying the output when
  // the bit is '1' in binary
  // equivalent of number.
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == 1)
    {
      cout << i;
      if (i != v.size() - 1)
        cout << ", ";
    }
  }
  cout << endl;
}

// Driver Function
int main()
{
  block(71307);
  block(1213);
  block(29);
  block(100);
  return 0;
} */
/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,n,x,g;
    cin>>a>>n>>x;
    g=pow(a,n);
    cout<<g<<endl;
    cout<<g%x;



  return 0;
} */

/* #include <bits/stdc++.h>
using namespace std;

void allPossibleSubset(int arr[], int n)
{
  int count = pow(2, n);
  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "i= " << i << " ,j= " << j << endl;
      if ((i & (1 << j)) != 0)
      {
        cout << "True\n";
        cout<<(i & (1 << j))<<endl;
        //cout << arr[j] << " ";
      }
    }
    cout << "\n";
  }
}

int main()
{
  int n;

  cout << "Enter size of the set\n";
  cin >> n;

  int arr[n];
  cout << "Enter Elements of the set\n";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  allPossibleSubset(arr, n);


  return 0;
} */
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  /*  freopen(input.txt, 'r', stdin);
      freopen(output.txt, 'w', stdout); */
  int t;
  cin >> t;
  while (t--)
  {
    long n, k, i, j;
    cin >> n >> k;
    // priority_queue<long>pq;
    long long a[n + 1], s, d;
    a[0] = 0;
    for (i = 1; i <= n; i++)
    {
      cin >> d;
      a[i] = a[i - 1] + d;
    }
    /* for(i=1;i<=n;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<endl; */
    d = 0;
    for (i = k; i <= n; i++)
    {
      if ((a[i] - a[i - k]) > d)
      {
        d = a[i] - a[i - k];
      }
    }
    cout << d << endl;
  }
  return 0;
}  