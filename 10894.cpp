/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstring>

#include<set>
#include<map>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<vector>
#include<sstream>
#include<utility>
#include<iostream>
#include<algorithm>

#include<bits/stdc++.h>
/* all header files included */

#define LL long long

#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define pii pair<int,int>

#define nl printf("\n")
/* defining macros */

using namespace std;
char pos[6][62]= {"*****..***..*...*.*****...*...*.*****.*****.***...*****.*...*",
                  "*.....*...*.*...*.*.......*...*.*...*...*...*..*..*...*..*.*.",
                  "*****.*****.*...*.***.....*****.*****...*...*...*.*...*...*..",
                  "....*.*...*..*.*..*.......*...*.*.*.....*...*..*..*...*...*..",
                  "*****.*...*...*...*****...*...*.*..**.*****.***...*****...*.."
                 };

char neg[62][6]=
{
    "*****",
    "*....",
    "*****",
    "....*",
    "*****",
    ".....",
    ".***.",
    "*...*",
    "*****",
    "*...*",
    "*...*",
    ".....",
    "*...*",
    "*...*",
    "*...*",
    ".*.*.",
    "..*..",
    ".....",
    "*****",
    "*....",
    "***..",
    "*....",
    "*****",
    ".....",
    ".....",
    ".....",
    "*...*",
    "*...*",
    "*****",
    "*...*",
    "*...*",
    ".....",
    "*****",
    "*...*",
    "*****",
    "*.*..",
    "*..**",
    ".....",
    "*****",
    "..*..",
    "..*..",
    "..*..",
    "*****",
    ".....",
    "***..",
    "*..*.",
    "*...*",
    "*..*.",
    "***..",
    ".....",
    "*****",
    "*...*",
    "*...*",
    "*...*",
    "*****",
    ".....",
    "*...*",
    ".*.*.",
    "..*..",
    "..*..",
    "..*.."
};


void positive(int n)
{
    int i,j,k,l;

    for(j=0; j<5; j++)
    {
        string str;
        for(k=0; k<61; k++)
        {
            for(i=0; i<n; i++)
            {
                str+=pos[j][k];
            }
        }
        for(i=0; i<n; i++)
            printf("%s\n",str.c_str());
    }
}
void negative(int n)
{
    int i,j,k,l;

    for(j=0; j<61; j++)
    {
        string str;
        for(k=0; k<5; k++)
        {
            for(i=0; i<n; i++)
            {
                str+=neg[j][k];
            }
        }
        for(i=0; i<n; i++)
            printf("%s\n",str.c_str());
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n>0)
            positive(n);
        else
            negative(abs(n));
        nl;nl;
    }
    return 0;
}
