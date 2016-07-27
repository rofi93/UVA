/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>

#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

#include <bits/stdc++.h>
/* all header files included */

#define mod         1000000007
#define pi          acos(-1.0)
#define eps         1e-9

#define fs          first
#define sc          second
#define pb(a)       push_back(a)
#define mp(a,b)     make_pair(a,b)
#define sp          printf(" ")
#define nl          printf("\n")

#define set0(a)     memset(a,0,sizeof(a))
#define setneg(a)   memset(a,-1,sizeof(a))
#define setinf(a)   memset(a,126,sizeof(a))

#define tc1(x)      printf("Case %d: ",x)
#define tc2(x)      printf("Case #%d: ",x)
#define tc3(x)      printf("Case %d:\n",x)
#define tc4(x)      printf("Case #%d:\n",x)

#define pr1(x)      cout<<x<<"\n"
#define pr2(x,y)    cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)  cout<<x<<" "<<y<<" "<<z<<"\n"
/* defining macros */

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int>pii;
typedef pair<LL, LL>pll;
typedef pair<double, double>pdd;
typedef vector<int>vi;
typedef vector<LL>vll;
typedef vector<double>vd;
/* type definition */

int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx6[]= {0,0,1,-1,0,0};
int dy6[]= {1,-1,0,0,0,0};
int dz6[]= {0,0,0,0,1,-1};
int dx8[]= {1,-1,0,0,-1,1,-1,1};
int dy8[]= {0,0,1,-1,1,1,-1,-1};
int dkx8[]= {-1,1,-1,1,-2,-2,2,2};
int dky8[]= {2,2,-2,-2,1,-1,1,-1};
/* direction array */

int tc=1;
/* global declaration */

map<string,int>mp;

void create(void)
{
    int i,j,k,ass,l,m;
    string str="";
    ass=1;
    for(i=1; i<=26; i++)
    {
        str=i+96;
        mp[str]=ass++;
    }
    for(i=1; i<=26; i++)
    {
        for(j=i+1; j<=26; j++)
        {
            str=i+96;
            str+=j+96;
            mp[str]=ass++;
        }
    }
    for(i=1; i<=26; i++)
    {
        for(j=i+1; j<=26; j++)
        {
            for(k=j+1; k<=26; k++)
            {
                str=i+96;
                str+=j+96;
                str+=k+96;
                mp[str]=ass++;
            }
        }
    }
    for(i=1; i<=26; i++)
    {
        for(j=i+1; j<=26; j++)
        {
            for(k=j+1; k<=26; k++)
            {
                for(l=k+1; l<=26; l++)
                {
                    str=i+96;
                    str+=j+96;
                    str+=k+96;
                    str+=l+96;
                    mp[str]=ass++;
                }
            }
        }
    }
    for(i=1; i<=26; i++)
    {
        for(j=i+1; j<=26; j++)
        {
            for(k=j+1; k<=26; k++)
            {
                for(l=k+1; l<=26; l++)
                {
                    for(m=l+1; m<=26; m++)
                    {
                        str=i+96;
                        str+=j+96;
                        str+=k+96;
                        str+=l+96;
                        str+=m+96;
                        mp[str]=ass++;
                    }
                }
            }
        }
    }
}

int main()
{
    string input;
    create();
    while(cin>>input)
    {
        pr1(mp[input]);
    }
    return 0;
}
