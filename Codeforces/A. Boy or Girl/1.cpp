//link-https://codeforces.com/problemset/problem/236/A

#include <stdio.h>
#include<string.h>
#include<conio.h>

//using namespace std;

int main()
{
    char s[100];
    scanf("%s",s);
    int i, j, k, f, dc = 0, c,l,ac=0,bc=0;
    l=strlen(s);
    for (i = 0; i < l; i++)
    {
        f = 0;
        c = 0;
        for (k = 0; k < i; k++)
        {
            if (s[i] == s[k])
            {
                f = 1;
            }
        }
        if (f == 1)
        {
            continue;
        }
        for (j = i + 1; j < l; j++)
        {
            if (s[i] == s[j])
            {
                c = 1;
            }
        }
        if (c == 0)
        {
            ac++;
        }
        if(c==1)
        {
            bc++;
        }
    }
    dc=ac+bc;
    if (dc % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}