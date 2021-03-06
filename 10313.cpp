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
const long long int mx=300;
const long long int mod=1e9+7;
/* global declaration */

LL dp[mx+5][mx+5][mx+5];

LL coin_change(LL i, LL sum, LL taken)
{
    if(taken==0) return sum==0;
    if(taken>sum) return 0;
    if(i>sum) return 0;

    LL &ret=dp[i][taken][sum];
    if(ret!=-1) return ret;

    LL cnt=0;
    cnt+=coin_change(i,sum-i,taken-1);
    cnt+=coin_change(i+1,sum,taken);

    ret=cnt;
    return ret;
}

int main()
{
    char str[mx+5];
    LL i,n,k;
    setneg(dp);
    while(gets(str))
    {
        vll a;
        i=0;
        k=strlen(str);
        while(i<k)
        {
            n=0;
            while(i<k && str[i]!=' ') n=n*10+(str[i++]-'0');
            i++;
            a.pb(n);
        }
        n=0;
        if(a.size()==1) for(i=0;i<=a[0];i++) n+=coin_change(1,a[0],i);
        else if(a.size()==2) for(i=0;i<=a[1];i++) n+=coin_change(1,a[0],i);
        else if(a.size()==3) for(i=a[1];i<=a[2];i++) n+=coin_change(1,a[0],i);
        printf("%lld\n",n);
    }
    return 0;
}
