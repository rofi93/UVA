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
const long long int mx=200000;
/* global declaration */

LL arr[mx+5];
LL tree[3*mx+5];

void init(int node, int beg, int end)
{
    if(beg==end)
    {
        tree[node]=arr[beg];
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(beg+end)/2;
    init(left,beg,mid);
    init(right,mid+1,end);
    tree[node]=tree[left]+tree[right];
}

LL query(int node, int beg, int end, int i, int j)
{
    if(i>end || j<beg)
        return 0;
    if(beg>=i && end<=j)
        return tree[node];
    int left=2*node;
    int right=2*node+1;
    int mid=(beg+end)/2;
    LL sum1=query(left,beg,mid,i,j);
    LL sum2=query(right,mid+1,end,i,j);
    return sum1+sum2;
}

void update(int node, int beg, int end, int i, int data)
{
    if(i>end || i<beg)
        return;
    if(beg>=i && end<=i)
    {
        tree[node]=data;
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(beg+end)/2;
    update(left,beg,mid,i,data);
    update(right,mid+1,end,i,data);
    tree[node]=tree[left]+tree[right];
}

int main()
{
    int i,n,a,b;
    char str[5];
    bool first=false;
    while(scanf("%d",&n))
    {
        if(!n)
            break;
        if(first)
            nl;
        else
            first=true;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,1,n);
        tc3(tc++);
        while(scanf("%s",str))
        {
            if(strcmp("END",str)==0)
                break;
            if(str[0]=='M')
            {
                scanf("%d %d",&a,&b);
                printf("%lld\n",query(1,1,n,a,b));
            }
            else if(str[0]=='S')
            {
                scanf("%d %d",&a,&b);
                update(1,1,n,a,b);
            }
        }
    }
    return 0;
}
