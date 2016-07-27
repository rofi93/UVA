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
const long long int mx=1000;
/* global declaration */

vi edges[mx+5],revedges[mx+5],sortedlist;
bool visited[mx+5];
int compid[mx+5];

void reset(int n)
{
    int i;
    sortedlist.clear();
    for(i=1;i<=n;i++)
    {
        edges[i].clear();
        revedges[i].clear();
        visited[i]=false;
        compid[i]=0;
    }
}

void dfs1(int x)
{
    int i;
    visited[x]=true;
    for(i=0;i<edges[x].size();i++)
    {
        if(!visited[edges[x][i]])
        {
            dfs1(edges[x][i]);
        }
    }
    sortedlist.pb(x);
}

void dfs2(int x, int cmp)
{
    int i;
    visited[x]=false;
    compid[x]=cmp;
    for(i=0;i<revedges[x].size();i++)
    {
        if(visited[revedges[x][i]])
        {
            dfs2(revedges[x][i],cmp);
        }
    }
}

int SCC(int n)
{
    int i,cmp;
    for(i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            dfs1(i);
        }
    }
    cmp=0;
    for(i=sortedlist.size()-1;i>=0;i--)
    {
        if(visited[sortedlist[i]])
        {
            dfs2(sortedlist[i],++cmp);
        }
    }
    return cmp;
}

int main()
{
    int i,n,m,ass,u,v;
    char str1[101],str2[101];
    while(scanf("%d %d",&n,&m))
    {
        if(!n && !m)
            break;
        getchar();
        reset(n);
        map<string, int>mp;
        ass=0;
        for(i=1;i<=n;i++)
        {
            gets(str1);
            mp[str1]=++ass;
        }
        for(i=1;i<=m;i++)
        {
            gets(str1);
            gets(str2);
            u=mp[str1];
            v=mp[str2];
            edges[u].pb(v);
            revedges[v].pb(u);
        }
        printf("%d\n",SCC(n));
    }
    return 0;
}
