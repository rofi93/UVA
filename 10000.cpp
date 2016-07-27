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
const long long int mx=100;
const long long int mod=1e9+7;
/* global declaration */

struct longest
{
    int path_length,end_point;
    bool flag;
};

bool graph[mx+5][mx+5];
longest dp[mx+5];

longest lis(int x, int n)
{
    int i;
    longest cnt;
    longest &ret=dp[x];
    if(ret.flag) return ret;

    cnt.path_length=1;
    cnt.end_point=x;
    for(i=1;i<=n;i++)
    {
        if(graph[x][i])
        {
            longest another=lis(i,n);
            if(another.path_length+1>cnt.path_length)
            {
                cnt.path_length=another.path_length+1;
                cnt.end_point=another.end_point;
            }
            else if(another.path_length+1==cnt.path_length && another.end_point<cnt.end_point)
            {
                cnt.path_length=another.path_length+1;
                cnt.end_point=another.end_point;
            }

        }
    }
    ret=cnt;
    ret.flag=1;
    return ret;
}

int main()
{
    int n,s,i,j,p,q;
    longest ans,another;
    while(scanf("%d",&n))
    {
        if(!n) break;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++) graph[i][j]=0;
            dp[i].flag=0;
            dp[i].end_point=0;
            dp[i].path_length=0;
        }

        scanf("%d",&s);
        while(scanf("%d %d",&p,&q))
        {
            if(!p && !q) break;
            graph[p][q]=1;
        }
        ans.path_length=-1;
        for(i=1;i<=n;i++)
        {
            if(graph[s][i])
            {
                another=lis(i,n);
                if(another.path_length>ans.path_length)
                {
                    ans.path_length=another.path_length;
                    ans.end_point=another.end_point;
                }
            }
        }
        tc1(tc++);
        printf("The longest path from %d has length %d, finishing at %d.\n\n",s,ans.path_length,ans.end_point);
    }
    return 0;
}
