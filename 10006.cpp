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
#define fs          first
#define sc          second
#define pb(a)       push_back(a)
#define mp(a,b)     make_pair(a,b)
#define sp          printf(" ")
#define nl          printf("\n")

#define tc1(x)      printf("Case %d: ",x)
#define tc2(x)      printf("Case #%d: ",x)

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
bool prime(ULL n)
{
    int i;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
ULL charmichael(ULL a,ULL k,ULL n)
{
    if(k==1)
        return a;
    if(k%2==0)
        return charmichael(((a*a)%n),k/2,n);
    return (a*charmichael(((a*a)%n),k/2,n))%n;
}
int main()
{
    ULL n,i,j;
    bool farmet[65000];

    for(i=2; i<65000; i++)
    {
        if(prime(i))
        {
            farmet[i]=false;
            continue;
        }
        for(j=2; j<i; j++)
        {
            if(charmichael(j,i,i)!=j)
                break;
        }
        if(j==i)
            farmet[i]=true;
        else
            farmet[i]=false;
    }
    while(scanf("%llu",&n))
    {
        if(n==0)
            break;
        if(farmet[n])
        {
            printf("The number %llu is a Carmichael number.",n);
        }
        else
        {
            printf("%llu is normal.",n);
        }
        nl;
    }
    return 0;
}
