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
#define tc4(x)      printf("Case #%d\n",x)

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
const long long int mx=100000;
/* global declaration */

class nodes
{
public:
    int u,v;
    nodes(int a, int b)
    {
        u=a;
        v=b;
    }
    nodes()
    {

    }
};

bool operator<(nodes A, nodes B)
{
    return B.v<A.v;
}

int main()
{
    int node1,node2,weight,i,n,m,q,ans,u,v;
    bool visited[101],found,res=false;
    while(scanf("%d %d %d",&n,&m,&q))
    {
        if(!n && !m && !q)
            break;

        vi adjacent[101],cost[101];

        if(res)
            nl;
        else
            res=true;

        for(i=1; i<=m; i++)
        {
            scanf("%d %d %d",&node1,&node2,&weight);
            adjacent[node1].pb(node2);
            adjacent[node2].pb(node1);
            cost[node1].pb(weight);
            cost[node2].pb(weight);
        }
        tc4(tc++);
        while(q--)
        {
            scanf("%d %d",&node1,&node2);

            priority_queue<nodes>PQ;
            nodes top;
            for(i=1; i<=n; i++)
            {
                visited[i]=false;
            }
            ans=0;
            PQ.push(nodes(node1,0));
            found=false;
            while(!PQ.empty())
            {
                top=PQ.top();
                PQ.pop();
                u=top.u;
                if(!visited[u])
                {
                    visited[u]=true;
                    if(top.v>ans)
                        ans=top.v;
                    if(u==node2)
                    {
                        found=true;
                        break;
                    }
                    for(i=0; i<adjacent[u].size(); i++)
                    {
                        v=adjacent[u][i];
                        if(!visited[v])
                            PQ.push(nodes(adjacent[u][i],cost[u][i]));
                    }
                }
            }
            if(found)
                printf("%d\n",ans);
            else
                printf("no path\n");
        }
    }
    return 0;
}
