#include<bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;

}

void print_by_expression(int n)
{
    int i;
    if(is_prime(n)==true)
    {
        cout<<n;
    }
    else
    {
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        cout<<i<<"*";
        print_by_expression(n/i);
        //print_by_expression(n/i)
    }

}

int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    if(n<0)
    {
        cout<<"-1*";
        print_by_expression(-n);
    }
    else
    {
        print_by_expression(n);
    }


    return 0;
}