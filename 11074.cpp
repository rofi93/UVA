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

int main()
{
    int s,t,n,i,j,k,star,l,tc=1;
    while(cin>>s>>t>>n)
    {
        if(s==0 && t==0 && n==0)
            break;
        printf("Case %d:\n",tc++);
        star=(s*n)+(t*(n+1));
        for(k=1; k<=n; k++)
        {
            for(i=1; i<=t; i++)
            {
                for(j=1; j<=star; j++)
                    printf("*");
                nl;
            }
            for(i=1; i<=s; i++)
            {
                for(l=1; l<=n; l++)
                {
                    for(j=1; j<=t; j++)
                        printf("*");
                    for(j=1; j<=s; j++)
                        printf(".");
                }
                for(j=1; j<=t; j++)
                    printf("*");
                nl;
            }
        }
        for(i=1; i<=t; i++)
        {
            for(j=1; j<=star; j++)
                printf("*");
            nl;
        }
        nl;
    }
    return 0;
}
