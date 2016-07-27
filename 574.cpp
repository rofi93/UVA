/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include <bits/stdc++.h>
/* all header files included */

#define fs            first
#define sc            second
#define sp            printf(" ")
#define nl            printf("\n")
#define pb(a)         push_back(a)
#define mp(a,b)       make_pair(a,b)

#define setzero(a)    memset(a,0,sizeof(a))
#define setneg(a)     memset(a,-1,sizeof(a))
#define setinf(a)     memset(a,126,sizeof(a))

#define tc1(x)        printf("Case %d: ",x)
#define tc2(x)        printf("Case #%d: ",x)
#define tc3(x)        printf("Case %d:\n",x)
#define tc4(x)        printf("Case #%d:\n",x)

#define pr1(x)        cout<<x<<"\n"
#define pr2(x,y)      cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)    cout<<x<<" "<<y<<" "<<z<<"\n"
#define pr4(w,x,y,z)  cout<<w<<" "<<x<<" "<<y<<" "<<z<<"\n"
#define fast          ios::sync_with_stdio(0)
#define read          freopen("input.txt","r",stdin)
#define write         freopen("output.txt","w",stdout)
#define prflag1(flag) printf("%s\n",(flag)?"YES":"NO")
#define prflag2(flag) printf("%s\n",(flag)?"Yes":"No")
#define prflag3(flag) printf("%s\n",(flag)?"yes":"no")
/* defining macros */

using namespace std;

template <class T> inline T bigmod(T b, T p, T m)
{
    T ret;
    if(p==0) return 1;
    if(p&1)
    {
        ret=(bigmod(b,p/2,m)%m);
        return ((b%m)*ret*ret)%m;
    }
    else
    {
        ret=(bigmod(b,p/2,m)%m);
        return (ret*ret)%m;
    }
}
/* template functions */

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int>pii;
typedef pair<LL, LL>pll;
typedef vector<int>vi;
typedef vector<LL>vll;
typedef vector<pii>vpii;
typedef vector<pll>vpll;
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
const double eps=1e-9;
const double pi=acos(-1.0);
const long long int mx=20;
const long long int mod=1e9+7;
/* global declaration */

LL a[mx+5],n,k,x;
vll ret[5000+5];
bool flag;

void clr_all(void)
{
    LL i;
    for(i=0;i<=5000;i++) ret[i].clear();
}

void backtrack(LL l, LL sum, vll sets)
{
    LL i,j;
    if(sum==k)
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<ret[i].size() && sets.size()==ret[i].size();j++)
            {
                if(ret[i][j]!=sets[j]) break;
            }
            if(j==ret[i].size()) break;
        }
        if(i<x) return;
        for(i=0;i<sets.size();i++)
        {
            printf("%lld",sets[i]);
            if(i<sets.size()-1) printf("+");
            ret[x].pb(sets[i]);
        }
        x++;
        nl;
        flag=false;
        return;
    }
    if(l>=n) return;
    for(i=l; i<n; i++)
    {
        sets.pb(a[i]);
        if(sum+a[i]<=k) backtrack(i+1,sum+a[i],sets);
        sets.pop_back();
    }
    return;
}

int main()
{
    LL i;
    vll s;
    while(scanf("%lld %lld",&k,&n))
    {
        if(!k && !n) break;
        for(i=0; i<n; i++) scanf("%lld",&a[i]);
        printf("Sums of %lld:\n",k);
        clr_all();
        x=0;
        flag=true;
        backtrack(0,0,s);
        if(flag) printf("NONE\n");
    }
    return 0;
}
