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

int main()
{
    int i,n,t,j,battle,green,blue,x;
    scanf("%d",&t);
    while(t--)
    {
        multiset<int>B,G;
        multiset<int>::iterator bit,git;
        scanf("%d %d %d",&battle,&green,&blue);
        for(i=0; i<green; i++)
        {
            scanf("%d",&x);
            G.insert(x);
        }
        for(i=0; i<blue; i++)
        {
            scanf("%d",&x);
            B.insert(x);
        }
        while(B.size() && G.size())
        {
            vector<int> storeb,storeg;
            for(i=0; i<battle; i++)
            {
                bit=B.end(); bit--;
                git=G.end(); git--;
                if(*bit > *git) storeb.pb(*bit - *git);
                else if(*git > *bit) storeg.pb(*git - *bit);
                B.erase(bit);
                G.erase(git);
                if(G.empty() || B.empty()) break;
            }
            for(i=0;i<storeb.size();i++) B.insert(storeb[i]);
            for(i=0;i<storeg.size();i++) G.insert(storeg[i]);
        }
        if(B.empty() && G.empty())
        {
            printf("green and blue died\n");
        }
        else if(!G.empty())
        {
            printf("green wins\n");
            for(git=G.end();git!=G.begin();) printf("%d\n",*--git);
        }
        else if(!B.empty())
        {
            printf("blue wins\n");
            for(bit=B.end();bit!=B.begin();) printf("%d\n",*--bit);
        }
        if(t) nl;
    }
    return 0;
}
