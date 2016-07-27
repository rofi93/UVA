/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

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
template <class T> inline T _sqrt(T a)
{
    return (T)sqrt((double)a);
}
template <class T, class X> inline T _pow(T a, X b)
{
    T res=1;
    for(int i=1; i<=b; i++)
        res*=a;
    return res;
}
/* template functions */

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
const long long int mx=200;
const int inf=99999999;
/* global declaration */

int dist[mx+5];
int busy[mx+5];
struct edges
{
    int src,dest,cost;
};
edges x[4000+5];
void reset(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        dist[i]=inf;
    }
}

int main()
{
    int i,n,m,u,v,w,q,j;
    bool used;
    while(cin>>n)
    {
        reset(n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&busy[i]);
        }
        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&x[i].src,&x[i].dest);
            u=x[i].src;
            v=x[i].dest;
            w=busy[v]-busy[u];
            x[i].cost=(w*w*w);
        }
        dist[1]=0;
        for(i=1; i<n; i++)
        {
            used=true;
            for(j=1; j<=m; j++)
            {
                u=x[j].src;
                v=x[j].dest;
                if(dist[u]+x[j].cost<dist[v] && dist[u]!=inf)
                {
                    dist[v]=dist[u]+x[j].cost;
                    used=false;
                }
            }
            if(used)
                break;
        }
        for(j=1; j<=m; j++)
        {
            u=x[j].src;
            v=x[j].dest;
            if(dist[u]+x[j].cost<dist[v] && dist[u]!=inf)
            {
                dist[v]=-inf;
            }
        }

        scanf("%d",&q);
        printf("Set #%d\n",tc++);
        for(i=1; i<=q; i++)
        {
            scanf("%d",&u);
            if(n==0)
            {
                printf("?\n");
                continue;
            }
            if(dist[u]<3 || dist[u]==inf)
                printf("?\n");
            else
                printf("%d\n",dist[u]);
        }
    }
    return 0;
}
