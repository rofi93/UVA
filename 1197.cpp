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
const long long int mx=30000;
/* global declaration */

class union_find_disjoint_set
{
public:
    int i;
    int parent[mx+5];
    int set_size[mx+5];

    void union_set(int a, int b);
    int find_set(int a);
    int get_size(int a);
    union_find_disjoint_set()
    {

    }
    union_find_disjoint_set(int n)
    {
        for(i=0; i<n; i++)
        {
            parent[i]=i;
            set_size[i]=1;
        }
    }
};

int union_find_disjoint_set::find_set(int a)
{
    if(a==parent[a])
        return a;
    return parent[a]=find_set(parent[a]);
}

void union_find_disjoint_set::union_set(int a, int b)
{
    int u,v;
    u=find_set(a);
    v=find_set(b);
    if(u!=v)
    {
        parent[u]=v;
        set_size[v]+=set_size[u];
        set_size[u]=set_size[v];
    }
}

int union_find_disjoint_set::get_size(int a)
{
    int u;
    u=find_set(a);
    return set_size[u];
}

int main()
{
    int n,m,k,i,ans,x,y;

    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        union_find_disjoint_set objects(n);
        while(m--)
        {
            cin>>k;
            for(i=0; i<k; i++)
            {
                if(!i)
                    cin>>x;
                else
                {
                    cin>>y;
                    objects.union_set(x,y);
                }
            }
        }
        ans=objects.get_size(0);
        pr1(ans);
    }
    return 0;
}
