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
const long long int mn=30;
const long long int mx=3e3;
const long long int mod=1e9+7;
/* global declaration */

struct treasure
{
    LL dive,gold,depth;
};

struct diver
{
    LL tot,diving;
    bool chk;
    vll a;
};

treasure x[mn+5];
LL n,cap;
diver dp[mn+5][mx+5];

void clear(void)
{
    LL i,j;
    for(i=0; i<=mn; i++)
    {
        for(j=0; j<=mx; j++)
        {
            dp[i][j].a.clear();
            dp[i][j].chk=false;
            dp[i][j].tot=0;
            dp[i][j].diving=0;
        }
    }
}

diver knapsack(LL i, diver golds)
{
    if(i==n+1) return golds;
    if(dp[i][golds.diving].chk) return dp[i][golds.diving];

    diver l,r,k;

    l=golds;
    l.tot+=x[i].gold;
    l.diving+=x[i].dive;
    l.a.pb(i);

    r.a.clear();
    r.diving=r.tot=0;

    k.a.clear();
    k.diving=k.tot=0;

    if(l.diving<=cap) r=knapsack(i+1,l);
    k=knapsack(i+1,golds);

    if(r.tot>k.tot) dp[i][golds.diving]=r;
    else dp[i][golds.diving]=k;

    l=dp[i][golds.diving];
    l.chk=true;

    return l;
}

int main()
{
    LL i,j,k,w;
    bool flag=false;
    diver ans;
    vll trs;
    while(cin>>cap>>w>>n)
    {
        if(flag) nl;
        flag=true;
        for(i=1; i<=n; i++)
        {
            scanf("%lld %lld",&x[i].depth,&x[i].gold);
            x[i].dive=3*w*x[i].depth;
        }
        clear();
        ans.a.clear();
        ans.chk=ans.diving=ans.tot=0;

        ans=knapsack(1,ans);
        trs=ans.a;
        sort(trs.begin(),trs.end());

        pr1(ans.tot);
        pr1(trs.size());
        for(i=0; i<trs.size(); i++) printf("%lld %lld\n",x[trs[i]].depth,x[trs[i]].gold);

    }
    return 0;
}
