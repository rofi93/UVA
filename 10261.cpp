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
const long long int mx=1e4;
const long long int mn=2e2;
const long long int mod=1e9+7;
/* global declaration */

LL cars[mn+5],length,n;
map<LL,string>dp[mn+5];

string knapsack(LL i, LL l, LL r, string str)
{
    LL k=max(l,r);

    if(k>=length) return str;
    if(i==n+1) return str;
    //if(dp[i][k]!="") return dp[i][k];

    string left=str,right=str;
    if(l+cars[i]<=length) left=knapsack(i+1,l+cars[i],r,str+"0");
    if(r+cars[i]<=length) right=knapsack(i+1,l,r+cars[i],str+"1");

    /*if(left.size()>right.size()) dp[i][k]=left.size();
    else dp[i][k]=right.size();*/
    dp[i][k]=max(left,right);
    pr3(i,max(left,right),dp[i][k]);

    return dp[i][k];
}

int main()
{
    LL t,i;
    string str;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&length);
        length*=100;
        i=0;
        while(scanf("%lld",&n))
        {
            if(!n) break;
            cars[++i]=n;
        }
        n=i;
        str=knapsack(1,0,0,"");
        nl;
        pr1(str.size());
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='0') printf("port");
            else printf("starboard");
            nl;
        }
    }
    return 0;
}

/*
1

50
2500
3000
1000
1000
1500
700
800
0
*/
