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
const long long int mx=100000;
/* global declaration */

int arr[mx+5];
int tree[3*mx+5];

void build(int node, int b, int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int L=node*2;
    int R=L+1;
    int M=(b+e)/2;
    build(L,b,M);
    build(R,M+1,e);
    tree[node]=tree[L]*tree[R];
}

int query(int node, int b, int e, int i, int j)
{
    if(i>e || j<b) return 1;
    if(b>=i && e<=j) return tree[node];
    int L=node*2;
    int R=L+1;
    int M=(b+e)/2;
    int p1=query(L,b,M,i,j);
    int p2=query(R,M+1,e,i,j);
    return p1*p2;
}

void update(int node, int b, int e, int i, int n)
{
    if(i>e || i<b) return;
    if(b>=i && e<=i)
    {
        tree[node]=n;
        return;
    }
    int L=node*2;
    int R=L+1;
    int M=(b+e)/2;
    update(L,b,M,i,n);
    update(R,M+1,e,i,n);
    tree[node]=tree[L]*tree[R];
}

int main()
{
    int i,j,a,b,n,k,x;
    char ch[10];
    string str;
    while(cin>>n>>k)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>0) arr[i]=1;
            else if(arr[i]<0) arr[i]=-1;
        }
        build(1,1,n);
        str="";
        for(i=0;i<k;i++)
        {
            scanf("%s %d %d",ch,&a,&b);
            if(ch[0]=='C')
            {
                if(b>0) b=1;
                else if(b<0) b=-1;
                update(1,1,n,a,b);
            }
            else
            {
                x=query(1,1,n,a,b);
                if(x>0) str+="+";
                else if(x<0) str+="-";
                else str+="0";
            }
        }
        pr1(str);
    }
    return 0;
}
